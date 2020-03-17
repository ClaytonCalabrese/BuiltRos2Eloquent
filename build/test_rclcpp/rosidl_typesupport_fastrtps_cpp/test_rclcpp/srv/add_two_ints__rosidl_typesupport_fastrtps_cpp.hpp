// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from test_rclcpp:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_RCLCPP__SRV__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TEST_RCLCPP__SRV__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "test_rclcpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "test_rclcpp/srv/add_two_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace test_rclcpp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
cdr_serialize(
  const test_rclcpp::srv::AddTwoInts_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_rclcpp::srv::AddTwoInts_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
get_serialized_size(
  const test_rclcpp::srv::AddTwoInts_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
max_serialized_size_AddTwoInts_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace test_rclcpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_rclcpp, srv, AddTwoInts_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "test_rclcpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "test_rclcpp/srv/add_two_ints__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace test_rclcpp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
cdr_serialize(
  const test_rclcpp::srv::AddTwoInts_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_rclcpp::srv::AddTwoInts_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
get_serialized_size(
  const test_rclcpp::srv::AddTwoInts_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
max_serialized_size_AddTwoInts_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace test_rclcpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_rclcpp, srv, AddTwoInts_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "test_rclcpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_rclcpp
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_rclcpp, srv, AddTwoInts)();

#ifdef __cplusplus
}
#endif

#endif  // TEST_RCLCPP__SRV__ADD_TWO_INTS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
