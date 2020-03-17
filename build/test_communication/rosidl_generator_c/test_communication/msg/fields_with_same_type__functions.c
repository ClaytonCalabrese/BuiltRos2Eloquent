// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice
#include "test_communication/msg/fields_with_same_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `basic_types_values1`
// Member `basic_types_values2`
#include "test_msgs/msg/basic_types__functions.h"

bool
test_communication__msg__FieldsWithSameType__init(test_communication__msg__FieldsWithSameType * msg)
{
  if (!msg) {
    return false;
  }
  // basic_types_values1
  if (!test_msgs__msg__BasicTypes__init(&msg->basic_types_values1)) {
    test_communication__msg__FieldsWithSameType__fini(msg);
    return false;
  }
  // basic_types_values2
  if (!test_msgs__msg__BasicTypes__init(&msg->basic_types_values2)) {
    test_communication__msg__FieldsWithSameType__fini(msg);
    return false;
  }
  return true;
}

void
test_communication__msg__FieldsWithSameType__fini(test_communication__msg__FieldsWithSameType * msg)
{
  if (!msg) {
    return;
  }
  // basic_types_values1
  test_msgs__msg__BasicTypes__fini(&msg->basic_types_values1);
  // basic_types_values2
  test_msgs__msg__BasicTypes__fini(&msg->basic_types_values2);
}

test_communication__msg__FieldsWithSameType *
test_communication__msg__FieldsWithSameType__create()
{
  test_communication__msg__FieldsWithSameType * msg = (test_communication__msg__FieldsWithSameType *)malloc(sizeof(test_communication__msg__FieldsWithSameType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(test_communication__msg__FieldsWithSameType));
  bool success = test_communication__msg__FieldsWithSameType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
test_communication__msg__FieldsWithSameType__destroy(test_communication__msg__FieldsWithSameType * msg)
{
  if (msg) {
    test_communication__msg__FieldsWithSameType__fini(msg);
  }
  free(msg);
}


bool
test_communication__msg__FieldsWithSameType__Sequence__init(test_communication__msg__FieldsWithSameType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  test_communication__msg__FieldsWithSameType * data = NULL;
  if (size) {
    data = (test_communication__msg__FieldsWithSameType *)calloc(size, sizeof(test_communication__msg__FieldsWithSameType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = test_communication__msg__FieldsWithSameType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        test_communication__msg__FieldsWithSameType__fini(&data[i - 1]);
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
test_communication__msg__FieldsWithSameType__Sequence__fini(test_communication__msg__FieldsWithSameType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      test_communication__msg__FieldsWithSameType__fini(&array->data[i]);
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

test_communication__msg__FieldsWithSameType__Sequence *
test_communication__msg__FieldsWithSameType__Sequence__create(size_t size)
{
  test_communication__msg__FieldsWithSameType__Sequence * array = (test_communication__msg__FieldsWithSameType__Sequence *)malloc(sizeof(test_communication__msg__FieldsWithSameType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = test_communication__msg__FieldsWithSameType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
test_communication__msg__FieldsWithSameType__Sequence__destroy(test_communication__msg__FieldsWithSameType__Sequence * array)
{
  if (array) {
    test_communication__msg__FieldsWithSameType__Sequence__fini(array);
  }
  free(array);
}
