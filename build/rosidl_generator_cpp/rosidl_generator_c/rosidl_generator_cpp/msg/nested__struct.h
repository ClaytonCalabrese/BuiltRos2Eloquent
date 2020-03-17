// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__NESTED__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'basic_types_value'
#include "rosidl_generator_cpp/msg/basic_types__struct.h"

// Struct defined in msg/Nested in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__Nested
{
  rosidl_generator_cpp__msg__BasicTypes basic_types_value;
} rosidl_generator_cpp__msg__Nested;

// Struct for a sequence of rosidl_generator_cpp__msg__Nested.
typedef struct rosidl_generator_cpp__msg__Nested__Sequence
{
  rosidl_generator_cpp__msg__Nested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__Nested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__NESTED__STRUCT_H_
