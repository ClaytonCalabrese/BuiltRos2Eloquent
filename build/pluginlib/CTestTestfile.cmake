# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros/pluginlib/pluginlib
# Build directory: /opt/workspace/build/pluginlib
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pluginlib_unique_ptr_test "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pluginlib/test_results/pluginlib/pluginlib_unique_ptr_test.gtest.xml" "--package-name" "pluginlib" "--output-file" "/opt/workspace/build/pluginlib/ament_cmake_gtest/pluginlib_unique_ptr_test.txt" "--env" "AMENT_PREFIX_PATH=/opt/workspace/build/pluginlib/prefix" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/pluginlib/prefix/lib" "--command" "/opt/workspace/build/pluginlib/pluginlib_unique_ptr_test" "--gtest_output=xml:/opt/workspace/build/pluginlib/test_results/pluginlib/pluginlib_unique_ptr_test.gtest.xml")
set_tests_properties(pluginlib_unique_ptr_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/pluginlib/pluginlib_unique_ptr_test" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros/pluginlib/pluginlib")
add_test(pluginlib_utest "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pluginlib/test_results/pluginlib/pluginlib_utest.gtest.xml" "--package-name" "pluginlib" "--output-file" "/opt/workspace/build/pluginlib/ament_cmake_gtest/pluginlib_utest.txt" "--env" "AMENT_PREFIX_PATH=/opt/workspace/build/pluginlib/prefix" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/pluginlib/prefix/lib" "--command" "/opt/workspace/build/pluginlib/pluginlib_utest" "--gtest_output=xml:/opt/workspace/build/pluginlib/test_results/pluginlib/pluginlib_utest.gtest.xml")
set_tests_properties(pluginlib_utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/pluginlib/pluginlib_utest" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros/pluginlib/pluginlib")
subdirs("gtest")
