# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/geometry2/tf2
# Build directory: /opt/workspace/build/tf2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_cache_unittest "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2/test_results/tf2/test_cache_unittest.gtest.xml" "--package-name" "tf2" "--output-file" "/opt/workspace/build/tf2/ament_cmake_gtest/test_cache_unittest.txt" "--command" "/opt/workspace/build/tf2/test_cache_unittest" "--gtest_output=xml:/opt/workspace/build/tf2/test_results/tf2/test_cache_unittest.gtest.xml")
set_tests_properties(test_cache_unittest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2/test_cache_unittest" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2")
add_test(test_static_cache_unittest "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2/test_results/tf2/test_static_cache_unittest.gtest.xml" "--package-name" "tf2" "--output-file" "/opt/workspace/build/tf2/ament_cmake_gtest/test_static_cache_unittest.txt" "--command" "/opt/workspace/build/tf2/test_static_cache_unittest" "--gtest_output=xml:/opt/workspace/build/tf2/test_results/tf2/test_static_cache_unittest.gtest.xml")
set_tests_properties(test_static_cache_unittest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2/test_static_cache_unittest" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2")
add_test(test_simple "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2/test_results/tf2/test_simple.gtest.xml" "--package-name" "tf2" "--output-file" "/opt/workspace/build/tf2/ament_cmake_gtest/test_simple.txt" "--command" "/opt/workspace/build/tf2/test_simple" "--gtest_output=xml:/opt/workspace/build/tf2/test_results/tf2/test_simple.gtest.xml")
set_tests_properties(test_simple PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/tf2/test_simple" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2")
subdirs("gtest")
