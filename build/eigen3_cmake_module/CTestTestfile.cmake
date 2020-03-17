# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/eigen3_cmake_module
# Build directory: /opt/workspace/build/eigen3_cmake_module
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/eigen3_cmake_module/test_results/eigen3_cmake_module/lint_cmake.xunit.xml" "--package-name" "eigen3_cmake_module" "--output-file" "/opt/workspace/build/eigen3_cmake_module/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/eigen3_cmake_module/test_results/eigen3_cmake_module/lint_cmake.xunit.xml" "--filter=-convention/filename,-package/stdargs")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/eigen3_cmake_module")
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/eigen3_cmake_module/test_results/eigen3_cmake_module/copyright.xunit.xml" "--package-name" "eigen3_cmake_module" "--output-file" "/opt/workspace/build/eigen3_cmake_module/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/eigen3_cmake_module/test_results/eigen3_cmake_module/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/eigen3_cmake_module")
