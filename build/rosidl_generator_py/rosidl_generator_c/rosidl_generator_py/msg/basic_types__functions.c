// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_py:msg/BasicTypes.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/basic_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rosidl_generator_py__msg__BasicTypes__init(rosidl_generator_py__msg__BasicTypes * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
  return true;
}

void
rosidl_generator_py__msg__BasicTypes__fini(rosidl_generator_py__msg__BasicTypes * msg)
{
  if (!msg) {
    return;
  }
  // bool_value
  // byte_value
  // char_value
  // float32_value
  // float64_value
  // int8_value
  // uint8_value
  // int16_value
  // uint16_value
  // int32_value
  // uint32_value
  // int64_value
  // uint64_value
}

rosidl_generator_py__msg__BasicTypes *
rosidl_generator_py__msg__BasicTypes__create()
{
  rosidl_generator_py__msg__BasicTypes * msg = (rosidl_generator_py__msg__BasicTypes *)malloc(sizeof(rosidl_generator_py__msg__BasicTypes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_py__msg__BasicTypes));
  bool success = rosidl_generator_py__msg__BasicTypes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_py__msg__BasicTypes__destroy(rosidl_generator_py__msg__BasicTypes * msg)
{
  if (msg) {
    rosidl_generator_py__msg__BasicTypes__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_py__msg__BasicTypes__Sequence__init(rosidl_generator_py__msg__BasicTypes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_py__msg__BasicTypes * data = NULL;
  if (size) {
    data = (rosidl_generator_py__msg__BasicTypes *)calloc(size, sizeof(rosidl_generator_py__msg__BasicTypes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_py__msg__BasicTypes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_py__msg__BasicTypes__fini(&data[i - 1]);
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
rosidl_generator_py__msg__BasicTypes__Sequence__fini(rosidl_generator_py__msg__BasicTypes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_py__msg__BasicTypes__fini(&array->data[i]);
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

rosidl_generator_py__msg__BasicTypes__Sequence *
rosidl_generator_py__msg__BasicTypes__Sequence__create(size_t size)
{
  rosidl_generator_py__msg__BasicTypes__Sequence * array = (rosidl_generator_py__msg__BasicTypes__Sequence *)malloc(sizeof(rosidl_generator_py__msg__BasicTypes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_py__msg__BasicTypes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_py__msg__BasicTypes__Sequence__destroy(rosidl_generator_py__msg__BasicTypes__Sequence * array)
{
  if (array) {
    rosidl_generator_py__msg__BasicTypes__Sequence__fini(array);
  }
  free(array);
}
