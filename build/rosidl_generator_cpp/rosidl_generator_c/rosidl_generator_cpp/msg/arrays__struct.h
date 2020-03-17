// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/Arrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__ARRAYS__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__ARRAYS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'string_values'
// Member 'string_values_default'
#include "rosidl_generator_c/string.h"
// Member 'basic_types_values'
#include "rosidl_generator_cpp/msg/basic_types__struct.h"
// Member 'constants_values'
#include "rosidl_generator_cpp/msg/constants__struct.h"
// Member 'defaults_values'
#include "rosidl_generator_cpp/msg/defaults__struct.h"

// Struct defined in msg/Arrays in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__Arrays
{
  bool bool_values[3];
  uint8_t byte_values[3];
  uint8_t char_values[3];
  float float32_values[3];
  double float64_values[3];
  int8_t int8_values[3];
  uint8_t uint8_values[3];
  int16_t int16_values[3];
  uint16_t uint16_values[3];
  int32_t int32_values[3];
  uint32_t uint32_values[3];
  int64_t int64_values[3];
  uint64_t uint64_values[3];
  rosidl_generator_c__String string_values[3];
  rosidl_generator_cpp__msg__BasicTypes basic_types_values[3];
  rosidl_generator_cpp__msg__Constants constants_values[3];
  rosidl_generator_cpp__msg__Defaults defaults_values[3];
  bool bool_values_default[3];
  uint8_t byte_values_default[3];
  uint8_t char_values_default[3];
  float float32_values_default[3];
  double float64_values_default[3];
  int8_t int8_values_default[3];
  uint8_t uint8_values_default[3];
  int16_t int16_values_default[3];
  uint16_t uint16_values_default[3];
  int32_t int32_values_default[3];
  uint32_t uint32_values_default[3];
  int64_t int64_values_default[3];
  uint64_t uint64_values_default[3];
  rosidl_generator_c__String string_values_default[3];
  int32_t alignment_check;
} rosidl_generator_cpp__msg__Arrays;

// Struct for a sequence of rosidl_generator_cpp__msg__Arrays.
typedef struct rosidl_generator_cpp__msg__Arrays__Sequence
{
  rosidl_generator_cpp__msg__Arrays * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__Arrays__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__ARRAYS__STRUCT_H_
