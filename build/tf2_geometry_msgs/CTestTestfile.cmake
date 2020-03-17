# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/geometry2/tf2_geometry_msgs
# Build directory: /opt/workspace/build/tf2_geometry_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_tf2_geometry_msgs "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2_geometry_msgs/test_results/tf2_geometry_msgs/test_tf2_geometry_msgs.gtest.xml" "--package-name" "tf2_geometry_msgs" "--output-file" "/opt/workspace/build/tf2_geometry_msgs/ament_cmake_gtest/test_tf2_geometry_msgs.txt" "--command" "/opt/workspace/build/tf2_geometry_msgs/test_tf2_geometry_msgs" "--gtest_output=xml:/opt/workspace/build/tf2_geometry_msgs/test_results/tf2_geometry_msgs/test_tf2_geometry_msgs.gtest.xml")
set_tests_properties(test_tf2_geometry_msgs PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2_geometry_msgs/test_tf2_geometry_msgs" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2_geometry_msgs")
subdirs("gtest")
