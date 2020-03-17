# CMake generated Testfile for 
# Source directory: /opt/workspace/src/osrf/osrf_testing_tools_cpp/test_osrf_testing_tools_cpp
# Build directory: /opt/workspace/build/test_osrf_testing_tools_cpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_example_memory_tools "/opt/workspace/install/osrf_testing_tools_cpp/lib/osrf_testing_tools_cpp/test_runner" "--env" "LD_PRELOAD=/opt/workspace/install/osrf_testing_tools_cpp/lib/libmemory_tools_interpose.so" "--" "/opt/workspace/build/test_osrf_testing_tools_cpp/test_example_memory_tools_gtest")
set_tests_properties(test_example_memory_tools PROPERTIES  TIMEOUT "60")
add_test(test_is_not_working_gtest "/opt/workspace/install/osrf_testing_tools_cpp/lib/osrf_testing_tools_cpp/test_runner" "--" "/opt/workspace/build/test_osrf_testing_tools_cpp/test_is_not_working_gtest")
set_tests_properties(test_is_not_working_gtest PROPERTIES  TIMEOUT "60")
subdirs("googletest-1.8.0-extracted/googletest-1.8.0-build")
