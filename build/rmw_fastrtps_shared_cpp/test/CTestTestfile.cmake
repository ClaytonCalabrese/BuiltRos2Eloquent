# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/rmw_fastrtps/rmw_fastrtps_shared_cpp/test
# Build directory: /opt/workspace/build/rmw_fastrtps_shared_cpp/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_dds_attributes_to_rmw_qos "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rmw_fastrtps_shared_cpp/test_results/rmw_fastrtps_shared_cpp/test_dds_attributes_to_rmw_qos.gtest.xml" "--package-name" "rmw_fastrtps_shared_cpp" "--output-file" "/opt/workspace/build/rmw_fastrtps_shared_cpp/ament_cmake_gtest/test_dds_attributes_to_rmw_qos.txt" "--command" "/opt/workspace/build/rmw_fastrtps_shared_cpp/test/test_dds_attributes_to_rmw_qos" "--gtest_output=xml:/opt/workspace/build/rmw_fastrtps_shared_cpp/test_results/rmw_fastrtps_shared_cpp/test_dds_attributes_to_rmw_qos.gtest.xml")
set_tests_properties(test_dds_attributes_to_rmw_qos PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rmw_fastrtps_shared_cpp/test/test_dds_attributes_to_rmw_qos" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rmw_fastrtps/rmw_fastrtps_shared_cpp")
subdirs("../gtest")
