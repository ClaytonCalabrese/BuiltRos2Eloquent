// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__CONSTANTS__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__MSG__CONSTANTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOOL_CONST'.
static const bool rosidl_generator_cpp__msg__Constants__BOOL_CONST = true;

/// Constant 'BYTE_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__BYTE_CONST = 50
};

/// Constant 'CHAR_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__CHAR_CONST = 100
};

/// Constant 'FLOAT32_CONST'.
static const float rosidl_generator_cpp__msg__Constants__FLOAT32_CONST = 1.125f;

/// Constant 'FLOAT64_CONST'.
static const double rosidl_generator_cpp__msg__Constants__FLOAT64_CONST = 1.125l;

/// Constant 'INT8_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__INT8_CONST = -50
};

/// Constant 'UINT8_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__UINT8_CONST = 200
};

/// Constant 'INT16_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__INT16_CONST = -1000
};

/// Constant 'UINT16_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__UINT16_CONST = 2000
};

/// Constant 'INT32_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__INT32_CONST = -30000l
};

/// Constant 'UINT32_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__UINT32_CONST = 60000ul
};

/// Constant 'INT64_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__INT64_CONST = -40000000ll
};

/// Constant 'UINT64_CONST'.
enum
{
  rosidl_generator_cpp__msg__Constants__UINT64_CONST = 50000000ull
};

// Struct defined in msg/Constants in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__msg__Constants
{
  uint8_t structure_needs_at_least_one_member;
} rosidl_generator_cpp__msg__Constants;

// Struct for a sequence of rosidl_generator_cpp__msg__Constants.
typedef struct rosidl_generator_cpp__msg__Constants__Sequence
{
  rosidl_generator_cpp__msg__Constants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__msg__Constants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__MSG__CONSTANTS__STRUCT_H_
