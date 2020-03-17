// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_H_
#define ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ub_string_static_array_value'
// Member 'ub_string_ub_array_value'
// Member 'ub_string_dynamic_array_value'
// Member 'string_dynamic_array_value'
// Member 'string_static_array_value'
// Member 'string_bounded_array_value'
// Member 'def_string_dynamic_array_value'
// Member 'def_string_static_array_value'
// Member 'def_string_bounded_array_value'
// Member 'def_various_quotes'
// Member 'def_various_commas'
#include "rosidl_generator_c/string.h"

// constants for array fields with an upper bound
// ub_string_static_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__ub_string_static_array_value__MAX_STRING_SIZE = 5
};
// ub_string_ub_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__ub_string_ub_array_value__MAX_SIZE = 10
};
// ub_string_ub_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__ub_string_ub_array_value__MAX_STRING_SIZE = 5
};
// ub_string_dynamic_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__ub_string_dynamic_array_value__MAX_STRING_SIZE = 5
};
// string_bounded_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__string_bounded_array_value__MAX_SIZE = 10
};
// def_string_bounded_array_value
enum
{
  rosidl_generator_py__msg__StringArrays__def_string_bounded_array_value__MAX_SIZE = 10
};

// Struct defined in msg/StringArrays in the package rosidl_generator_py.
typedef struct rosidl_generator_py__msg__StringArrays
{
  rosidl_generator_c__String ub_string_static_array_value[3];
  rosidl_generator_c__String__Sequence ub_string_ub_array_value;
  rosidl_generator_c__String__Sequence ub_string_dynamic_array_value;
  rosidl_generator_c__String__Sequence string_dynamic_array_value;
  rosidl_generator_c__String string_static_array_value[3];
  rosidl_generator_c__String__Sequence string_bounded_array_value;
  rosidl_generator_c__String__Sequence def_string_dynamic_array_value;
  rosidl_generator_c__String def_string_static_array_value[3];
  rosidl_generator_c__String__Sequence def_string_bounded_array_value;
  rosidl_generator_c__String__Sequence def_various_quotes;
  rosidl_generator_c__String__Sequence def_various_commas;
} rosidl_generator_py__msg__StringArrays;

// Struct for a sequence of rosidl_generator_py__msg__StringArrays.
typedef struct rosidl_generator_py__msg__StringArrays__Sequence
{
  rosidl_generator_py__msg__StringArrays * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_py__msg__StringArrays__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_H_
