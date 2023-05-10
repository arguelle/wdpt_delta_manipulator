# Delta manipulator installation guide

```bash
sudo apt install ros-noetic-dynamixel-sdk ros-noetic-dynamixel-workbench*
sudo apt install ros-noetic-robotis-manipulator
```

create a catkin workspace
```bash
mkdir -p manip_ws/src
cd manip_ws/src

git clone -b 2.0.1 https://github.com/ROBOTIS-GIT/open_manipulator.git
git clone -b 1.0.1 https://github.com/ROBOTIS-GIT/open_manipulator_msgs.git
git clone https://github.com/ROBOTIS-GIT/open_manipulator_dependencies.git
```
