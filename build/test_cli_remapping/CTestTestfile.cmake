# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/system_tests/test_cli_remapping
# Build directory: /opt/workspace/build/test_cli_remapping
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_cli_remapping "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/test_cli_remapping.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/launch_test/CHANGEME.txt" "--env" "NAME_MAKER_RCLCPP=/opt/workspace/build/test_cli_remapping/name_maker_rclcpp" "NAME_MAKER_RCLPY=/opt/workspace/src/ros2/system_tests/test_cli_remapping/test/name_maker.py" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/src/ros2/system_tests/test_cli_remapping/test/test_cli_remapping.py" "--junit-xml=/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/test_cli_remapping.xunit.xml" "--package-name=test_cli_remapping")
set_tests_properties(test_cli_remapping PROPERTIES  DEPENDS "name_maker_rclcpp" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/copyright.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/cppcheck.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/cpplint.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/flake8.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_flake8/flake8.txt" "--command" "/opt/ros/eloquent/bin/ament_flake8" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/lint_cmake.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/pep257.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_pep257/pep257.txt" "--command" "/opt/ros/eloquent/bin/ament_pep257" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/uncrustify.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/xmllint.xunit.xml" "--package-name" "test_cli_remapping" "--output-file" "/opt/workspace/build/test_cli_remapping/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/test_cli_remapping/test_results/test_cli_remapping/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/system_tests/test_cli_remapping")
