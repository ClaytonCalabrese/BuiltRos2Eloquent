// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rqt_py_common:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__SRV__ADD_TWO_INTS__STRUCT_H_
#define RQT_PY_COMMON__SRV__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package rqt_py_common.
typedef struct rqt_py_common__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} rqt_py_common__srv__AddTwoInts_Request;

// Struct for a sequence of rqt_py_common__srv__AddTwoInts_Request.
typedef struct rqt_py_common__srv__AddTwoInts_Request__Sequence
{
  rqt_py_common__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rqt_py_common__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/AddTwoInts in the package rqt_py_common.
typedef struct rqt_py_common__srv__AddTwoInts_Response
{
  int64_t sum;
} rqt_py_common__srv__AddTwoInts_Response;

// Struct for a sequence of rqt_py_common__srv__AddTwoInts_Response.
typedef struct rqt_py_common__srv__AddTwoInts_Response__Sequence
{
  rqt_py_common__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rqt_py_common__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RQT_PY_COMMON__SRV__ADD_TWO_INTS__STRUCT_H_
