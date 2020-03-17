# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/sros2/sros2_cmake
# Build directory: /opt/workspace/build/sros2_cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/copyright.xunit.xml" "--package-name" "sros2_cmake" "--output-file" "/opt/workspace/build/sros2_cmake/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/sros2/sros2_cmake")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/lint_cmake.xunit.xml" "--package-name" "sros2_cmake" "--output-file" "/opt/workspace/build/sros2_cmake/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/sros2/sros2_cmake")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/xmllint.xunit.xml" "--package-name" "sros2_cmake" "--output-file" "/opt/workspace/build/sros2_cmake/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/sros2_cmake/test_results/sros2_cmake/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/sros2/sros2_cmake")
