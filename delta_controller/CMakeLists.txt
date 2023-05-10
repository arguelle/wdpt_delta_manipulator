cmake_minimum_required(VERSION 3.0.2)
project(delta_controller)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED)

find_package(catkin REQUIRED
  COMPONENTS
    roscpp
    std_msgs
    sensor_msgs
    geometry_msgs
    trajectory_msgs
    open_manipulator_msgs
    robotis_manipulator
    open_manipulator_libs
    delta_libs
    cmake_modules
)
find_package(Boost REQUIRED)

catkin_package(
  CATKIN_DEPENDS
    roscpp
    std_msgs
    sensor_msgs
    geometry_msgs
    trajectory_msgs
    open_manipulator_msgs
    robotis_manipulator
    open_manipulator_libs
    cmake_modules
		delta_libs
  DEPENDS Boost
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)
add_executable(delta_controller src/delta_controller.cpp)
add_dependencies(delta_controller ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(delta_controller ${catkin_LIBRARIES} ${Boost_LIBRARIES})

add_executable(delta_controller2 src/delta_controller2.cpp)
add_dependencies(delta_controller2 ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(delta_controller2 ${catkin_LIBRARIES} ${Boost_LIBRARIES})
