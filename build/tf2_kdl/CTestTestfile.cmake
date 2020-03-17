# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/geometry2/tf2_kdl
# Build directory: /opt/workspace/build/tf2_kdl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_kdl "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2_kdl/test_results/tf2_kdl/test_kdl.gtest.xml" "--package-name" "tf2_kdl" "--output-file" "/opt/workspace/build/tf2_kdl/ament_cmake_gtest/test_kdl.txt" "--command" "/opt/workspace/build/tf2_kdl/test_kdl" "--gtest_output=xml:/opt/workspace/build/tf2_kdl/test_results/tf2_kdl/test_kdl.gtest.xml")
set_tests_properties(test_kdl PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2_kdl/test_kdl" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2_kdl")
subdirs("gtest")
