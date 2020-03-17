# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros/class_loader/test/fviz_case_study
# Build directory: /opt/workspace/build/class_loader/test/fviz_case_study
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(class_loader_fviz_test "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/class_loader/test_results/class_loader/class_loader_fviz_test.gtest.xml" "--package-name" "class_loader" "--output-file" "/opt/workspace/build/class_loader/ament_cmake_gtest/class_loader_fviz_test.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/class_loader/test/fviz_case_study" "--command" "/opt/workspace/build/class_loader/test/fviz_case_study/class_loader_fviz_test" "--gtest_output=xml:/opt/workspace/build/class_loader/test_results/class_loader/class_loader_fviz_test.gtest.xml")
set_tests_properties(class_loader_fviz_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/class_loader/test/fviz_case_study/class_loader_fviz_test" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros/class_loader")
