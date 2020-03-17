// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rqt_py_common:msg/ArrayVal.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_H_
#define RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vals'
#include "rqt_py_common/msg/val__struct.h"

// Struct defined in msg/ArrayVal in the package rqt_py_common.
typedef struct rqt_py_common__msg__ArrayVal
{
  rqt_py_common__msg__Val vals[5];
} rqt_py_common__msg__ArrayVal;

// Struct for a sequence of rqt_py_common__msg__ArrayVal.
typedef struct rqt_py_common__msg__ArrayVal__Sequence
{
  rqt_py_common__msg__ArrayVal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rqt_py_common__msg__ArrayVal__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_H_
