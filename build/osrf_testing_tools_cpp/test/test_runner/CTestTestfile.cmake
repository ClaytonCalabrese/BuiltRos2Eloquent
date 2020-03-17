# CMake generated Testfile for 
# Source directory: /opt/workspace/src/osrf/osrf_testing_tools_cpp/osrf_testing_tools_cpp/test/test_runner
# Build directory: /opt/workspace/build/osrf_testing_tools_cpp/test/test_runner
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_parse_environment_variable "/opt/workspace/build/osrf_testing_tools_cpp/test/test_runner/test_parse_environment_variable")
add_test(test_test_runner "/opt/workspace/build/osrf_testing_tools_cpp/src/test_runner/test_runner" "--env" "FOO=bar" "PING=pong" "--append-env" "FOO=baz" "--" "/opt/workspace/build/osrf_testing_tools_cpp/test/test_runner/assert_env_vars" "--env" "FOO=bar:baz" "PING=pong")
