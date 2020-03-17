// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice
#include "rqt_py_common/msg/val__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rqt_py_common__msg__Val__init(rqt_py_common__msg__Val * msg)
{
  if (!msg) {
    return false;
  }
  // floats
  return true;
}

void
rqt_py_common__msg__Val__fini(rqt_py_common__msg__Val * msg)
{
  if (!msg) {
    return;
  }
  // floats
}

rqt_py_common__msg__Val *
rqt_py_common__msg__Val__create()
{
  rqt_py_common__msg__Val * msg = (rqt_py_common__msg__Val *)malloc(sizeof(rqt_py_common__msg__Val));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rqt_py_common__msg__Val));
  bool success = rqt_py_common__msg__Val__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rqt_py_common__msg__Val__destroy(rqt_py_common__msg__Val * msg)
{
  if (msg) {
    rqt_py_common__msg__Val__fini(msg);
  }
  free(msg);
}


bool
rqt_py_common__msg__Val__Sequence__init(rqt_py_common__msg__Val__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rqt_py_common__msg__Val * data = NULL;
  if (size) {
    data = (rqt_py_common__msg__Val *)calloc(size, sizeof(rqt_py_common__msg__Val));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rqt_py_common__msg__Val__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rqt_py_common__msg__Val__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rqt_py_common__msg__Val__Sequence__fini(rqt_py_common__msg__Val__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rqt_py_common__msg__Val__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rqt_py_common__msg__Val__Sequence *
rqt_py_common__msg__Val__Sequence__create(size_t size)
{
  rqt_py_common__msg__Val__Sequence * array = (rqt_py_common__msg__Val__Sequence *)malloc(sizeof(rqt_py_common__msg__Val__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rqt_py_common__msg__Val__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rqt_py_common__msg__Val__Sequence__destroy(rqt_py_common__msg__Val__Sequence * array)
{
  if (array) {
    rqt_py_common__msg__Val__Sequence__fini(array);
  }
  free(array);
}
