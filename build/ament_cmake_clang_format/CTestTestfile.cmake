# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ament/ament_lint/ament_cmake_clang_format
# Build directory: /opt/workspace/build/ament_cmake_clang_format
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/ament_cmake_clang_format/test_results/ament_cmake_clang_format/copyright.xunit.xml" "--package-name" "ament_cmake_clang_format" "--output-file" "/opt/workspace/build/ament_cmake_clang_format/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/ament_cmake_clang_format/test_results/ament_cmake_clang_format/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ament/ament_lint/ament_cmake_clang_format")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/ament_cmake_clang_format/test_results/ament_cmake_clang_format/lint_cmake.xunit.xml" "--package-name" "ament_cmake_clang_format" "--output-file" "/opt/workspace/build/ament_cmake_clang_format/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/ament_cmake_clang_format/test_results/ament_cmake_clang_format/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ament/ament_lint/ament_cmake_clang_format")
