# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_app
# Build directory: /opt/workspace/build/qt_gui_app
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui_app/test_results/qt_gui_app/lint_cmake.xunit.xml" "--package-name" "qt_gui_app" "--output-file" "/opt/workspace/build/qt_gui_app/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/qt_gui_app/test_results/qt_gui_app/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_app")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui_app/test_results/qt_gui_app/xmllint.xunit.xml" "--package-name" "qt_gui_app" "--output-file" "/opt/workspace/build/qt_gui_app/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/qt_gui_app/test_results/qt_gui_app/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui_app")
