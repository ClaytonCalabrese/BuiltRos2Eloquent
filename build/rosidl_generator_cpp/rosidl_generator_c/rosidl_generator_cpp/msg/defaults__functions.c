// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_cpp:msg/Defaults.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_cpp/msg/defaults__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
rosidl_generator_cpp__msg__Defaults__init(rosidl_generator_cpp__msg__Defaults * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  msg->bool_value = true;
  // byte_value
  msg->byte_value = 50;
  // char_value
  msg->char_value = 100;
  // float32_value
  msg->float32_value = 1.125f;
  // float64_value
  msg->float64_value = 1.125l;
  // int8_value
  msg->int8_value = -50;
  // uint8_value
  msg->uint8_value = 200;
  // int16_value
  msg->int16_value = -1000;
  // uint16_value
  msg->uint16_value = 2000;
  // int32_value
  msg->int32_value = -30000l;
  // uint32_value
  msg->uint32_value = 60000ul;
  // int64_value
  msg->int64_value = -40000000ll;
  // uint64_value
  msg->uint64_value = 50000000ull;
  return true;
}

void
rosidl_generator_cpp__msg__Defaults__fini(rosidl_generator_cpp__msg__Defaults * msg)
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

rosidl_generator_cpp__msg__Defaults *
rosidl_generator_cpp__msg__Defaults__create()
{
  rosidl_generator_cpp__msg__Defaults * msg = (rosidl_generator_cpp__msg__Defaults *)malloc(sizeof(rosidl_generator_cpp__msg__Defaults));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_cpp__msg__Defaults));
  bool success = rosidl_generator_cpp__msg__Defaults__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_cpp__msg__Defaults__destroy(rosidl_generator_cpp__msg__Defaults * msg)
{
  if (msg) {
    rosidl_generator_cpp__msg__Defaults__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_cpp__msg__Defaults__Sequence__init(rosidl_generator_cpp__msg__Defaults__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_cpp__msg__Defaults * data = NULL;
  if (size) {
    data = (rosidl_generator_cpp__msg__Defaults *)calloc(size, sizeof(rosidl_generator_cpp__msg__Defaults));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_cpp__msg__Defaults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_cpp__msg__Defaults__fini(&data[i - 1]);
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
rosidl_generator_cpp__msg__Defaults__Sequence__fini(rosidl_generator_cpp__msg__Defaults__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_cpp__msg__Defaults__fini(&array->data[i]);
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

rosidl_generator_cpp__msg__Defaults__Sequence *
rosidl_generator_cpp__msg__Defaults__Sequence__create(size_t size)
{
  rosidl_generator_cpp__msg__Defaults__Sequence * array = (rosidl_generator_cpp__msg__Defaults__Sequence *)malloc(sizeof(rosidl_generator_cpp__msg__Defaults__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_cpp__msg__Defaults__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_cpp__msg__Defaults__Sequence__destroy(rosidl_generator_cpp__msg__Defaults__Sequence * array)
{
  if (array) {
    rosidl_generator_cpp__msg__Defaults__Sequence__fini(array);
  }
  free(array);
}
