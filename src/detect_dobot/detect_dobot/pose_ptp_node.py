import math
from detect_dobot.detect_dobot.dobot_client import DobotClient
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose

from dobot_interface.action import PosePTP
from kinematics import forward_kinematics

class PosePTPNode(Node):
    def __init__(self):
        super().__init__('pose_ptp_node')
        self.dobot = DobotClient()
        self.publisher = self.create_publisher(Pose, 'dobot_pose', 10)
        timer_period = 0.2
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def yaw_to_quaternion(self, yaw_degrees):
        yaw_radians = math.radians(yaw_degrees)
        axis_x, axis_y, axis_z = 0, 0, 1
        x = axis_x * math.sin(yaw_radians / 2)
        y = axis_y * math.sin(yaw_radians / 2)
        z = axis_z * math.sin(yaw_radians / 2)
        w = math.cos(yaw_radians / 2)
        return x, y, z, w

    def timer_callback(self):
        pose_msg = Pose()

        try:
            j1, j2, j3, j4 = self.dobot.get_joint_state()
            x, y, z, r = forward_kinematics(j1, j2, j3, j4)
            pose_msg.position.x = x
            pose_msg.position.y = y
            pose_msg.position.z = z
            (
                pose_msg.orientation.x,
                pose_msg.orientation.y,
                pose_msg.orientation.z,
                pose_msg.orientation.w,
            ) = self.yaw_to_quaternion(r)

            self.publisher.publish(pose_msg)
            self.get_logger().info(f"Published pose: {pose_msg}")


        except Exception as e:
            self.get_logger().error(f"Error in pose: {e}")

    
def main(args=None):
    try:
        with rclpy.init(args=args):
            node = PosePTPNode()
            rclpy.spin(node)
        
    except (KeyboardInterrupt):
        pass

if __name__ == '__main__':
    main() 
            
