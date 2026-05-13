import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger

from dobot_client import DobotClient

class Homingnode(Node):
    
    def __init__ (self):
        super().__init__("homing_node")
        self.dobot = DobotClient()
        self.service = self.create_service(Trigger, "homing", self.service_callback)
        self.get_logger().info("Homing service ready")

    def service_callback(self, request, response):
        try:
            self.get_logger().info("Starting homing procedure")
            self.dobot.start_homing()
            response.success = True
            response.message = "Homing procedure started successfully"
            self.get_logger().info(response.message)
        except Exception as e:
            self.get_logger().error(f"Error occurred while starting homing procedure: {e}")
            response.success = False
            response.message = "Failed to start homing procedure"

        return response
    
def main(args=None):
    try:
        with rclpy.init(args=args):
            node = Homingnode()
            rclpy.spin(node)
        
    except (KeyboardInterrupt):
        pass

if __name__ == '__main__':
    main()