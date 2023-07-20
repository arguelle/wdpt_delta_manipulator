# Delta manipulator control for WDPT drone

## Install dependencies
Ros must already be installed on the system.
The user must be added to the "dialout" group.

```bash
sudo apt install ros-noetic-dynamixel-sdk ros-noetic-dynamixel-workbench*
sudo apt install ros-noetic-robotis-manipulator
sudo apt install ros-noetic-moveit
sudo usermod -aG dialout $USER
```

## Create a catkin workspace and clone with repository into src

```bash
mkdir -p manip_ws/src
cd manip_ws/src
git clone 
```

## Install ds4drv to enable wireless use of PS4 controller
This step is not required if testing with a wired controller.

```bash
sudo apt install python3-pip
sudo pip install ds4drv
```
