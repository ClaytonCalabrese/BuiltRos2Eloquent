// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rqt_py_common:msg/ArrayVal.idl
// generated code does not contain a copyright notice
#include "rqt_py_common/msg/array_val__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rqt_py_common/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rqt_py_common/msg/array_val__struct.h"
#include "rqt_py_common/msg/array_val__functions.h"
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

#include "rqt_py_common/msg/val__functions.h"  // vals

// forward declare type support functions
size_t get_serialized_size_rqt_py_common__msg__Val(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_rqt_py_common__msg__Val(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rqt_py_common, msg, Val)();


using _ArrayVal__ros_msg_type = rqt_py_common__msg__ArrayVal;

static bool _ArrayVal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArrayVal__ros_msg_type * ros_message = static_cast<const _ArrayVal__ros_msg_type *>(untyped_ros_message);
  // Field name: vals
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rqt_py_common, msg, Val
      )()->data);
    size_t size = 5;
    auto array_ptr = ros_message->vals;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ArrayVal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArrayVal__ros_msg_type * ros_message = static_cast<_ArrayVal__ros_msg_type *>(untyped_ros_message);
  // Field name: vals
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rqt_py_common, msg, Val
      )()->data);
    size_t size = 5;
    auto array_ptr = ros_message->vals;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rqt_py_common
size_t get_serialized_size_rqt_py_common__msg__ArrayVal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArrayVal__ros_msg_type * ros_message = static_cast<const _ArrayVal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name vals
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->vals;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_rqt_py_common__msg__Val(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArrayVal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rqt_py_common__msg__ArrayVal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rqt_py_common
size_t max_serialized_size_rqt_py_common__msg__ArrayVal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: vals
  {
    size_t array_size = 5;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_rqt_py_common__msg__Val(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ArrayVal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rqt_py_common__msg__ArrayVal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArrayVal = {
  "rqt_py_common::msg",
  "ArrayVal",
  _ArrayVal__cdr_serialize,
  _ArrayVal__cdr_deserialize,
  _ArrayVal__get_serialized_size,
  _ArrayVal__max_serialized_size
};

static rosidl_message_type_support_t _ArrayVal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArrayVal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rqt_py_common, msg, ArrayVal)() {
  return &_ArrayVal__type_support;
}

#if defined(__cplusplus)
}
#endif
