# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/rosidl_defaults/rosidl_default_runtime
# Build directory: /opt/workspace/build/rosidl_default_runtime
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rosidl_default_runtime/test_results/rosidl_default_runtime/lint_cmake.xunit.xml" "--package-name" "rosidl_default_runtime" "--output-file" "/opt/workspace/build/rosidl_default_runtime/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/rosidl_default_runtime/test_results/rosidl_default_runtime/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rosidl_defaults/rosidl_default_runtime")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rosidl_default_runtime/test_results/rosidl_default_runtime/xmllint.xunit.xml" "--package-name" "rosidl_default_runtime" "--output-file" "/opt/workspace/build/rosidl_default_runtime/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/rosidl_default_runtime/test_results/rosidl_default_runtime/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rosidl_defaults/rosidl_default_runtime")
