# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/demos/pendulum_control
# Build directory: /opt/workspace/build/pendulum_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_pendulum__rmw_cyclonedds_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_cyclonedds_cpp.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp" "RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum__rmw_cyclonedds_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_cyclonedds_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum__rmw_cyclonedds_cpp PROPERTIES  DEPENDS "test_pendulum__rmw_cyclonedds_cpp test_pendulum__rmw_cyclonedds_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/build/pendulum_control/test_pendulum__rmw_cyclonedds_cpp")
add_test(test_pendulum_teleop__rmw_cyclonedds_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_cyclonedds_cpp.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp" "RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum_teleop__rmw_cyclonedds_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_cyclonedds_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum_teleop__rmw_cyclonedds_cpp PROPERTIES  DEPENDS "test_pendulum_teleop__rmw_cyclonedds_cpp test_pendulum_teleop__rmw_cyclonedds_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(test_pendulum__rmw_fastrtps_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_fastrtps_cpp.xunit.xml" "--package-name" "pendulum_control" "--skip-test" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum__rmw_fastrtps_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_fastrtps_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum__rmw_fastrtps_cpp PROPERTIES  DEPENDS "test_pendulum__rmw_fastrtps_cpp test_pendulum__rmw_fastrtps_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/build/pendulum_control/test_pendulum__rmw_fastrtps_cpp")
add_test(test_pendulum_teleop__rmw_fastrtps_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_fastrtps_cpp.xunit.xml" "--package-name" "pendulum_control" "--skip-test" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum_teleop__rmw_fastrtps_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_fastrtps_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum_teleop__rmw_fastrtps_cpp PROPERTIES  DEPENDS "test_pendulum_teleop__rmw_fastrtps_cpp test_pendulum_teleop__rmw_fastrtps_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(test_pendulum__rmw_fastrtps_dynamic_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name" "pendulum_control" "--skip-test" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_dynamic_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_dynamic_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum__rmw_fastrtps_dynamic_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum__rmw_fastrtps_dynamic_cpp PROPERTIES  DEPENDS "test_pendulum__rmw_fastrtps_dynamic_cpp test_pendulum__rmw_fastrtps_dynamic_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/build/pendulum_control/test_pendulum__rmw_fastrtps_dynamic_cpp")
add_test(test_pendulum_teleop__rmw_fastrtps_dynamic_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name" "pendulum_control" "--skip-test" "--output-file" "/opt/workspace/build/pendulum_control/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_dynamic_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_dynamic_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/pendulum_control/test_pendulum_teleop__rmw_fastrtps_dynamic_cpp.py" "--junit-xml=/opt/workspace/build/pendulum_control/test_results/pendulum_control/test_pendulum_teleop__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name=pendulum_control")
set_tests_properties(test_pendulum_teleop__rmw_fastrtps_dynamic_cpp PROPERTIES  DEPENDS "test_pendulum_teleop__rmw_fastrtps_dynamic_cpp test_pendulum_teleop__rmw_fastrtps_dynamic_cpp" TIMEOUT "20" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/copyright.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/cppcheck.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/cppcheck.xunit.xml" "--include_dirs" "/opt/workspace/src/ros2/demos/pendulum_control/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/cpplint.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/flake8.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_flake8/flake8.txt" "--command" "/opt/ros/eloquent/bin/ament_flake8" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/lint_cmake.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/pep257.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_pep257/pep257.txt" "--command" "/opt/ros/eloquent/bin/ament_pep257" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/uncrustify.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/xmllint.xunit.xml" "--package-name" "pendulum_control" "--output-file" "/opt/workspace/build/pendulum_control/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/pendulum_control/test_results/pendulum_control/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/pendulum_control")