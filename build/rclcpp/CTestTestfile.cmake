# CMake generated Testfile for 
# Source directory: /opt/workspace/src/ros2/rclcpp/rclcpp
# Build directory: /opt/workspace/build/rclcpp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_client "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_client.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_client.txt" "--command" "/opt/workspace/build/rclcpp/test_client" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_client.gtest.xml")
set_tests_properties(test_client PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_client" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_create_timer "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_create_timer.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_create_timer.txt" "--command" "/opt/workspace/build/rclcpp/test_create_timer" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_create_timer.gtest.xml")
set_tests_properties(test_create_timer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_create_timer" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_expand_topic_or_service_name "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_expand_topic_or_service_name.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_expand_topic_or_service_name.txt" "--command" "/opt/workspace/build/rclcpp/test_expand_topic_or_service_name" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_expand_topic_or_service_name.gtest.xml")
set_tests_properties(test_expand_topic_or_service_name PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_expand_topic_or_service_name" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_function_traits "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_function_traits.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_function_traits.txt" "--command" "/opt/workspace/build/rclcpp/test_function_traits" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_function_traits.gtest.xml")
set_tests_properties(test_function_traits PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_function_traits" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_intra_process_manager "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_intra_process_manager.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gmock/test_intra_process_manager.txt" "--command" "/opt/workspace/build/rclcpp/test_intra_process_manager" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_intra_process_manager.gtest.xml")
set_tests_properties(test_intra_process_manager PROPERTIES  LABELS "gmock" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_intra_process_manager" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_ring_buffer_implementation "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_ring_buffer_implementation.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_ring_buffer_implementation.txt" "--command" "/opt/workspace/build/rclcpp/test_ring_buffer_implementation" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_ring_buffer_implementation.gtest.xml")
set_tests_properties(test_ring_buffer_implementation PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_ring_buffer_implementation" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_intra_process_buffer "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_intra_process_buffer.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_intra_process_buffer.txt" "--command" "/opt/workspace/build/rclcpp/test_intra_process_buffer" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_intra_process_buffer.gtest.xml")
set_tests_properties(test_intra_process_buffer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_intra_process_buffer" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_loaned_message "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_loaned_message.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_loaned_message.txt" "--command" "/opt/workspace/build/rclcpp/test_loaned_message" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_loaned_message.gtest.xml")
set_tests_properties(test_loaned_message PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_loaned_message" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_node "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_node.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_node.txt" "--command" "/opt/workspace/build/rclcpp/test_node" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_node.gtest.xml")
set_tests_properties(test_node PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_node" TIMEOUT "240" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_node_interfaces__get_node_interfaces "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_interfaces__get_node_interfaces.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_node_interfaces__get_node_interfaces.txt" "--command" "/opt/workspace/build/rclcpp/test_node_interfaces__get_node_interfaces" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_interfaces__get_node_interfaces.gtest.xml")
set_tests_properties(test_node_interfaces__get_node_interfaces PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_node_interfaces__get_node_interfaces" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_node_global_args "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_global_args.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_node_global_args.txt" "--command" "/opt/workspace/build/rclcpp/test_node_global_args" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_global_args.gtest.xml")
set_tests_properties(test_node_global_args PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_node_global_args" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_node_options "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_options.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_node_options.txt" "--command" "/opt/workspace/build/rclcpp/test_node_options" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_node_options.gtest.xml")
set_tests_properties(test_node_options PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_node_options" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_parameter_client "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_client.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_parameter_client.txt" "--command" "/opt/workspace/build/rclcpp/test_parameter_client" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_client.gtest.xml")
set_tests_properties(test_parameter_client PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_parameter_client" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_parameter_events_filter "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_events_filter.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_parameter_events_filter.txt" "--command" "/opt/workspace/build/rclcpp/test_parameter_events_filter" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_events_filter.gtest.xml")
set_tests_properties(test_parameter_events_filter PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_parameter_events_filter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_parameter "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_parameter.txt" "--command" "/opt/workspace/build/rclcpp/test_parameter" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter.gtest.xml")
set_tests_properties(test_parameter PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_parameter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_parameter_map "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_map.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_parameter_map.txt" "--command" "/opt/workspace/build/rclcpp/test_parameter_map" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_parameter_map.gtest.xml")
set_tests_properties(test_parameter_map PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_parameter_map" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_publisher "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_publisher.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_publisher.txt" "--command" "/opt/workspace/build/rclcpp/test_publisher" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_publisher.gtest.xml")
set_tests_properties(test_publisher PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_publisher" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_publisher_subscription_count_api "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_publisher_subscription_count_api.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_publisher_subscription_count_api.txt" "--command" "/opt/workspace/build/rclcpp/test_publisher_subscription_count_api" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_publisher_subscription_count_api.gtest.xml")
set_tests_properties(test_publisher_subscription_count_api PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_publisher_subscription_count_api" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_rate "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_rate.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_rate.txt" "--command" "/opt/workspace/build/rclcpp/test_rate" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_rate.gtest.xml")
set_tests_properties(test_rate PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_rate" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_serialized_message_allocator "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_serialized_message_allocator.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_serialized_message_allocator.txt" "--command" "/opt/workspace/build/rclcpp/test_serialized_message_allocator" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_serialized_message_allocator.gtest.xml")
set_tests_properties(test_serialized_message_allocator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_serialized_message_allocator" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_service "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_service.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_service.txt" "--command" "/opt/workspace/build/rclcpp/test_service" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_service.gtest.xml")
set_tests_properties(test_service PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_service" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_subscription "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_subscription.txt" "--command" "/opt/workspace/build/rclcpp/test_subscription" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription.gtest.xml")
set_tests_properties(test_subscription PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_subscription" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_subscription_publisher_count_api "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription_publisher_count_api.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_subscription_publisher_count_api.txt" "--command" "/opt/workspace/build/rclcpp/test_subscription_publisher_count_api" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription_publisher_count_api.gtest.xml")
set_tests_properties(test_subscription_publisher_count_api PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_subscription_publisher_count_api" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_subscription_traits "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription_traits.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_subscription_traits.txt" "--command" "/opt/workspace/build/rclcpp/test_subscription_traits" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_subscription_traits.gtest.xml")
set_tests_properties(test_subscription_traits PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_subscription_traits" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_find_weak_nodes "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_find_weak_nodes.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_find_weak_nodes.txt" "--command" "/opt/workspace/build/rclcpp/test_find_weak_nodes" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_find_weak_nodes.gtest.xml")
set_tests_properties(test_find_weak_nodes PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_find_weak_nodes" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_externally_defined_services "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_externally_defined_services.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_externally_defined_services.txt" "--command" "/opt/workspace/build/rclcpp/test_externally_defined_services" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_externally_defined_services.gtest.xml")
set_tests_properties(test_externally_defined_services PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_externally_defined_services" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_duration "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_duration.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_duration.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_duration" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_duration.gtest.xml")
set_tests_properties(test_duration PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_duration" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_executor "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_executor.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_executor.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_executor" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_executor.gtest.xml")
set_tests_properties(test_executor PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_executor" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_logger "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_logger.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_logger.txt" "--command" "/opt/workspace/build/rclcpp/test_logger" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_logger.gtest.xml")
set_tests_properties(test_logger PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_logger" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_logging "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_logging.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gmock/test_logging.txt" "--command" "/opt/workspace/build/rclcpp/test_logging" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_logging.gtest.xml")
set_tests_properties(test_logging PROPERTIES  LABELS "gmock" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_logging" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_time "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_time.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_time.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_time" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_time.gtest.xml")
set_tests_properties(test_time PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_time" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_timer "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_timer.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_timer.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_timer" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_timer.gtest.xml")
set_tests_properties(test_timer PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_timer" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_time_source "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_time_source.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_time_source.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_time_source" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_time_source.gtest.xml")
set_tests_properties(test_time_source PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_time_source" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_utilities "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_utilities.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_utilities.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_utilities" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_utilities.gtest.xml")
set_tests_properties(test_utilities PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_utilities" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_init "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_init.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_init.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_init" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_init.gtest.xml")
set_tests_properties(test_init PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_init" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(test_multi_threaded_executor "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/test_multi_threaded_executor.gtest.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cmake_gtest/test_multi_threaded_executor.txt" "--append-env" "LD_LIBRARY_PATH=/opt/workspace/build/rclcpp" "--command" "/opt/workspace/build/rclcpp/test_multi_threaded_executor" "--gtest_output=xml:/opt/workspace/build/rclcpp/test_results/rclcpp/test_multi_threaded_executor.gtest.xml")
set_tests_properties(test_multi_threaded_executor PROPERTIES  LABELS "gtest" REQUIRED_FILES "/opt/workspace/build/rclcpp/test_multi_threaded_executor" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(copyright "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/copyright.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_copyright/copyright.txt" "--command" "/opt/ros/eloquent/bin/ament_copyright" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/cppcheck.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/eloquent/bin/ament_cppcheck" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/cppcheck.xunit.xml" "--include_dirs" "/opt/workspace/src/ros2/rclcpp/rclcpp/include" "/opt/workspace/src/ros2/rclcpp/rclcpp/test/")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/cpplint.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_cpplint/cpplint.txt" "--command" "/opt/ros/eloquent/bin/ament_cpplint" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/lint_cmake.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/uncrustify.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/eloquent/bin/ament_uncrustify" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/workspace/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/opt/workspace/build/rclcpp/test_results/rclcpp/xmllint.xunit.xml" "--package-name" "rclcpp" "--output-file" "/opt/workspace/build/rclcpp/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/opt/workspace/build/rclcpp/test_results/rclcpp/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/opt/workspace/src/ros2/rclcpp/rclcpp")
subdirs("gtest")
subdirs("gmock")
