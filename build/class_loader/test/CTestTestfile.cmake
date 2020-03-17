# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros/class_loader/test
# Build directory: /opt/workspace/build/class_loader/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(class_loader_utest "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/class_loader/test_results/class_loader/class_loader_utest.gtest.xml" "--package-name" "class_loader" "--output-file" "/opt/workspace/build/class_loader/ament_cmake_gtest/class_loader_utest.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/class_loader/test" "--command" "/opt/workspace/build/class_loader/test/class_loader_utest" "--gtest_output=xml:/opt/workspace/build/class_loader/test_results/class_loader/class_loader_utest.gtest.xml")
set_tests_properties(class_loader_utest PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/class_loader/test/class_loader_utest" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros/class_loader")
add_test(class_loader_unique_ptr_test "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/class_loader/test_results/class_loader/class_loader_unique_ptr_test.gtest.xml" "--package-name" "class_loader" "--output-file" "/opt/workspace/build/class_loader/ament_cmake_gtest/class_loader_unique_ptr_test.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/class_loader/test" "--command" "/opt/workspace/build/class_loader/test/class_loader_unique_ptr_test" "--gtest_output=xml:/opt/workspace/build/class_loader/test_results/class_loader/class_loader_unique_ptr_test.gtest.xml")
set_tests_properties(class_loader_unique_ptr_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/class_loader/test/class_loader_unique_ptr_test" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros/class_loader")
subdirs("../gtest")
subdirs("fviz_case_study")
