# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros-visualization/qt_gui_core/qt_gui
# Build directory: /opt/workspace/build/qt_gui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(flake8 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui/test_results/qt_gui/flake8.xunit.xml" "--package-name" "qt_gui" "--output-file" "/opt/workspace/build/qt_gui/ament_flake8/flake8.txt" "--command" "/opt/ros/eloquent/bin/ament_flake8" "--xunit-file" "/opt/workspace/build/qt_gui/test_results/qt_gui/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui/test_results/qt_gui/lint_cmake.xunit.xml" "--package-name" "qt_gui" "--output-file" "/opt/workspace/build/qt_gui/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/qt_gui/test_results/qt_gui/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui/test_results/qt_gui/pep257.xunit.xml" "--package-name" "qt_gui" "--output-file" "/opt/workspace/build/qt_gui/ament_pep257/pep257.txt" "--command" "/opt/ros/eloquent/bin/ament_pep257" "--xunit-file" "/opt/workspace/build/qt_gui/test_results/qt_gui/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/qt_gui/test_results/qt_gui/xmllint.xunit.xml" "--package-name" "qt_gui" "--output-file" "/opt/workspace/build/qt_gui/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/qt_gui/test_results/qt_gui/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/qt_gui_core/qt_gui")
