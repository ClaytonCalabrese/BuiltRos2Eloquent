// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice
#include "rqt_py_common/msg/val__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rqt_py_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rqt_py_common/msg/val__struct.h"
#include "rqt_py_common/msg/val__functions.h"
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


// forward declare type support functions


using _Val__ros_msg_type = rqt_py_common__msg__Val;

static bool _Val__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Val__ros_msg_type * ros_message = static_cast<const _Val__ros_msg_type *>(untyped_ros_message);
  // Field name: floats
  {
    size_t size = 5;
    auto array_ptr = ros_message->floats;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Val__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Val__ros_msg_type * ros_message = static_cast<_Val__ros_msg_type *>(untyped_ros_message);
  // Field name: floats
  {
    size_t size = 5;
    auto array_ptr = ros_message->floats;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rqt_py_common
size_t get_serialized_size_rqt_py_common__msg__Val(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Val__ros_msg_type * ros_message = static_cast<const _Val__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name floats
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->floats;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Val__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rqt_py_common__msg__Val(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rqt_py_common
size_t max_serialized_size_rqt_py_common__msg__Val(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: floats
  {
    size_t array_size = 5;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Val__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rqt_py_common__msg__Val(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Val = {
  "rqt_py_common::msg",
  "Val",
  _Val__cdr_serialize,
  _Val__cdr_deserialize,
  _Val__get_serialized_size,
  _Val__max_serialized_size
};

static rosidl_message_type_support_t _Val__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Val,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rqt_py_common, msg, Val)() {
  return &_Val__type_support;
}

#if defined(__cplusplus)
}
#endif
