// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rcl_interfaces:msg/IntraProcessMessage.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/intra_process_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rcl_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rcl_interfaces/msg/intra_process_message__struct.h"
#include "rcl_interfaces/msg/intra_process_message__functions.h"
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


using _IntraProcessMessage__ros_msg_type = rcl_interfaces__msg__IntraProcessMessage;

static bool _IntraProcessMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IntraProcessMessage__ros_msg_type * ros_message = static_cast<const _IntraProcessMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: publisher_id
  {
    cdr << ros_message->publisher_id;
  }

  // Field name: message_sequence
  {
    cdr << ros_message->message_sequence;
  }

  return true;
}

static bool _IntraProcessMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IntraProcessMessage__ros_msg_type * ros_message = static_cast<_IntraProcessMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: publisher_id
  {
    cdr >> ros_message->publisher_id;
  }

  // Field name: message_sequence
  {
    cdr >> ros_message->message_sequence;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t get_serialized_size_rcl_interfaces__msg__IntraProcessMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IntraProcessMessage__ros_msg_type * ros_message = static_cast<const _IntraProcessMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name publisher_id
  {
    size_t item_size = sizeof(ros_message->publisher_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message_sequence
  {
    size_t item_size = sizeof(ros_message->message_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IntraProcessMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rcl_interfaces__msg__IntraProcessMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rcl_interfaces
size_t max_serialized_size_rcl_interfaces__msg__IntraProcessMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: publisher_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: message_sequence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _IntraProcessMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rcl_interfaces__msg__IntraProcessMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_IntraProcessMessage = {
  "rcl_interfaces::msg",
  "IntraProcessMessage",
  _IntraProcessMessage__cdr_serialize,
  _IntraProcessMessage__cdr_deserialize,
  _IntraProcessMessage__get_serialized_size,
  _IntraProcessMessage__max_serialized_size
};

static rosidl_message_type_support_t _IntraProcessMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IntraProcessMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rcl_interfaces, msg, IntraProcessMessage)() {
  return &_IntraProcessMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
