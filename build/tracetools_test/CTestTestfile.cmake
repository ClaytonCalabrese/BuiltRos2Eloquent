# CMake generated Testfile for 
# Source directory: /opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test
# Build directory: /opt/workspace/build/tracetools_test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/copyright.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/cppcheck.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/cpplint.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/flake8.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_flake8/flake8.txt" "--command" "/opt/ros/eloquent/bin/ament_flake8" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/lint_cmake.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/pep257.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_pep257/pep257.txt" "--command" "/opt/ros/eloquent/bin/ament_pep257" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/uncrustify.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/xmllint.xunit.xml" "--package-name" "tracetools_test" "--output-file" "/opt/workspace/build/tracetools_test/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/tracetools_test/test_results/tracetools_test/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/micro-ROS/ros_tracing/ros2_tracing/tracetools_test")