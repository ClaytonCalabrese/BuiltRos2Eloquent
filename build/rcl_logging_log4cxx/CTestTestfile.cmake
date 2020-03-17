# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx
# Build directory: /opt/workspace/build/rcl_logging_log4cxx
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/cppcheck.xunit.xml" "--package-name" "rcl_logging_log4cxx" "--output-file" "/opt/workspace/build/rcl_logging_log4cxx/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/cppcheck.xunit.xml" "--include_dirs" "/opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/cpplint.xunit.xml" "--package-name" "rcl_logging_log4cxx" "--output-file" "/opt/workspace/build/rcl_logging_log4cxx/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/uncrustify.xunit.xml" "--package-name" "rcl_logging_log4cxx" "--output-file" "/opt/workspace/build/rcl_logging_log4cxx/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/xmllint.xunit.xml" "--package-name" "rcl_logging_log4cxx" "--output-file" "/opt/workspace/build/rcl_logging_log4cxx/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/rcl_logging_log4cxx/test_results/rcl_logging_log4cxx/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rcl_logging/rcl_logging_log4cxx")
