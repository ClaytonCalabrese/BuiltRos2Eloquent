# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros-visualization/python_qt_binding
# Build directory: /opt/workspace/build/python_qt_binding
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(python_qt_binding "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/python_qt_binding.xunit.xml" "--package-name" "python_qt_binding" "--output-file" "/opt/workspace/build/python_qt_binding/ament_cmake_pytest/python_qt_binding.txt" "--append-env" "PYTHONPATH=/opt/workspace/build/python_qt_binding" "--command" "/usr/bin/python3" "-u" "-m" "pytest" "/opt/workspace/src/ros-visualization/python_qt_binding/test" "-o" "cache_dir=/opt/workspace/build/python_qt_binding/ament_cmake_pytest/python_qt_binding/.cache" "--junit-xml=/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/python_qt_binding.xunit.xml" "--junit-prefix=python_qt_binding")
set_tests_properties(python_qt_binding PROPERTIES  LABELS "pytest" TIMEOUT "90" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/python_qt_binding")
add_test(flake8 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/flake8.xunit.xml" "--package-name" "python_qt_binding" "--output-file" "/opt/workspace/build/python_qt_binding/ament_flake8/flake8.txt" "--command" "/opt/ros/eloquent/bin/ament_flake8" "--xunit-file" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/python_qt_binding")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/lint_cmake.xunit.xml" "--package-name" "python_qt_binding" "--output-file" "/opt/workspace/build/python_qt_binding/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/python_qt_binding")
add_test(pep257 "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/pep257.xunit.xml" "--package-name" "python_qt_binding" "--output-file" "/opt/workspace/build/python_qt_binding/ament_pep257/pep257.txt" "--command" "/opt/ros/eloquent/bin/ament_pep257" "--xunit-file" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/python_qt_binding")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/xmllint.xunit.xml" "--package-name" "python_qt_binding" "--output-file" "/opt/workspace/build/python_qt_binding/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/python_qt_binding/test_results/python_qt_binding/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros-visualization/python_qt_binding")
