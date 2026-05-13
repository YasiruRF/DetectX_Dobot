import math
import time

import cv2
import mediapipe as mp
import rclpy
from rclpy.node import Node

from .dobot_client import DobotClient
from .kinematics import inverse_kinematics


X_CENTER = 170.0
Y_CENTER = 0.0
X_RANGE = 50.0
Y_RANGE = 50.0
Z_HEIGHT = 60.0
R_FIXED = 0.0
MIN_MOVE_DELTA = 4.0
COMMAND_INTERVAL = 0.15


class VisionNode(Node):
    def __init__(self):
        super().__init__('vision_node')
        self.dobot = DobotClient()
        self.capture = cv2.VideoCapture(0)
        self.hands = mp.solutions.hands.Hands(
            static_image_mode=False,
            max_num_hands=1,
            min_detection_confidence=0.6,
            min_tracking_confidence=0.6,
        )
        self.last_target = None
        self.last_command_time = 0.0
        self.timer = self.create_timer(0.1, self.timer_callback)

        if not self.capture.isOpened():
            raise RuntimeError('Could not open camera 0')

        self.get_logger().info('Vision node started')

    def destroy_node(self):
        self.capture.release()
        self.hands.close()
        super().destroy_node()

    def _hand_to_pose(self, hand_landmarks):
        index_tip = hand_landmarks.landmark[8]
        x = X_CENTER + (index_tip.x - 0.5) * 2.0 * X_RANGE
        y = Y_CENTER + (0.5 - index_tip.y) * 2.0 * Y_RANGE
        return x, y, Z_HEIGHT, R_FIXED

    def _pose_to_joints(self, x, y, z, r):
        theta1, theta2, theta3, theta4 = inverse_kinematics(x, y, z, r)
        return (
            math.degrees(theta1),
            math.degrees(theta2),
            math.degrees(theta3),
            math.degrees(theta4),
        )

    def timer_callback(self):
        if time.monotonic() - self.last_command_time < COMMAND_INTERVAL:
            return

        ok, frame = self.capture.read()
        if not ok:
            self.get_logger().warning('Could not read camera frame')
            return

        frame = cv2.flip(frame, 1)
        rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
        results = self.hands.process(rgb_frame)

        if not results.multi_hand_landmarks:
            return

        target_pose = self._hand_to_pose(results.multi_hand_landmarks[0])
        if self.last_target and all(
            abs(current - previous) < MIN_MOVE_DELTA
            for current, previous in zip(target_pose, self.last_target)
        ):
            return

        try:
            joints = self._pose_to_joints(*target_pose)
            if not self.dobot.is_goal_valid(*joints):
                self.get_logger().warning('Mapped pose is outside joint limits')
                return

            self.dobot.set_joint_ptp(*joints)
            self.last_target = target_pose
            self.last_command_time = time.monotonic()
            self.get_logger().info(
                f'Hand target -> cartesian=({target_pose[0]:.1f}, {target_pose[1]:.1f}, {target_pose[2]:.1f}, {target_pose[3]:.1f})'
            )
        except Exception as error:
            self.get_logger().error(f'Vision control error: {error}')


def main(args=None):
    rclpy.init(args=args)
    node = None
    try:
        node = VisionNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node is not None:
            node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()