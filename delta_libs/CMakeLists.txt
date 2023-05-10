cmake_minimum_required(VERSION 3.0.2)
project(delta_libs)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
    robotis_manipulator
    roscpp
    cmake_modules
    dynamixel_workbench_toolbox
)
find_package(Eigen3 REQUIRED)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES delta_libs
  CATKIN_DEPENDS roscpp robotis_manipulator dynamixel_workbench_toolbox cmake_modules
  DEPENDS EIGEN3
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIRS}
)

add_library(delta_libs
  src/delta.cpp
  src/delta_custom_trajectory.cpp
  src/delta_dynamixel.cpp
  src/delta_kinematics.cpp
)

add_dependencies(delta_libs ${catkin_EXPORTED_TARGETS})
target_link_libraries(delta_libs  ${catkin_LIBRARIES} ${Eigen3_LIBRARIES})

install(TARGETS delta_libs
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
)
