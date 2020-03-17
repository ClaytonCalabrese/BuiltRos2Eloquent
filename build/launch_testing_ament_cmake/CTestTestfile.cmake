# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/launch/launch_testing_ament_cmake
# Build directory: /opt/workspace/build/launch_testing_ament_cmake
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/launch_testing_ament_cmake/test_results/launch_testing_ament_cmake/copyright.xunit.xml" "--package-name" "launch_testing_ament_cmake" "--output-file" "/opt/workspace/build/launch_testing_ament_cmake/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/launch_testing_ament_cmake/test_results/launch_testing_ament_cmake/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/launch/launch_testing_ament_cmake")
add_test(_opt_workspace_install_launch_testing_share_launch_testing_examples_args_launch_test.py "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/launch_testing_ament_cmake/test_results/launch_testing_ament_cmake/_opt_workspace_install_launch_testing_share_launch_testing_examples_args_launch_test.py.xunit.xml" "--package-name" "launch_testing_ament_cmake" "--output-file" "/opt/workspace/build/launch_testing_ament_cmake/launch_test/CHANGEME.txt" "--command" "/usr/bin/python3" "-m" "launch_testing.launch_test" "/opt/workspace/install/launch_testing/share/launch_testing/examples/args_launch_test.py" "dut_arg:=--anything" "--junit-xml=/opt/workspace/build/launch_testing_ament_cmake/test_results/launch_testing_ament_cmake/_opt_workspace_install_launch_testing_share_launch_testing_examples_args_launch_test.py.xunit.xml" "--package-name=launch_testing_ament_cmake")
set_tests_properties(_opt_workspace_install_launch_testing_share_launch_testing_examples_args_launch_test.py PROPERTIES  TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/launch/launch_testing_ament_cmake")