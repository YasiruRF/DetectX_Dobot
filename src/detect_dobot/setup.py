from setuptools import find_packages, setup

package_name = 'detect_dobot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    package_dir={'': '.'},
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
         ("share/" + package_name + "/launch", ["launch/dobot_launch.xml"]),
         ("share/" + package_name + "/resource", ["resource/dobot_server.py", "resource/dobot_driver.py"]),
    ],

    package_data={'': ['py.typed']},
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='yasiru',
    maintainer_email='yasiru@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'homing_node = detect_dobot.homing_node:main',
            'suction_cup_node = detect_dobot.suction_cup_node:main',
            'pose_ptp_node = detect_dobot.pose_ptp_node:main',
            'cartesian_ptp_node = detect_dobot.cartesian_ptp_node:main',
            'pick_and_place_node = detect_dobot.pick_and_place_node:main',
            'vision_node = detect_dobot.vision_node:main',
        ],
    },
)
