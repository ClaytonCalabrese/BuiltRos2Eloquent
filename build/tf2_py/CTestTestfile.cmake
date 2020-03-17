# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/geometry2/tf2_py
# Build directory: /opt/workspace/build/tf2_py
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tf2_py_test "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/tf2_py/test_results/tf2_py/tf2_py_test.xunit.xml" "--package-name" "tf2_py" "--output-file" "/opt/workspace/build/tf2_py/ament_cmake_pytest/tf2_py_test.txt" "--append-env" "PYTHONPATH=/opt/workspace/build/tf2_py" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/opt/workspace/src/ros2/geometry2/tf2_py/test" "-o" "cache_dir=/opt/workspace/build/tf2_py/ament_cmake_pytest/tf2_py_test/.cache" "--junit-xml=/opt/workspace/build/tf2_py/test_results/tf2_py/tf2_py_test.xunit.xml" "--junit-prefix=tf2_py")
set_tests_properties(tf2_py_test PROPERTIES  LABELS "pytest" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/geometry2/tf2_py")
