// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__VAL__STRUCT_H_
#define RQT_PY_COMMON__MSG__VAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Val in the package rqt_py_common.
typedef struct rqt_py_common__msg__Val
{
  double floats[5];
} rqt_py_common__msg__Val;

// Struct for a sequence of rqt_py_common__msg__Val.
typedef struct rqt_py_common__msg__Val__Sequence
{
  rqt_py_common__msg__Val * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rqt_py_common__msg__Val__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RQT_PY_COMMON__MSG__VAL__STRUCT_H_
