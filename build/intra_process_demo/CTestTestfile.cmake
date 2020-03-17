# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/demos/intra_process_demo
# Build directory: /opt/workspace/build/intra_process_demo
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_demo_cyclic_pipeline__rmw_cyclonedds_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_cyclonedds_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp" "RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_cyclic_pipeline__rmw_cyclonedds_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_cyclonedds_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_cyclic_pipeline__rmw_cyclonedds_cpp PROPERTIES  DEPENDS "test_demo_cyclic_pipeline__rmw_cyclonedds_cpp  test_demo_cyclic_pipeline__rmw_cyclonedds_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(test_demo_two_node_pipeline__rmw_cyclonedds_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_cyclonedds_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_cyclonedds_cpp" "RMW_IMPLEMENTATION=rmw_cyclonedds_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_two_node_pipeline__rmw_cyclonedds_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_cyclonedds_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_two_node_pipeline__rmw_cyclonedds_cpp PROPERTIES  DEPENDS "test_demo_two_node_pipeline__rmw_cyclonedds_cpp  test_demo_two_node_pipeline__rmw_cyclonedds_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(test_demo_cyclic_pipeline__rmw_fastrtps_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_fastrtps_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_cyclic_pipeline__rmw_fastrtps_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_fastrtps_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_cyclic_pipeline__rmw_fastrtps_cpp PROPERTIES  DEPENDS "test_demo_cyclic_pipeline__rmw_fastrtps_cpp  test_demo_cyclic_pipeline__rmw_fastrtps_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(test_demo_two_node_pipeline__rmw_fastrtps_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_fastrtps_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_two_node_pipeline__rmw_fastrtps_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_fastrtps_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_two_node_pipeline__rmw_fastrtps_cpp PROPERTIES  DEPENDS "test_demo_two_node_pipeline__rmw_fastrtps_cpp  test_demo_two_node_pipeline__rmw_fastrtps_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_dynamic_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_dynamic_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_cyclic_pipeline__rmw_fastrtps_dynamic_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp PROPERTIES  DEPENDS "test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp  test_demo_cyclic_pipeline__rmw_fastrtps_dynamic_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/launch_test/CHANGEME.txt" "--env" "RCL_ASSERT_RMW_ID_MATCHES=rmw_fastrtps_dynamic_cpp" "RMW_IMPLEMENTATION=rmw_fastrtps_dynamic_cpp" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/build/intra_process_demo/test_two_node_pipeline__rmw_fastrtps_dynamic_cpp_.py" "--junit-xml=/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp.xunit.xml" "--package-name=intra_process_demo")
set_tests_properties(test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp PROPERTIES  DEPENDS "test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp  test_demo_two_node_pipeline__rmw_fastrtps_dynamic_cpp" TIMEOUT "30" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/copyright.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/cppcheck.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/cppcheck.xunit.xml" "--include_dirs" "/opt/workspace/src/ros2/demos/intra_process_demo/include")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/cpplint.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/lint_cmake.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/uncrustify.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/xmllint.xunit.xml" "--package-name" "intra_process_demo" "--output-file" "/opt/workspace/build/intra_process_demo/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/intra_process_demo/test_results/intra_process_demo/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/demos/intra_process_demo")