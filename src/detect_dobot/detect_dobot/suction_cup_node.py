import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
from dobot_client import DobotClient

class SuctionCup(Node):

    def __init__(self):
        super().__init__("suction_cup_node")
        self.dobot = DobotClient()
        self.service = self.create_service(Trigger, "suction_cup", self.service_callback)
        self.suction_enabled = False
        self.get_logger().info("Suction cup service ready")

    def service_callback(self, request, response):
        try:
            self.get_logger().info("Received suction cup service request")
            self.suction_enabled = not self.suction_enabled
            self.dobot.set_suction_cup(self.suction_enabled)
            response.success = True
            response.message = f"Suction cup toggled to {'ON' if self.suction_enabled else 'OFF'} successfully"
            self.get_logger().info(response.message)

        except Exception as e:
            response.success = False
            response.message = f"Failed to toggle suction cup: {e}"
            self.get_logger().error(response.message)
        
        return response
    
def main(args=None):
    try:
        with rclpy.init(args=args):
            node = SuctionCup()
            rclpy.spin(node)
        
    except (KeyboardInterrupt):
        pass

if __name__ == '__main__':
    main()


