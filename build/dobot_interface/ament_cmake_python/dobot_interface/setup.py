from setuptools import find_packages
from setuptools import setup

setup(
    name='dobot_interface',
    version='0.0.0',
    packages=find_packages(
        include=('dobot_interface', 'dobot_interface.*')),
)
