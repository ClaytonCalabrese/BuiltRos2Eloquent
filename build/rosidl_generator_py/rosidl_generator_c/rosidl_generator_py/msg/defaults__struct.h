// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_py:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_H_
#define ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Defaults in the package rosidl_generator_py.
typedef struct rosidl_generator_py__msg__Defaults
{
  bool bool_value;
  uint8_t byte_value;
  uint8_t char_value;
  float float32_value;
  double float64_value;
  int8_t int8_value;
  uint8_t uint8_value;
  int16_t int16_value;
  uint16_t uint16_value;
  int32_t int32_value;
  uint32_t uint32_value;
  int64_t int64_value;
  uint64_t uint64_value;
} rosidl_generator_py__msg__Defaults;

// Struct for a sequence of rosidl_generator_py__msg__Defaults.
typedef struct rosidl_generator_py__msg__Defaults__Sequence
{
  rosidl_generator_py__msg__Defaults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_py__msg__Defaults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_H_
