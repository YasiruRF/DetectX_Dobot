import rclpy
from rclpy.node import Node
from dobot_client import DobotClient

from kinematics import inverse_kinematics
from dobot_interface.srv import PickAndPlace  # custom service interface

import time

CLEARANCE_Z = 100.0


class PickAndPlaceNode(Node):

    def __init__(self):
        super().__init__("pick_and_place_node")
        self.dobot = DobotClient()

        self.service = self.create_service(
            PickAndPlace,
            "pick_and_place",
            self.service_callback,
        )
        self.get_logger().info("Pick-and-place service server is ready.")

    
    def pose_to_joints(self, x, y, z, r):
        theta1, theta2, theta3, theta4 = inverse_kinematics(x, y, z, r)
        return theta1, theta2, theta3, theta4
    
    def goal_valid(self, x, y, z, r):
        theta1, theta2, theta3, theta4 = self.pose_to_joints(x, y, z, r)
        return self.dobot.is_goal_valid(theta1, theta2, theta3, theta4)

    def service_callback(self, request, response):
        px, py, pz, pr = request.pick_pose
        dx, dy, dz, dr = request.place_pose

        if not self.goal_valid(px, py, pz, pr):
            response.success = False
            response.message = (
                f"Pick pose ({px}, {py}, {pz}, {pr}) is outside the reachable workspace."
            )
            self.get_logger().warn(response.message)
            return response

        if not self.goal_valid(dx, dy, dz, dr):
            response.success = False
            response.message = (
                f"Place pose ({dx}, {dy}, {dz}, {dr}) is outside the reachable workspace."
            )
            self.get_logger().warn(response.message)
            return response

        try:
            self.get_logger().info(
                f"Starting pick-and-place: "
                f"pick=({px},{py},{pz},{pr})  place=({dx},{dy},{dz},{dr})"
            )

            self.get_logger().info("Starting")
            theta1, theta2, theta3, theta4 = self.pose_to_joints(0, 207, 0, 203)
            self.dobot.set_joint_ptp(theta1, theta2, theta3, theta4)
            time.sleep(0.5)
            

        except Exception as e:
            response.success = False
            response.message = f"Error during pick-and-place: {str(e)}"
            self.get_logger().error(response.message)

        return response

def main(args=None):
    try:
        with rclpy.init(args=args):
            node = PickAndPlaceNode()
            rclpy.spin(node)
    except (KeyboardInterrupt):
        pass


if __name__ == "__main__":
    main()