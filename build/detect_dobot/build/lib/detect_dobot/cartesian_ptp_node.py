import threading
import rclpy
import time
from rclpy.action import ActionServer, CancelResponse, GoalResponse
from rclpy.node import Node

from dobot_interface.action import PosePTP
from .dobot_client import DobotClient
from .kinematics import forward_kinematics, inverse_kinematics

class CartesianPTPNode(Node):

    def __init__(self):
        super().__init__('cartesian_ptp_node')
        self.goal_handle = None
        self.goal_lock = threading.Lock()
        self.dobot = DobotClient()

        self.action_server = ActionServer(
            self,
            PosePTP,
            "set_cartesian_ptp",
            execute_callback=self.execute_callback,
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            handle_accepted_callback=self.handle_accepted_callback,
            callback_group=None,
        )

    def destroy(self):
        self.action_server.destroy()
        super().destroy_node()

    def goal_callback(self, goal_request):
        self.get_logger().info("Received goal request")
        x , y, z, r = goal_request.pose_goal
        theta1, theta2, theta3, theta4 = inverse_kinematics(x, y, z, r)

        if self.dobot.is_goal_valid(theta1, theta2, theta3, theta4):
            return GoalResponse.ACCEPT
        else:
            self.get_logger().error("Invalid goal")
            return GoalResponse.REJECT
        
    def handle_accepted_callback(self, goal_handle):
        with self.goal_lock:
            if self.goal_handle is not None and self.goal_handle.is_active:
                self.get_logger().info("Canceling previous goal")
                self.dobot.stop_current_action()
                self.goal_handle.canceled()
            self.goal_handle = goal_handle
        
        goal_handle.execute()

    def cancel_callback(self, goal_handle):
        self.dobot.stop_current_action()
        self.get_logger().info("Goal canceled")
        return CancelResponse.ACCEPT
    
    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing goal")

        goal_msg = goal_handle.request.pose_goal
        x , y, z, r = goal_msg

        theta1, theta2, theta3, theta4 = inverse_kinematics(x, y, z, r)
        self.dobot.set_joint_ptp(theta1, theta2, theta3, theta4)

        feedback_msg = PosePTP.Feedback()
        result_msg = PosePTP.Result()

        position_threshold = 0.2
        rotation_threshold = 0.01


        time.sleep(0.1)

        while rclpy.ok():
            if not goal_handle.is_active:
                self.get_logger().info("Goal is not active")
                result_msg.success = False
                return result_msg
            

            if goal_handle.is_cancel_requested:
                self.get_logger().info("Goal cancel requested")
                self.dobot.stop_current_action()
                goal_handle.canceled()
                result_msg.success = False
                return result_msg
            
            theta1, theta2, theta3, theta4 = self.dobot.get_joint_state()
            x ,y, z, r = forward_kinematics(theta1, theta2, theta3, theta4)
            feedback_msg.present_pose = [x, y, z, r]
            goal_handle.publish_feedback(feedback_msg)

            position_error = [abs(goal_msg[i] - feedback_msg.present_pose[i]) for i in range(3)]
            rotation_error = [abs(goal_msg[3] - feedback_msg.present_pose[3])]

            if all(error < position_threshold for error in position_error) and all(error < rotation_threshold for error in rotation_error):
                self.get_logger().info("Goal reached")
                result_msg.success = True
                return result_msg
            
            time.sleep(0.1)
    
def main(args=None):
    try:
        with rclpy.init(args=args):
            node = CartesianPTPNode()
            
            executor = rclpy.executors.MultiThreadedExecutor()
            rclpy.spin(node, executor=executor)
    except (KeyboardInterrupt):
        pass

if __name__ == '__main__':
    main()



    

