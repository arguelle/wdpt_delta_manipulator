#include "ros/ros.h"
#include "delta_libs/delta.h"
#include <iostream>

Delta delta;

int main(int argc, char **argv){
  // init
/*
  ros::init(argc, argv, "open_manipulator_controller");
  ros::NodeHandle node_handle("");

  std::string usb_port = "/dev/ttyUSB0";
  std::string baud_rate = "1000000";
*/

	delta.initOpenManipulator(true);
	delta.processOpenManipulator(0.0);

	std::cout << "test1" << std::endl;

	delta.makeTaskTrajectory("tool", math::vector3(0.0, 0.0, 0.042), 0.5);

	double thing = 0.0;

	for(int i = 0; i < 600; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0700, 0.0, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(-0.0400,  0.0, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0,  0.0, 0.042), 0.5);

	for(int i = 0; i < 600; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}



	delta.makeTaskTrajectory("tool", math::vector3(-0.0350, 0.0606, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0200,  -0.0346, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0,  0.0, 0.042), 0.5);

	for(int i = 0; i < 600; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}



	delta.makeTaskTrajectory("tool", math::vector3(-0.0350, -0.0606, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0200,  0.0346, 0.042), 2.0);

	for(int i = 0; i < 2000; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	delta.makeTaskTrajectory("tool", math::vector3(0.0,  0.0, 0.042), 0.5);

	for(int i = 0; i < 600; i++) {
		thing += 0.001;
		delta.processOpenManipulator(thing);
	}

	//delta.makeTaskTrajectory("tool", math::vector3(0.0, 0.0, 0.042), 2.0);
	//delta.processOpenManipulator(0.2);

	std::cout << "test2" << std::endl;
  // update
/*
  ros::Rate loop_rate(100);
  while (ros::ok())
  {
    ros::spinOnce();
    loop_rate.sleep();
  }
*/

  return 0;
}
