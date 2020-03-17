# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/urdfdom/urdf_parser/test
# Build directory: /opt/workspace/build/urdfdom/urdf_parser/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(urdf_unit_test "/opt/workspace/build/urdfdom/bin/urdf_unit_test" "--gtest_output=xml:/opt/workspace/build/urdfdom/test_results/urdf_unit_test.xml")
set_tests_properties(urdf_unit_test PROPERTIES  TIMEOUT "240")
