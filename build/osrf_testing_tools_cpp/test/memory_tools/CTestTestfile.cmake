# CMake generated Testfile for 
# Source directory: /opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/test/memory_tools
# Build directory: /opt/workspace/build/osrf_testing_tools_cpp/test/memory_tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_memory_tools "/opt/workspace/build/osrf_testing_tools_cpp/src/test_runner/test_runner" "--env" "LD_PRELOAD=/opt/workspace/build/osrf_testing_tools_cpp/src/memory_tools/libmemory_tools_interpose.so" "--" "/opt/workspace/build/osrf_testing_tools_cpp/test/memory_tools/test_memory_tools")
