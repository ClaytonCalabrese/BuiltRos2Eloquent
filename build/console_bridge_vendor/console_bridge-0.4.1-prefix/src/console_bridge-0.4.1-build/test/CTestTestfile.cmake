# CMake generated Testfile for 
# Source directory: /opt/workspace/build/console_bridge_vendor/console_bridge-0.4.1-prefix/src/console_bridge-0.4.1/test
# Build directory: /opt/workspace/build/console_bridge_vendor/console_bridge-0.4.1-prefix/src/console_bridge-0.4.1-build/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(console_TEST "/opt/workspace/build/console_bridge_vendor/console_bridge-0.4.1-prefix/src/console_bridge-0.4.1-build/bin/console_TEST" "--gtest_output=xml:/opt/workspace/build/console_bridge_vendor/console_bridge-0.4.1-prefix/src/console_bridge-0.4.1-build/test_results/console_TEST.xml")
set_tests_properties(console_TEST PROPERTIES  TIMEOUT "240")
