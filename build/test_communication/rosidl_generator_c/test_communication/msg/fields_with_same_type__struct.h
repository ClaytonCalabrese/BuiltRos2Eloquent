// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_H_
#define TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'basic_types_values1'
// Member 'basic_types_values2'
#include "test_msgs/msg/basic_types__struct.h"

// Struct defined in msg/FieldsWithSameType in the package test_communication.
typedef struct test_communication__msg__FieldsWithSameType
{
  test_msgs__msg__BasicTypes basic_types_values1;
  test_msgs__msg__BasicTypes basic_types_values2;
} test_communication__msg__FieldsWithSameType;

// Struct for a sequence of test_communication__msg__FieldsWithSameType.
typedef struct test_communication__msg__FieldsWithSameType__Sequence
{
  test_communication__msg__FieldsWithSameType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_communication__msg__FieldsWithSameType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_H_
