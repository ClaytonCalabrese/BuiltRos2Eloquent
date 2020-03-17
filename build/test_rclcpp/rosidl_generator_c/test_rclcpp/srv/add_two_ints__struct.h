// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_rclcpp:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_H_
#define TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package test_rclcpp.
typedef struct test_rclcpp__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} test_rclcpp__srv__AddTwoInts_Request;

// Struct for a sequence of test_rclcpp__srv__AddTwoInts_Request.
typedef struct test_rclcpp__srv__AddTwoInts_Request__Sequence
{
  test_rclcpp__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_rclcpp__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package test_rclcpp.
typedef struct test_rclcpp__srv__AddTwoInts_Response
{
  int64_t sum;
} test_rclcpp__srv__AddTwoInts_Response;

// Struct for a sequence of test_rclcpp__srv__AddTwoInts_Response.
typedef struct test_rclcpp__srv__AddTwoInts_Response__Sequence
{
  test_rclcpp__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_rclcpp__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_H_
