// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_rclcpp:msg/UInt32.idl
// generated code does not contain a copyright notice
#include "test_rclcpp/msg/u_int32__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
test_rclcpp__msg__UInt32__init(test_rclcpp__msg__UInt32 * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
test_rclcpp__msg__UInt32__fini(test_rclcpp__msg__UInt32 * msg)
{
  if (!msg) {
    return;
  }
  // data
}

test_rclcpp__msg__UInt32 *
test_rclcpp__msg__UInt32__create()
{
  test_rclcpp__msg__UInt32 * msg = (test_rclcpp__msg__UInt32 *)malloc(sizeof(test_rclcpp__msg__UInt32));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_rclcpp__msg__UInt32));
  bool success = test_rclcpp__msg__UInt32__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_rclcpp__msg__UInt32__destroy(test_rclcpp__msg__UInt32 * msg)
{
  if (msg) {
    test_rclcpp__msg__UInt32__fini(msg);
  }
  free(msg);
}


bool
test_rclcpp__msg__UInt32__Sequence__init(test_rclcpp__msg__UInt32__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_rclcpp__msg__UInt32 * data = NULL;
  if (size) {
    data = (test_rclcpp__msg__UInt32 *)calloc(size, sizeof(test_rclcpp__msg__UInt32));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_rclcpp__msg__UInt32__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_rclcpp__msg__UInt32__fini(&data[i - 1]);
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
test_rclcpp__msg__UInt32__Sequence__fini(test_rclcpp__msg__UInt32__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_rclcpp__msg__UInt32__fini(&array->data[i]);
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

test_rclcpp__msg__UInt32__Sequence *
test_rclcpp__msg__UInt32__Sequence__create(size_t size)
{
  test_rclcpp__msg__UInt32__Sequence * array = (test_rclcpp__msg__UInt32__Sequence *)malloc(sizeof(test_rclcpp__msg__UInt32__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_rclcpp__msg__UInt32__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_rclcpp__msg__UInt32__Sequence__destroy(test_rclcpp__msg__UInt32__Sequence * array)
{
  if (array) {
    test_rclcpp__msg__UInt32__Sequence__fini(array);
  }
  free(array);
}
