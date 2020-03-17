// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_cpp:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_cpp/msg/w_strings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `wstring_value`
// Member `wstring_value_default1`
// Member `wstring_value_default2`
// Member `wstring_value_default3`
// Member `array_of_wstrings`
// Member `bounded_sequence_of_wstrings`
// Member `unbounded_sequence_of_wstrings`
#include "rosidl_generator_c/u16string_functions.h"

bool
rosidl_generator_cpp__msg__WStrings__init(rosidl_generator_cpp__msg__WStrings * msg)
{
  if (!msg) {
    return false;
  }
  // wstring_value
  if (!rosidl_generator_c__U16String__init(&msg->wstring_value)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  // wstring_value_default1
  if (!rosidl_generator_c__U16String__init(&msg->wstring_value_default1)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__U16String__assign(&msg->wstring_value_default1, u"Hello world!");
    if (!success) {
      goto abort_init_0;
    }
  }
  // wstring_value_default2
  if (!rosidl_generator_c__U16String__init(&msg->wstring_value_default2)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__U16String__assign(&msg->wstring_value_default2, u"Hellö wörld!");
    if (!success) {
      goto abort_init_1;
    }
  }
  // wstring_value_default3
  if (!rosidl_generator_c__U16String__init(&msg->wstring_value_default3)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  {
    bool success = rosidl_generator_c__U16String__assign(&msg->wstring_value_default3, u"ハローワールド");
    if (!success) {
      goto abort_init_2;
    }
  }
  // array_of_wstrings
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_c__U16String__init(&msg->array_of_wstrings[i])) {
      rosidl_generator_cpp__msg__WStrings__fini(msg);
      return false;
    }
  }
  // bounded_sequence_of_wstrings
  if (!rosidl_generator_c__U16String__Sequence__init(&msg->bounded_sequence_of_wstrings, 0)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  // unbounded_sequence_of_wstrings
  if (!rosidl_generator_c__U16String__Sequence__init(&msg->unbounded_sequence_of_wstrings, 0)) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
    return false;
  }
  return true;
abort_init_2:
  rosidl_generator_c__U16String__fini(&msg->wstring_value_default2);
abort_init_1:
  rosidl_generator_c__U16String__fini(&msg->wstring_value_default1);
abort_init_0:
  return false;
}

void
rosidl_generator_cpp__msg__WStrings__fini(rosidl_generator_cpp__msg__WStrings * msg)
{
  if (!msg) {
    return;
  }
  // wstring_value
  rosidl_generator_c__U16String__fini(&msg->wstring_value);
  // wstring_value_default1
  rosidl_generator_c__U16String__fini(&msg->wstring_value_default1);
  // wstring_value_default2
  rosidl_generator_c__U16String__fini(&msg->wstring_value_default2);
  // wstring_value_default3
  rosidl_generator_c__U16String__fini(&msg->wstring_value_default3);
  // array_of_wstrings
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_c__U16String__fini(&msg->array_of_wstrings[i]);
  }
  // bounded_sequence_of_wstrings
  rosidl_generator_c__U16String__Sequence__fini(&msg->bounded_sequence_of_wstrings);
  // unbounded_sequence_of_wstrings
  rosidl_generator_c__U16String__Sequence__fini(&msg->unbounded_sequence_of_wstrings);
}

rosidl_generator_cpp__msg__WStrings *
rosidl_generator_cpp__msg__WStrings__create()
{
  rosidl_generator_cpp__msg__WStrings * msg = (rosidl_generator_cpp__msg__WStrings *)malloc(sizeof(rosidl_generator_cpp__msg__WStrings));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_cpp__msg__WStrings));
  bool success = rosidl_generator_cpp__msg__WStrings__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_cpp__msg__WStrings__destroy(rosidl_generator_cpp__msg__WStrings * msg)
{
  if (msg) {
    rosidl_generator_cpp__msg__WStrings__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_cpp__msg__WStrings__Sequence__init(rosidl_generator_cpp__msg__WStrings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_cpp__msg__WStrings * data = NULL;
  if (size) {
    data = (rosidl_generator_cpp__msg__WStrings *)calloc(size, sizeof(rosidl_generator_cpp__msg__WStrings));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_cpp__msg__WStrings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_cpp__msg__WStrings__fini(&data[i - 1]);
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
rosidl_generator_cpp__msg__WStrings__Sequence__fini(rosidl_generator_cpp__msg__WStrings__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_cpp__msg__WStrings__fini(&array->data[i]);
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

rosidl_generator_cpp__msg__WStrings__Sequence *
rosidl_generator_cpp__msg__WStrings__Sequence__create(size_t size)
{
  rosidl_generator_cpp__msg__WStrings__Sequence * array = (rosidl_generator_cpp__msg__WStrings__Sequence *)malloc(sizeof(rosidl_generator_cpp__msg__WStrings__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_cpp__msg__WStrings__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_cpp__msg__WStrings__Sequence__destroy(rosidl_generator_cpp__msg__WStrings__Sequence * array)
{
  if (array) {
    rosidl_generator_cpp__msg__WStrings__Sequence__fini(array);
  }
  free(array);
}
