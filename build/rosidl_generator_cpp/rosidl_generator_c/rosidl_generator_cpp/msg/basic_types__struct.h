// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__BASIC_TYPES__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__BASIC_TYPES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BasicTypes in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__BasicTypes
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
} rosidl_generator_cpp__msg__BasicTypes;

// Struct for a sequence of rosidl_generator_cpp__msg__BasicTypes.
typedef struct rosidl_generator_cpp__msg__BasicTypes__Sequence
{
  rosidl_generator_cpp__msg__BasicTypes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__BasicTypes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__BASIC_TYPES__STRUCT_H_
