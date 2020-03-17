# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros-visualization/rqt/rqt_py_common
# Build directory: /opt/workspace/build/rqt_py_common
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(rqt_py_common "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rqt_py_common/test_results/rqt_py_common/rqt_py_common.xunit.xml" "--package-name" "rqt_py_common" "--output-file" "/opt/workspace/build/rqt_py_common/ament_cmake_pytest/rqt_py_common.txt" "--append-env" "PYTHONPATH=/opt/workspace/build/rqt_py_common" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/opt/workspace/src/ros-visualization/rqt/rqt_py_common/test" "-o" "cache_dir=/opt/workspace/build/rqt_py_common/ament_cmake_pytest/rqt_py_common/.cache" "--junit-xml=/opt/workspace/build/rqt_py_common/test_results/rqt_py_common/rqt_py_common.xunit.xml" "--junit-prefix=rqt_py_common")
set_tests_properties(rqt_py_common PROPERTIES  LABELS "pytest" TIMEOUT "90," WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/rqt/rqt_py_common")
subdirs("rqt_py_common__py")
