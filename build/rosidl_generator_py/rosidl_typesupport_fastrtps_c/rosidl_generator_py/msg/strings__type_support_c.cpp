// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_generator_py:msg/Strings.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/strings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_generator_py/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_generator_py/msg/strings__struct.h"
#include "rosidl_generator_py/msg/strings__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // bounded_string_value, bounded_string_value_default1, bounded_string_value_default2, bounded_string_value_default3, bounded_string_value_default4, bounded_string_value_default5, string_value, string_value_default1, string_value_default2, string_value_default3, string_value_default4, string_value_default5
#include "rosidl_generator_c/string_functions.h"  // bounded_string_value, bounded_string_value_default1, bounded_string_value_default2, bounded_string_value_default3, bounded_string_value_default4, bounded_string_value_default5, string_value, string_value_default1, string_value_default2, string_value_default3, string_value_default4, string_value_default5

// forward declare type support functions


using _Strings__ros_msg_type = rosidl_generator_py__msg__Strings;

static bool _Strings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Strings__ros_msg_type * ros_message = static_cast<const _Strings__ros_msg_type *>(untyped_ros_message);
  // Field name: string_value
  {
    const rosidl_generator_c__String * str = &ros_message->string_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: string_value_default1
  {
    const rosidl_generator_c__String * str = &ros_message->string_value_default1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: string_value_default2
  {
    const rosidl_generator_c__String * str = &ros_message->string_value_default2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: string_value_default3
  {
    const rosidl_generator_c__String * str = &ros_message->string_value_default3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: string_value_default4
  {
    const rosidl_generator_c__String * str = &ros_message->string_value_default4;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: string_value_default5
  {
    const rosidl_generator_c__String * str = &ros_message->string_value_default5;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value_default1
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value_default1;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value_default2
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value_default2;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value_default3
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value_default3;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value_default4
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value_default4;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: bounded_string_value_default5
  {
    const rosidl_generator_c__String * str = &ros_message->bounded_string_value_default5;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Strings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Strings__ros_msg_type * ros_message = static_cast<_Strings__ros_msg_type *>(untyped_ros_message);
  // Field name: string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value.data) {
      rosidl_generator_c__String__init(&ros_message->string_value);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value'\n");
      return false;
    }
  }

  // Field name: string_value_default1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value_default1.data) {
      rosidl_generator_c__String__init(&ros_message->string_value_default1);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value_default1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value_default1'\n");
      return false;
    }
  }

  // Field name: string_value_default2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value_default2.data) {
      rosidl_generator_c__String__init(&ros_message->string_value_default2);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value_default2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value_default2'\n");
      return false;
    }
  }

  // Field name: string_value_default3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value_default3.data) {
      rosidl_generator_c__String__init(&ros_message->string_value_default3);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value_default3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value_default3'\n");
      return false;
    }
  }

  // Field name: string_value_default4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value_default4.data) {
      rosidl_generator_c__String__init(&ros_message->string_value_default4);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value_default4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value_default4'\n");
      return false;
    }
  }

  // Field name: string_value_default5
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->string_value_default5.data) {
      rosidl_generator_c__String__init(&ros_message->string_value_default5);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->string_value_default5,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'string_value_default5'\n");
      return false;
    }
  }

  // Field name: bounded_string_value
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value'\n");
      return false;
    }
  }

  // Field name: bounded_string_value_default1
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value_default1.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value_default1);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value_default1,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value_default1'\n");
      return false;
    }
  }

  // Field name: bounded_string_value_default2
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value_default2.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value_default2);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value_default2,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value_default2'\n");
      return false;
    }
  }

  // Field name: bounded_string_value_default3
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value_default3.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value_default3);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value_default3,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value_default3'\n");
      return false;
    }
  }

  // Field name: bounded_string_value_default4
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value_default4.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value_default4);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value_default4,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value_default4'\n");
      return false;
    }
  }

  // Field name: bounded_string_value_default5
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->bounded_string_value_default5.data) {
      rosidl_generator_c__String__init(&ros_message->bounded_string_value_default5);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->bounded_string_value_default5,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'bounded_string_value_default5'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t get_serialized_size_rosidl_generator_py__msg__Strings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Strings__ros_msg_type * ros_message = static_cast<const _Strings__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value.size + 1);
  // field.name string_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value_default1.size + 1);
  // field.name string_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value_default2.size + 1);
  // field.name string_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value_default3.size + 1);
  // field.name string_value_default4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value_default4.size + 1);
  // field.name string_value_default5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->string_value_default5.size + 1);
  // field.name bounded_string_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value.size + 1);
  // field.name bounded_string_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value_default1.size + 1);
  // field.name bounded_string_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value_default2.size + 1);
  // field.name bounded_string_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value_default3.size + 1);
  // field.name bounded_string_value_default4
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value_default4.size + 1);
  // field.name bounded_string_value_default5
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->bounded_string_value_default5.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Strings__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_generator_py__msg__Strings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t max_serialized_size_rosidl_generator_py__msg__Strings(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: string_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_value_default4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_value_default5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: bounded_string_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }
  // member: bounded_string_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }
  // member: bounded_string_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }
  // member: bounded_string_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }
  // member: bounded_string_value_default4
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }
  // member: bounded_string_value_default5
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        22 +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Strings__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_generator_py__msg__Strings(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Strings = {
  "rosidl_generator_py::msg",
  "Strings",
  _Strings__cdr_serialize,
  _Strings__cdr_deserialize,
  _Strings__get_serialized_size,
  _Strings__max_serialized_size
};

static rosidl_message_type_support_t _Strings__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Strings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_generator_py, msg, Strings)() {
  return &_Strings__type_support;
}

#if defined(__cplusplus)
}
#endif
