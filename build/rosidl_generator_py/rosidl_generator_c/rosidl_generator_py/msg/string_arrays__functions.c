// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/string_arrays__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `ub_string_static_array_value`
// Member `ub_string_ub_array_value`
// Member `ub_string_dynamic_array_value`
// Member `string_dynamic_array_value`
// Member `string_static_array_value`
// Member `string_bounded_array_value`
// Member `def_string_dynamic_array_value`
// Member `def_string_static_array_value`
// Member `def_string_bounded_array_value`
// Member `def_various_quotes`
// Member `def_various_commas`
#include "rosidl_generator_c/string_functions.h"

bool
rosidl_generator_py__msg__StringArrays__init(rosidl_generator_py__msg__StringArrays * msg)
{
  if (!msg) {
    return false;
  }
  // ub_string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_c__String__init(&msg->ub_string_static_array_value[i])) {
      rosidl_generator_py__msg__StringArrays__fini(msg);
      return false;
    }
  }
  // ub_string_ub_array_value
  if (!rosidl_generator_c__String__Sequence__init(&msg->ub_string_ub_array_value, 0)) {
    rosidl_generator_py__msg__StringArrays__fini(msg);
    return false;
  }
  // ub_string_dynamic_array_value
  if (!rosidl_generator_c__String__Sequence__init(&msg->ub_string_dynamic_array_value, 0)) {
    rosidl_generator_py__msg__StringArrays__fini(msg);
    return false;
  }
  // string_dynamic_array_value
  if (!rosidl_generator_c__String__Sequence__init(&msg->string_dynamic_array_value, 0)) {
    rosidl_generator_py__msg__StringArrays__fini(msg);
    return false;
  }
  // string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_c__String__init(&msg->string_static_array_value[i])) {
      rosidl_generator_py__msg__StringArrays__fini(msg);
      return false;
    }
  }
  // string_bounded_array_value
  if (!rosidl_generator_c__String__Sequence__init(&msg->string_bounded_array_value, 0)) {
    rosidl_generator_py__msg__StringArrays__fini(msg);
    return false;
  }
  // def_string_dynamic_array_value
  {
    bool success = rosidl_generator_c__String__Sequence__init(&msg->def_string_dynamic_array_value, 5);
    if (!success) {
      goto abort_init_0;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_dynamic_array_value.data[0], "What");
    if (!success) {
      goto abort_init_1;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_dynamic_array_value.data[1], "a");
    if (!success) {
      goto abort_init_2;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_dynamic_array_value.data[2], "wonderful");
    if (!success) {
      goto abort_init_3;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_dynamic_array_value.data[3], "world");
    if (!success) {
      goto abort_init_4;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_dynamic_array_value.data[4], "!");
    if (!success) {
      goto abort_init_5;
    }
  }
  // def_string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_c__String__init(&msg->def_string_static_array_value[i])) {
      rosidl_generator_py__msg__StringArrays__fini(msg);
      return false;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_static_array_value[0], "Hello");
    if (!success) {
      goto abort_init_6;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_static_array_value[1], "World");
    if (!success) {
      goto abort_init_7;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_static_array_value[2], "!");
    if (!success) {
      goto abort_init_8;
    }
  }
  // def_string_bounded_array_value
  {
    bool success = rosidl_generator_c__String__Sequence__init(&msg->def_string_bounded_array_value, 3);
    if (!success) {
      goto abort_init_9;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_bounded_array_value.data[0], "Hello");
    if (!success) {
      goto abort_init_10;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_bounded_array_value.data[1], "World");
    if (!success) {
      goto abort_init_11;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_string_bounded_array_value.data[2], "!");
    if (!success) {
      goto abort_init_12;
    }
  }
  // def_various_quotes
  {
    bool success = rosidl_generator_c__String__Sequence__init(&msg->def_various_quotes, 2);
    if (!success) {
      goto abort_init_13;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_quotes.data[0], "H\"el'lo");
    if (!success) {
      goto abort_init_14;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_quotes.data[1], "Wo'r\"ld");
    if (!success) {
      goto abort_init_15;
    }
  }
  // def_various_commas
  {
    bool success = rosidl_generator_c__String__Sequence__init(&msg->def_various_commas, 4);
    if (!success) {
      goto abort_init_16;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_commas.data[0], "Hel,lo");
    if (!success) {
      goto abort_init_17;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_commas.data[1], ",World");
    if (!success) {
      goto abort_init_18;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_commas.data[2], "abcd");
    if (!success) {
      goto abort_init_19;
    }
  }
  {
    bool success = rosidl_generator_c__String__assign(&msg->def_various_commas.data[3], "!,");
    if (!success) {
      goto abort_init_20;
    }
  }
  return true;
abort_init_20:
  rosidl_generator_c__String__fini(&msg->def_various_commas.data[2]);
abort_init_19:
  rosidl_generator_c__String__fini(&msg->def_various_commas.data[1]);
abort_init_18:
  rosidl_generator_c__String__fini(&msg->def_various_commas.data[0]);
abort_init_17:
  rosidl_generator_c__String__Sequence__fini(&msg->def_various_commas);
abort_init_16:
  rosidl_generator_c__String__fini(&msg->def_various_quotes.data[1]);
abort_init_15:
  rosidl_generator_c__String__fini(&msg->def_various_quotes.data[0]);
abort_init_14:
  rosidl_generator_c__String__Sequence__fini(&msg->def_various_quotes);
abort_init_13:
  rosidl_generator_c__String__fini(&msg->def_string_bounded_array_value.data[2]);
abort_init_12:
  rosidl_generator_c__String__fini(&msg->def_string_bounded_array_value.data[1]);
abort_init_11:
  rosidl_generator_c__String__fini(&msg->def_string_bounded_array_value.data[0]);
abort_init_10:
  rosidl_generator_c__String__Sequence__fini(&msg->def_string_bounded_array_value);
abort_init_9:
  rosidl_generator_c__String__fini(&msg->def_string_static_array_value[2]);
abort_init_8:
  rosidl_generator_c__String__fini(&msg->def_string_static_array_value[1]);
abort_init_7:
  rosidl_generator_c__String__fini(&msg->def_string_static_array_value[0]);
abort_init_6:
  rosidl_generator_c__String__fini(&msg->def_string_dynamic_array_value.data[4]);
abort_init_5:
  rosidl_generator_c__String__fini(&msg->def_string_dynamic_array_value.data[3]);
abort_init_4:
  rosidl_generator_c__String__fini(&msg->def_string_dynamic_array_value.data[2]);
abort_init_3:
  rosidl_generator_c__String__fini(&msg->def_string_dynamic_array_value.data[1]);
abort_init_2:
  rosidl_generator_c__String__fini(&msg->def_string_dynamic_array_value.data[0]);
abort_init_1:
  rosidl_generator_c__String__Sequence__fini(&msg->def_string_dynamic_array_value);
abort_init_0:
  return false;
}

void
rosidl_generator_py__msg__StringArrays__fini(rosidl_generator_py__msg__StringArrays * msg)
{
  if (!msg) {
    return;
  }
  // ub_string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_c__String__fini(&msg->ub_string_static_array_value[i]);
  }
  // ub_string_ub_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->ub_string_ub_array_value);
  // ub_string_dynamic_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->ub_string_dynamic_array_value);
  // string_dynamic_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->string_dynamic_array_value);
  // string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_c__String__fini(&msg->string_static_array_value[i]);
  }
  // string_bounded_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->string_bounded_array_value);
  // def_string_dynamic_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->def_string_dynamic_array_value);
  // def_string_static_array_value
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_c__String__fini(&msg->def_string_static_array_value[i]);
  }
  // def_string_bounded_array_value
  rosidl_generator_c__String__Sequence__fini(&msg->def_string_bounded_array_value);
  // def_various_quotes
  rosidl_generator_c__String__Sequence__fini(&msg->def_various_quotes);
  // def_various_commas
  rosidl_generator_c__String__Sequence__fini(&msg->def_various_commas);
}

rosidl_generator_py__msg__StringArrays *
rosidl_generator_py__msg__StringArrays__create()
{
  rosidl_generator_py__msg__StringArrays * msg = (rosidl_generator_py__msg__StringArrays *)malloc(sizeof(rosidl_generator_py__msg__StringArrays));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_py__msg__StringArrays));
  bool success = rosidl_generator_py__msg__StringArrays__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_py__msg__StringArrays__destroy(rosidl_generator_py__msg__StringArrays * msg)
{
  if (msg) {
    rosidl_generator_py__msg__StringArrays__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_py__msg__StringArrays__Sequence__init(rosidl_generator_py__msg__StringArrays__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_py__msg__StringArrays * data = NULL;
  if (size) {
    data = (rosidl_generator_py__msg__StringArrays *)calloc(size, sizeof(rosidl_generator_py__msg__StringArrays));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_py__msg__StringArrays__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_py__msg__StringArrays__fini(&data[i - 1]);
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
rosidl_generator_py__msg__StringArrays__Sequence__fini(rosidl_generator_py__msg__StringArrays__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_py__msg__StringArrays__fini(&array->data[i]);
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

rosidl_generator_py__msg__StringArrays__Sequence *
rosidl_generator_py__msg__StringArrays__Sequence__create(size_t size)
{
  rosidl_generator_py__msg__StringArrays__Sequence * array = (rosidl_generator_py__msg__StringArrays__Sequence *)malloc(sizeof(rosidl_generator_py__msg__StringArrays__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_py__msg__StringArrays__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_py__msg__StringArrays__Sequence__destroy(rosidl_generator_py__msg__StringArrays__Sequence * array)
{
  if (array) {
    rosidl_generator_py__msg__StringArrays__Sequence__fini(array);
  }
  free(array);
}
