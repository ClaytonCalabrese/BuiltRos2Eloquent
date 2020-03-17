// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_cpp:msg/MultiNested.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_cpp/msg/multi_nested__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `array_of_arrays`
// Member `bounded_sequence_of_arrays`
// Member `unbounded_sequence_of_arrays`
#include "rosidl_generator_cpp/msg/arrays__functions.h"
// Member `array_of_bounded_sequences`
// Member `bounded_sequence_of_bounded_sequences`
// Member `unbounded_sequence_of_bounded_sequences`
#include "rosidl_generator_cpp/msg/bounded_sequences__functions.h"
// Member `array_of_unbounded_sequences`
// Member `bounded_sequence_of_unbounded_sequences`
// Member `unbounded_sequence_of_unbounded_sequences`
#include "rosidl_generator_cpp/msg/unbounded_sequences__functions.h"

bool
rosidl_generator_cpp__msg__MultiNested__init(rosidl_generator_cpp__msg__MultiNested * msg)
{
  if (!msg) {
    return false;
  }
  // array_of_arrays
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_cpp__msg__Arrays__init(&msg->array_of_arrays[i])) {
      rosidl_generator_cpp__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // array_of_bounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_cpp__msg__BoundedSequences__init(&msg->array_of_bounded_sequences[i])) {
      rosidl_generator_cpp__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // array_of_unbounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    if (!rosidl_generator_cpp__msg__UnboundedSequences__init(&msg->array_of_unbounded_sequences[i])) {
      rosidl_generator_cpp__msg__MultiNested__fini(msg);
      return false;
    }
  }
  // bounded_sequence_of_arrays
  if (!rosidl_generator_cpp__msg__Arrays__Sequence__init(&msg->bounded_sequence_of_arrays, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  // bounded_sequence_of_bounded_sequences
  if (!rosidl_generator_cpp__msg__BoundedSequences__Sequence__init(&msg->bounded_sequence_of_bounded_sequences, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  // bounded_sequence_of_unbounded_sequences
  if (!rosidl_generator_cpp__msg__UnboundedSequences__Sequence__init(&msg->bounded_sequence_of_unbounded_sequences, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_arrays
  if (!rosidl_generator_cpp__msg__Arrays__Sequence__init(&msg->unbounded_sequence_of_arrays, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_bounded_sequences
  if (!rosidl_generator_cpp__msg__BoundedSequences__Sequence__init(&msg->unbounded_sequence_of_bounded_sequences, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  // unbounded_sequence_of_unbounded_sequences
  if (!rosidl_generator_cpp__msg__UnboundedSequences__Sequence__init(&msg->unbounded_sequence_of_unbounded_sequences, 0)) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_generator_cpp__msg__MultiNested__fini(rosidl_generator_cpp__msg__MultiNested * msg)
{
  if (!msg) {
    return;
  }
  // array_of_arrays
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_cpp__msg__Arrays__fini(&msg->array_of_arrays[i]);
  }
  // array_of_bounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_cpp__msg__BoundedSequences__fini(&msg->array_of_bounded_sequences[i]);
  }
  // array_of_unbounded_sequences
  for (size_t i = 0; i < 3; ++i) {
    rosidl_generator_cpp__msg__UnboundedSequences__fini(&msg->array_of_unbounded_sequences[i]);
  }
  // bounded_sequence_of_arrays
  rosidl_generator_cpp__msg__Arrays__Sequence__fini(&msg->bounded_sequence_of_arrays);
  // bounded_sequence_of_bounded_sequences
  rosidl_generator_cpp__msg__BoundedSequences__Sequence__fini(&msg->bounded_sequence_of_bounded_sequences);
  // bounded_sequence_of_unbounded_sequences
  rosidl_generator_cpp__msg__UnboundedSequences__Sequence__fini(&msg->bounded_sequence_of_unbounded_sequences);
  // unbounded_sequence_of_arrays
  rosidl_generator_cpp__msg__Arrays__Sequence__fini(&msg->unbounded_sequence_of_arrays);
  // unbounded_sequence_of_bounded_sequences
  rosidl_generator_cpp__msg__BoundedSequences__Sequence__fini(&msg->unbounded_sequence_of_bounded_sequences);
  // unbounded_sequence_of_unbounded_sequences
  rosidl_generator_cpp__msg__UnboundedSequences__Sequence__fini(&msg->unbounded_sequence_of_unbounded_sequences);
}

rosidl_generator_cpp__msg__MultiNested *
rosidl_generator_cpp__msg__MultiNested__create()
{
  rosidl_generator_cpp__msg__MultiNested * msg = (rosidl_generator_cpp__msg__MultiNested *)malloc(sizeof(rosidl_generator_cpp__msg__MultiNested));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_cpp__msg__MultiNested));
  bool success = rosidl_generator_cpp__msg__MultiNested__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_cpp__msg__MultiNested__destroy(rosidl_generator_cpp__msg__MultiNested * msg)
{
  if (msg) {
    rosidl_generator_cpp__msg__MultiNested__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_cpp__msg__MultiNested__Sequence__init(rosidl_generator_cpp__msg__MultiNested__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_cpp__msg__MultiNested * data = NULL;
  if (size) {
    data = (rosidl_generator_cpp__msg__MultiNested *)calloc(size, sizeof(rosidl_generator_cpp__msg__MultiNested));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_cpp__msg__MultiNested__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_cpp__msg__MultiNested__fini(&data[i - 1]);
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
rosidl_generator_cpp__msg__MultiNested__Sequence__fini(rosidl_generator_cpp__msg__MultiNested__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_cpp__msg__MultiNested__fini(&array->data[i]);
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

rosidl_generator_cpp__msg__MultiNested__Sequence *
rosidl_generator_cpp__msg__MultiNested__Sequence__create(size_t size)
{
  rosidl_generator_cpp__msg__MultiNested__Sequence * array = (rosidl_generator_cpp__msg__MultiNested__Sequence *)malloc(sizeof(rosidl_generator_cpp__msg__MultiNested__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_cpp__msg__MultiNested__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_cpp__msg__MultiNested__Sequence__destroy(rosidl_generator_cpp__msg__MultiNested__Sequence * array)
{
  if (array) {
    rosidl_generator_cpp__msg__MultiNested__Sequence__fini(array);
  }
  free(array);
}
