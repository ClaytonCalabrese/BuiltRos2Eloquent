# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_cpp
# Build directory: /opt/workspace/build/qt_gui_cpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(qt_gui_cpp "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui_cpp/test_results/qt_gui_cpp/qt_gui_cpp.xunit.xml" "--package-name" "qt_gui_cpp" "--output-file" "/opt/workspace/build/qt_gui_cpp/ament_cmake_pytest/qt_gui_cpp.txt" "--append-env" "PYTHONPATH=/opt/workspace/build/qt_gui_cpp" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_cpp/test" "-o" "cache_dir=/opt/workspace/build/qt_gui_cpp/ament_cmake_pytest/qt_gui_cpp/.cache" "--junit-xml=/opt/workspace/build/qt_gui_cpp/test_results/qt_gui_cpp/qt_gui_cpp.xunit.xml" "--junit-prefix=qt_gui_cpp")
set_tests_properties(qt_gui_cpp PROPERTIES  LABELS "pytest" TIMEOUT "90" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_cpp")
subdirs("src")
