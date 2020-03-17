// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_rclcpp:srv/AddTwoInts.idl
// generated code does not contain a copyright notice
#include "test_rclcpp/srv/add_two_ints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
test_rclcpp__srv__AddTwoInts_Request__init(test_rclcpp__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
test_rclcpp__srv__AddTwoInts_Request__fini(test_rclcpp__srv__AddTwoInts_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

test_rclcpp__srv__AddTwoInts_Request *
test_rclcpp__srv__AddTwoInts_Request__create()
{
  test_rclcpp__srv__AddTwoInts_Request * msg = (test_rclcpp__srv__AddTwoInts_Request *)malloc(sizeof(test_rclcpp__srv__AddTwoInts_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_rclcpp__srv__AddTwoInts_Request));
  bool success = test_rclcpp__srv__AddTwoInts_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_rclcpp__srv__AddTwoInts_Request__destroy(test_rclcpp__srv__AddTwoInts_Request * msg)
{
  if (msg) {
    test_rclcpp__srv__AddTwoInts_Request__fini(msg);
  }
  free(msg);
}


bool
test_rclcpp__srv__AddTwoInts_Request__Sequence__init(test_rclcpp__srv__AddTwoInts_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_rclcpp__srv__AddTwoInts_Request * data = NULL;
  if (size) {
    data = (test_rclcpp__srv__AddTwoInts_Request *)calloc(size, sizeof(test_rclcpp__srv__AddTwoInts_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_rclcpp__srv__AddTwoInts_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_rclcpp__srv__AddTwoInts_Request__fini(&data[i - 1]);
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
test_rclcpp__srv__AddTwoInts_Request__Sequence__fini(test_rclcpp__srv__AddTwoInts_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_rclcpp__srv__AddTwoInts_Request__fini(&array->data[i]);
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

test_rclcpp__srv__AddTwoInts_Request__Sequence *
test_rclcpp__srv__AddTwoInts_Request__Sequence__create(size_t size)
{
  test_rclcpp__srv__AddTwoInts_Request__Sequence * array = (test_rclcpp__srv__AddTwoInts_Request__Sequence *)malloc(sizeof(test_rclcpp__srv__AddTwoInts_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_rclcpp__srv__AddTwoInts_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_rclcpp__srv__AddTwoInts_Request__Sequence__destroy(test_rclcpp__srv__AddTwoInts_Request__Sequence * array)
{
  if (array) {
    test_rclcpp__srv__AddTwoInts_Request__Sequence__fini(array);
  }
  free(array);
}


bool
test_rclcpp__srv__AddTwoInts_Response__init(test_rclcpp__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
test_rclcpp__srv__AddTwoInts_Response__fini(test_rclcpp__srv__AddTwoInts_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

test_rclcpp__srv__AddTwoInts_Response *
test_rclcpp__srv__AddTwoInts_Response__create()
{
  test_rclcpp__srv__AddTwoInts_Response * msg = (test_rclcpp__srv__AddTwoInts_Response *)malloc(sizeof(test_rclcpp__srv__AddTwoInts_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_rclcpp__srv__AddTwoInts_Response));
  bool success = test_rclcpp__srv__AddTwoInts_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_rclcpp__srv__AddTwoInts_Response__destroy(test_rclcpp__srv__AddTwoInts_Response * msg)
{
  if (msg) {
    test_rclcpp__srv__AddTwoInts_Response__fini(msg);
  }
  free(msg);
}


bool
test_rclcpp__srv__AddTwoInts_Response__Sequence__init(test_rclcpp__srv__AddTwoInts_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_rclcpp__srv__AddTwoInts_Response * data = NULL;
  if (size) {
    data = (test_rclcpp__srv__AddTwoInts_Response *)calloc(size, sizeof(test_rclcpp__srv__AddTwoInts_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_rclcpp__srv__AddTwoInts_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_rclcpp__srv__AddTwoInts_Response__fini(&data[i - 1]);
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
test_rclcpp__srv__AddTwoInts_Response__Sequence__fini(test_rclcpp__srv__AddTwoInts_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_rclcpp__srv__AddTwoInts_Response__fini(&array->data[i]);
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

test_rclcpp__srv__AddTwoInts_Response__Sequence *
test_rclcpp__srv__AddTwoInts_Response__Sequence__create(size_t size)
{
  test_rclcpp__srv__AddTwoInts_Response__Sequence * array = (test_rclcpp__srv__AddTwoInts_Response__Sequence *)malloc(sizeof(test_rclcpp__srv__AddTwoInts_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_rclcpp__srv__AddTwoInts_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_rclcpp__srv__AddTwoInts_Response__Sequence__destroy(test_rclcpp__srv__AddTwoInts_Response__Sequence * array)
{
  if (array) {
    test_rclcpp__srv__AddTwoInts_Response__Sequence__fini(array);
  }
  free(array);
}
