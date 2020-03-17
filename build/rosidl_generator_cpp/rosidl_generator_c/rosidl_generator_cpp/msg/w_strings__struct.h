// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/WStrings.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wstring_value'
// Member 'wstring_value_default1'
// Member 'wstring_value_default2'
// Member 'wstring_value_default3'
// Member 'array_of_wstrings'
// Member 'bounded_sequence_of_wstrings'
// Member 'unbounded_sequence_of_wstrings'
#include "rosidl_generator_c/u16string.h"

// constants for array fields with an upper bound
// bounded_sequence_of_wstrings
enum
{
  rosidl_generator_cpp__msg__WStrings__bounded_sequence_of_wstrings__MAX_SIZE = 3
};

// Struct defined in msg/WStrings in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__WStrings
{
  rosidl_generator_c__U16String wstring_value;
  rosidl_generator_c__U16String wstring_value_default1;
  rosidl_generator_c__U16String wstring_value_default2;
  rosidl_generator_c__U16String wstring_value_default3;
  rosidl_generator_c__U16String array_of_wstrings[3];
  rosidl_generator_c__U16String__Sequence bounded_sequence_of_wstrings;
  rosidl_generator_c__U16String__Sequence unbounded_sequence_of_wstrings;
} rosidl_generator_cpp__msg__WStrings;

// Struct for a sequence of rosidl_generator_cpp__msg__WStrings.
typedef struct rosidl_generator_cpp__msg__WStrings__Sequence
{
  rosidl_generator_cpp__msg__WStrings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__WStrings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__STRUCT_H_
