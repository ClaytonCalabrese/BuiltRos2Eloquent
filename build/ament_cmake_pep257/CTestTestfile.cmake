# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ament/ament_lint/ament_cmake_pep257
# Build directory: /opt/workspace/build/ament_cmake_pep257
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/ament_cmake_pep257/test_results/ament_cmake_pep257/copyright.xunit.xml" "--package-name" "ament_cmake_pep257" "--output-file" "/opt/workspace/build/ament_cmake_pep257/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/ament_cmake_pep257/test_results/ament_cmake_pep257/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ament/ament_lint/ament_cmake_pep257")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/ament_cmake_pep257/test_results/ament_cmake_pep257/lint_cmake.xunit.xml" "--package-name" "ament_cmake_pep257" "--output-file" "/opt/workspace/build/ament_cmake_pep257/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/ament_cmake_pep257/test_results/ament_cmake_pep257/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ament/ament_lint/ament_cmake_pep257")