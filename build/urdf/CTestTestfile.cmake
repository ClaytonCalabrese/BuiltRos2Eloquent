# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/urdf/urdf
# Build directory: /opt/workspace/build/urdf
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/urdf/test_results/urdf/cppcheck.xunit.xml" "--package-name" "urdf" "--output-file" "/opt/workspace/build/urdf/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/urdf/test_results/urdf/cppcheck.xunit.xml" "--language" "c++")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/urdf/urdf")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/urdf/test_results/urdf/cpplint.xunit.xml" "--package-name" "urdf" "--output-file" "/opt/workspace/build/urdf/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/urdf/test_results/urdf/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/urdf/urdf")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/urdf/test_results/urdf/lint_cmake.xunit.xml" "--package-name" "urdf" "--output-file" "/opt/workspace/build/urdf/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/urdf/test_results/urdf/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/urdf/urdf")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/urdf/test_results/urdf/uncrustify.xunit.xml" "--package-name" "urdf" "--output-file" "/opt/workspace/build/urdf/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/urdf/test_results/urdf/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/urdf/urdf")
