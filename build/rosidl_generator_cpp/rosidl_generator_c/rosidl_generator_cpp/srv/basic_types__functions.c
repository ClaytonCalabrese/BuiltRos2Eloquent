// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rosidl_generator_cpp:srv/BasicTypes.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_cpp/srv/basic_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `string_value`
#include "rosidl_generator_c/string_functions.h"

bool
rosidl_generator_cpp__srv__BasicTypes_Request__init(rosidl_generator_cpp__srv__BasicTypes_Request * msg)
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
  // string_value
  if (!rosidl_generator_c__String__init(&msg->string_value)) {
    rosidl_generator_cpp__srv__BasicTypes_Request__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_generator_cpp__srv__BasicTypes_Request__fini(rosidl_generator_cpp__srv__BasicTypes_Request * msg)
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
  // string_value
  rosidl_generator_c__String__fini(&msg->string_value);
}

rosidl_generator_cpp__srv__BasicTypes_Request *
rosidl_generator_cpp__srv__BasicTypes_Request__create()
{
  rosidl_generator_cpp__srv__BasicTypes_Request * msg = (rosidl_generator_cpp__srv__BasicTypes_Request *)malloc(sizeof(rosidl_generator_cpp__srv__BasicTypes_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_cpp__srv__BasicTypes_Request));
  bool success = rosidl_generator_cpp__srv__BasicTypes_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_cpp__srv__BasicTypes_Request__destroy(rosidl_generator_cpp__srv__BasicTypes_Request * msg)
{
  if (msg) {
    rosidl_generator_cpp__srv__BasicTypes_Request__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__init(rosidl_generator_cpp__srv__BasicTypes_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_cpp__srv__BasicTypes_Request * data = NULL;
  if (size) {
    data = (rosidl_generator_cpp__srv__BasicTypes_Request *)calloc(size, sizeof(rosidl_generator_cpp__srv__BasicTypes_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_cpp__srv__BasicTypes_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_cpp__srv__BasicTypes_Request__fini(&data[i - 1]);
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
rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__fini(rosidl_generator_cpp__srv__BasicTypes_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_cpp__srv__BasicTypes_Request__fini(&array->data[i]);
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

rosidl_generator_cpp__srv__BasicTypes_Request__Sequence *
rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__create(size_t size)
{
  rosidl_generator_cpp__srv__BasicTypes_Request__Sequence * array = (rosidl_generator_cpp__srv__BasicTypes_Request__Sequence *)malloc(sizeof(rosidl_generator_cpp__srv__BasicTypes_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__destroy(rosidl_generator_cpp__srv__BasicTypes_Request__Sequence * array)
{
  if (array) {
    rosidl_generator_cpp__srv__BasicTypes_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `string_value`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
rosidl_generator_cpp__srv__BasicTypes_Response__init(rosidl_generator_cpp__srv__BasicTypes_Response * msg)
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
  // string_value
  if (!rosidl_generator_c__String__init(&msg->string_value)) {
    rosidl_generator_cpp__srv__BasicTypes_Response__fini(msg);
    return false;
  }
  return true;
}

void
rosidl_generator_cpp__srv__BasicTypes_Response__fini(rosidl_generator_cpp__srv__BasicTypes_Response * msg)
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
  // string_value
  rosidl_generator_c__String__fini(&msg->string_value);
}

rosidl_generator_cpp__srv__BasicTypes_Response *
rosidl_generator_cpp__srv__BasicTypes_Response__create()
{
  rosidl_generator_cpp__srv__BasicTypes_Response * msg = (rosidl_generator_cpp__srv__BasicTypes_Response *)malloc(sizeof(rosidl_generator_cpp__srv__BasicTypes_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rosidl_generator_cpp__srv__BasicTypes_Response));
  bool success = rosidl_generator_cpp__srv__BasicTypes_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
rosidl_generator_cpp__srv__BasicTypes_Response__destroy(rosidl_generator_cpp__srv__BasicTypes_Response * msg)
{
  if (msg) {
    rosidl_generator_cpp__srv__BasicTypes_Response__fini(msg);
  }
  free(msg);
}


bool
rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__init(rosidl_generator_cpp__srv__BasicTypes_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rosidl_generator_cpp__srv__BasicTypes_Response * data = NULL;
  if (size) {
    data = (rosidl_generator_cpp__srv__BasicTypes_Response *)calloc(size, sizeof(rosidl_generator_cpp__srv__BasicTypes_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rosidl_generator_cpp__srv__BasicTypes_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rosidl_generator_cpp__srv__BasicTypes_Response__fini(&data[i - 1]);
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
rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__fini(rosidl_generator_cpp__srv__BasicTypes_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rosidl_generator_cpp__srv__BasicTypes_Response__fini(&array->data[i]);
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

rosidl_generator_cpp__srv__BasicTypes_Response__Sequence *
rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__create(size_t size)
{
  rosidl_generator_cpp__srv__BasicTypes_Response__Sequence * array = (rosidl_generator_cpp__srv__BasicTypes_Response__Sequence *)malloc(sizeof(rosidl_generator_cpp__srv__BasicTypes_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__destroy(rosidl_generator_cpp__srv__BasicTypes_Response__Sequence * array)
{
  if (array) {
    rosidl_generator_cpp__srv__BasicTypes_Response__Sequence__fini(array);
  }
  free(array);
}
