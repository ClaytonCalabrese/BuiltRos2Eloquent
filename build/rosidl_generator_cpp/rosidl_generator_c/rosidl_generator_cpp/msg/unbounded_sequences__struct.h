// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/UnboundedSequences.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__UNBOUNDED_SEQUENCES__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__UNBOUNDED_SEQUENCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bool_values'
// Member 'byte_values'
// Member 'char_values'
// Member 'float32_values'
// Member 'float64_values'
// Member 'int8_values'
// Member 'uint8_values'
// Member 'int16_values'
// Member 'uint16_values'
// Member 'int32_values'
// Member 'uint32_values'
// Member 'int64_values'
// Member 'uint64_values'
// Member 'bool_values_default'
// Member 'byte_values_default'
// Member 'char_values_default'
// Member 'float32_values_default'
// Member 'float64_values_default'
// Member 'int8_values_default'
// Member 'uint8_values_default'
// Member 'int16_values_default'
// Member 'uint16_values_default'
// Member 'int32_values_default'
// Member 'uint32_values_default'
// Member 'int64_values_default'
// Member 'uint64_values_default'
#include "rosidl_generator_c/primitives_sequence.h"
// Member 'string_values'
// Member 'string_values_default'
#include "rosidl_generator_c/string.h"
// Member 'basic_types_values'
#include "rosidl_generator_cpp/msg/basic_types__struct.h"
// Member 'constants_values'
#include "rosidl_generator_cpp/msg/constants__struct.h"
// Member 'defaults_values'
#include "rosidl_generator_cpp/msg/defaults__struct.h"

// Struct defined in msg/UnboundedSequences in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__UnboundedSequences
{
  rosidl_generator_c__boolean__Sequence bool_values;
  rosidl_generator_c__octet__Sequence byte_values;
  rosidl_generator_c__uint8__Sequence char_values;
  rosidl_generator_c__float__Sequence float32_values;
  rosidl_generator_c__double__Sequence float64_values;
  rosidl_generator_c__int8__Sequence int8_values;
  rosidl_generator_c__uint8__Sequence uint8_values;
  rosidl_generator_c__int16__Sequence int16_values;
  rosidl_generator_c__uint16__Sequence uint16_values;
  rosidl_generator_c__int32__Sequence int32_values;
  rosidl_generator_c__uint32__Sequence uint32_values;
  rosidl_generator_c__int64__Sequence int64_values;
  rosidl_generator_c__uint64__Sequence uint64_values;
  rosidl_generator_c__String__Sequence string_values;
  rosidl_generator_cpp__msg__BasicTypes__Sequence basic_types_values;
  rosidl_generator_cpp__msg__Constants__Sequence constants_values;
  rosidl_generator_cpp__msg__Defaults__Sequence defaults_values;
  rosidl_generator_c__boolean__Sequence bool_values_default;
  rosidl_generator_c__octet__Sequence byte_values_default;
  rosidl_generator_c__uint8__Sequence char_values_default;
  rosidl_generator_c__float__Sequence float32_values_default;
  rosidl_generator_c__double__Sequence float64_values_default;
  rosidl_generator_c__int8__Sequence int8_values_default;
  rosidl_generator_c__uint8__Sequence uint8_values_default;
  rosidl_generator_c__int16__Sequence int16_values_default;
  rosidl_generator_c__uint16__Sequence uint16_values_default;
  rosidl_generator_c__int32__Sequence int32_values_default;
  rosidl_generator_c__uint32__Sequence uint32_values_default;
  rosidl_generator_c__int64__Sequence int64_values_default;
  rosidl_generator_c__uint64__Sequence uint64_values_default;
  rosidl_generator_c__String__Sequence string_values_default;
  int32_t alignment_check;
} rosidl_generator_cpp__msg__UnboundedSequences;

// Struct for a sequence of rosidl_generator_cpp__msg__UnboundedSequences.
typedef struct rosidl_generator_cpp__msg__UnboundedSequences__Sequence
{
  rosidl_generator_cpp__msg__UnboundedSequences * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__UnboundedSequences__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__UNBOUNDED_SEQUENCES__STRUCT_H_
