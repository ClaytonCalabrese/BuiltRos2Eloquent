# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/geometry2/tf2_eigen
# Build directory: /opt/workspace/build/tf2_eigen
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tf2_eigen-test "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2_eigen/test_results/tf2_eigen/tf2_eigen-test.gtest.xml" "--package-name" "tf2_eigen" "--output-file" "/opt/workspace/build/tf2_eigen/ament_cmake_gtest/tf2_eigen-test.txt" "--command" "/opt/workspace/build/tf2_eigen/tf2_eigen-test" "--gtest_output=xml:/opt/workspace/build/tf2_eigen/test_results/tf2_eigen/tf2_eigen-test.gtest.xml")
set_tests_properties(tf2_eigen-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2_eigen/tf2_eigen-test" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2_eigen")
subdirs("gtest")
