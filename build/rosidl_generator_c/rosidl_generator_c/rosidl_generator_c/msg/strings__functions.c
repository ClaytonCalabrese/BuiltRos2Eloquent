// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_c:msg/Strings.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_c/msg/strings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `string_value`
// Member `string_value_default1`
// Member `string_value_default2`
// Member `string_value_default3`
// Member `string_value_default4`
// Member `string_value_default5`
// Member `bounded_string_value`
// Member `bounded_string_value_default1`
// Member `bounded_string_value_default2`
// Member `bounded_string_value_default3`
// Member `bounded_string_value_default4`
// Member `bounded_string_value_default5`
#include "rosidl_generator_c/string_functions.h"

bool
rosidl_generator_c__msg__Strings__init(rosidl_generator_c__msg__Strings * msg)
{
  if (!msg) {
    return false;
  }
  // string_value
  if (!rosidl_generator_c__String__init(&msg->string_value)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  // string_value_default1
  if (!rosidl_generator_c__String__init(&msg->string_value_default1)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->string_value_default1, "Hello world!");
    if (!success) {
      goto abort_init_0;
    }
  }
  // string_value_default2
  if (!rosidl_generator_c__String__init(&msg->string_value_default2)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->string_value_default2, "Hello'world!");
    if (!success) {
      goto abort_init_1;
    }
  }
  // string_value_default3
  if (!rosidl_generator_c__String__init(&msg->string_value_default3)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->string_value_default3, "Hello\"world!");
    if (!success) {
      goto abort_init_2;
    }
  }
  // string_value_default4
  if (!rosidl_generator_c__String__init(&msg->string_value_default4)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->string_value_default4, "Hello'world!");
    if (!success) {
      goto abort_init_3;
    }
  }
  // string_value_default5
  if (!rosidl_generator_c__String__init(&msg->string_value_default5)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->string_value_default5, "Hello\"world!");
    if (!success) {
      goto abort_init_4;
    }
  }
  // bounded_string_value
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  // bounded_string_value_default1
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value_default1)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->bounded_string_value_default1, "Hello world!");
    if (!success) {
      goto abort_init_5;
    }
  }
  // bounded_string_value_default2
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value_default2)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->bounded_string_value_default2, "Hello'world!");
    if (!success) {
      goto abort_init_6;
    }
  }
  // bounded_string_value_default3
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value_default3)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->bounded_string_value_default3, "Hello\"world!");
    if (!success) {
      goto abort_init_7;
    }
  }
  // bounded_string_value_default4
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value_default4)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->bounded_string_value_default4, "Hello'world!");
    if (!success) {
      goto abort_init_8;
    }
  }
  // bounded_string_value_default5
  if (!rosidl_generator_c__String__init(&msg->bounded_string_value_default5)) {
    rosidl_generator_c__msg__Strings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->bounded_string_value_default5, "Hello\"world!");
    if (!success) {
      goto abort_init_9;
    }
  }
  return true;
abort_init_9:
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default4);
abort_init_8:
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default3);
abort_init_7:
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default2);
abort_init_6:
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default1);
abort_init_5:
  rosidl_generator_c__String__fini(&msg->string_value_default5);
abort_init_4:
  rosidl_generator_c__String__fini(&msg->string_value_default4);
abort_init_3:
  rosidl_generator_c__String__fini(&msg->string_value_default3);
abort_init_2:
  rosidl_generator_c__String__fini(&msg->string_value_default2);
abort_init_1:
  rosidl_generator_c__String__fini(&msg->string_value_default1);
abort_init_0:
  return false;
}

void
rosidl_generator_c__msg__Strings__fini(rosidl_generator_c__msg__Strings * msg)
{
  if (!msg) {
    return;
  }
  // string_value
  rosidl_generator_c__String__fini(&msg->string_value);
  // string_value_default1
  rosidl_generator_c__String__fini(&msg->string_value_default1);
  // string_value_default2
  rosidl_generator_c__String__fini(&msg->string_value_default2);
  // string_value_default3
  rosidl_generator_c__String__fini(&msg->string_value_default3);
  // string_value_default4
  rosidl_generator_c__String__fini(&msg->string_value_default4);
  // string_value_default5
  rosidl_generator_c__String__fini(&msg->string_value_default5);
  // bounded_string_value
  rosidl_generator_c__String__fini(&msg->bounded_string_value);
  // bounded_string_value_default1
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default1);
  // bounded_string_value_default2
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default2);
  // bounded_string_value_default3
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default3);
  // bounded_string_value_default4
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default4);
  // bounded_string_value_default5
  rosidl_generator_c__String__fini(&msg->bounded_string_value_default5);
}

rosidl_generator_c__msg__Strings *
rosidl_generator_c__msg__Strings__create()
{
  rosidl_generator_c__msg__Strings * msg = (rosidl_generator_c__msg__Strings *)malloc(sizeof(rosidl_generator_c__msg__Strings));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_c__msg__Strings));
  bool success = rosidl_generator_c__msg__Strings__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_c__msg__Strings__destroy(rosidl_generator_c__msg__Strings * msg)
{
  if (msg) {
    rosidl_generator_c__msg__Strings__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_c__msg__Strings__Sequence__init(rosidl_generator_c__msg__Strings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_c__msg__Strings * data = NULL;
  if (size) {
    data = (rosidl_generator_c__msg__Strings *)calloc(size, sizeof(rosidl_generator_c__msg__Strings));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_c__msg__Strings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_c__msg__Strings__fini(&data[i - 1]);
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
rosidl_generator_c__msg__Strings__Sequence__fini(rosidl_generator_c__msg__Strings__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_c__msg__Strings__fini(&array->data[i]);
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

rosidl_generator_c__msg__Strings__Sequence *
rosidl_generator_c__msg__Strings__Sequence__create(size_t size)
{
  rosidl_generator_c__msg__Strings__Sequence * array = (rosidl_generator_c__msg__Strings__Sequence *)malloc(sizeof(rosidl_generator_c__msg__Strings__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_c__msg__Strings__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_c__msg__Strings__Sequence__destroy(rosidl_generator_c__msg__Strings__Sequence * array)
{
  if (array) {
    rosidl_generator_c__msg__Strings__Sequence__fini(array);
  }
  free(array);
}
