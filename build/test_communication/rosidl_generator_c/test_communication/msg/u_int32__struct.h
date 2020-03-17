// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_communication:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_
#define TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/UInt32 in the package test_communication.
typedef struct test_communication__msg__UInt32
{
  uint32_t data;
} test_communication__msg__UInt32;

// Struct for a sequence of test_communication__msg__UInt32.
typedef struct test_communication__msg__UInt32__Sequence
{
  test_communication__msg__UInt32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__UInt32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__U_INT32__STRUCT_H_
