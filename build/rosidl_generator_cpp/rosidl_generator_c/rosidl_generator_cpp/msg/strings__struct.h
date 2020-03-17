// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/Strings.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__STRINGS__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__STRINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STRING_CONST'.
static const char * const rosidl_generator_cpp__msg__Strings__STRING_CONST = "Hello world!";

// Include directives for member types
// Member 'string_value'
// Member 'string_value_default1'
// Member 'string_value_default2'
// Member 'string_value_default3'
// Member 'string_value_default4'
// Member 'string_value_default5'
// Member 'bounded_string_value'
// Member 'bounded_string_value_default1'
// Member 'bounded_string_value_default2'
// Member 'bounded_string_value_default3'
// Member 'bounded_string_value_default4'
// Member 'bounded_string_value_default5'
#include "rosidl_generator_c/string.h"

// constants for array fields with an upper bound
// bounded_string_value
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value__MAX_STRING_SIZE = 22
};
// bounded_string_value_default1
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value_default1__MAX_STRING_SIZE = 22
};
// bounded_string_value_default2
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value_default2__MAX_STRING_SIZE = 22
};
// bounded_string_value_default3
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value_default3__MAX_STRING_SIZE = 22
};
// bounded_string_value_default4
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value_default4__MAX_STRING_SIZE = 22
};
// bounded_string_value_default5
enum
{
  rosidl_generator_cpp__msg__Strings__bounded_string_value_default5__MAX_STRING_SIZE = 22
};

// Struct defined in msg/Strings in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__Strings
{
  rosidl_generator_c__String string_value;
  rosidl_generator_c__String string_value_default1;
  rosidl_generator_c__String string_value_default2;
  rosidl_generator_c__String string_value_default3;
  rosidl_generator_c__String string_value_default4;
  rosidl_generator_c__String string_value_default5;
  rosidl_generator_c__String bounded_string_value;
  rosidl_generator_c__String bounded_string_value_default1;
  rosidl_generator_c__String bounded_string_value_default2;
  rosidl_generator_c__String bounded_string_value_default3;
  rosidl_generator_c__String bounded_string_value_default4;
  rosidl_generator_c__String bounded_string_value_default5;
} rosidl_generator_cpp__msg__Strings;

// Struct for a sequence of rosidl_generator_cpp__msg__Strings.
typedef struct rosidl_generator_cpp__msg__Strings__Sequence
{
  rosidl_generator_cpp__msg__Strings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__Strings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__STRINGS__STRUCT_H_
