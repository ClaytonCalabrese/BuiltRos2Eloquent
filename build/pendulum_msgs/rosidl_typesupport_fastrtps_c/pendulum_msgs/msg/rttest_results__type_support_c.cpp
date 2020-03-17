// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/rttest_results__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pendulum_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pendulum_msgs/msg/rttest_results__struct.h"
#include "pendulum_msgs/msg/rttest_results__functions.h"
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

#include "builtin_interfaces/msg/time__functions.h"  // stamp
#include "pendulum_msgs/msg/joint_command__functions.h"  // command
#include "pendulum_msgs/msg/joint_state__functions.h"  // state

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pendulum_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pendulum_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pendulum_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_pendulum_msgs__msg__JointCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pendulum_msgs__msg__JointCommand(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointCommand)();
size_t get_serialized_size_pendulum_msgs__msg__JointState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_pendulum_msgs__msg__JointState(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointState)();


using _RttestResults__ros_msg_type = pendulum_msgs__msg__RttestResults;

static bool _RttestResults__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RttestResults__ros_msg_type * ros_message = static_cast<const _RttestResults__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointCommand
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->command, cdr))
    {
      return false;
    }
  }

  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->state, cdr))
    {
      return false;
    }
  }

  // Field name: cur_latency
  {
    cdr << ros_message->cur_latency;
  }

  // Field name: mean_latency
  {
    cdr << ros_message->mean_latency;
  }

  // Field name: min_latency
  {
    cdr << ros_message->min_latency;
  }

  // Field name: max_latency
  {
    cdr << ros_message->max_latency;
  }

  // Field name: minor_pagefaults
  {
    cdr << ros_message->minor_pagefaults;
  }

  // Field name: major_pagefaults
  {
    cdr << ros_message->major_pagefaults;
  }

  return true;
}

static bool _RttestResults__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RttestResults__ros_msg_type * ros_message = static_cast<_RttestResults__ros_msg_type *>(untyped_ros_message);
  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  // Field name: command
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointCommand
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->command))
    {
      return false;
    }
  }

  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->state))
    {
      return false;
    }
  }

  // Field name: cur_latency
  {
    cdr >> ros_message->cur_latency;
  }

  // Field name: mean_latency
  {
    cdr >> ros_message->mean_latency;
  }

  // Field name: min_latency
  {
    cdr >> ros_message->min_latency;
  }

  // Field name: max_latency
  {
    cdr >> ros_message->max_latency;
  }

  // Field name: minor_pagefaults
  {
    cdr >> ros_message->minor_pagefaults;
  }

  // Field name: major_pagefaults
  {
    cdr >> ros_message->major_pagefaults;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pendulum_msgs
size_t get_serialized_size_pendulum_msgs__msg__RttestResults(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RttestResults__ros_msg_type * ros_message = static_cast<const _RttestResults__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);
  // field.name command

  current_alignment += get_serialized_size_pendulum_msgs__msg__JointCommand(
    &(ros_message->command), current_alignment);
  // field.name state

  current_alignment += get_serialized_size_pendulum_msgs__msg__JointState(
    &(ros_message->state), current_alignment);
  // field.name cur_latency
  {
    size_t item_size = sizeof(ros_message->cur_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mean_latency
  {
    size_t item_size = sizeof(ros_message->mean_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_latency
  {
    size_t item_size = sizeof(ros_message->min_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_latency
  {
    size_t item_size = sizeof(ros_message->max_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name minor_pagefaults
  {
    size_t item_size = sizeof(ros_message->minor_pagefaults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name major_pagefaults
  {
    size_t item_size = sizeof(ros_message->major_pagefaults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RttestResults__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pendulum_msgs__msg__RttestResults(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pendulum_msgs
size_t max_serialized_size_pendulum_msgs__msg__RttestResults(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_pendulum_msgs__msg__JointCommand(
        full_bounded, current_alignment);
    }
  }
  // member: state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_pendulum_msgs__msg__JointState(
        full_bounded, current_alignment);
    }
  }
  // member: cur_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: mean_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: min_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: minor_pagefaults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: major_pagefaults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _RttestResults__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pendulum_msgs__msg__RttestResults(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RttestResults = {
  "pendulum_msgs::msg",
  "RttestResults",
  _RttestResults__cdr_serialize,
  _RttestResults__cdr_deserialize,
  _RttestResults__get_serialized_size,
  _RttestResults__max_serialized_size
};

static rosidl_message_type_support_t _RttestResults__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RttestResults,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, RttestResults)() {
  return &_RttestResults__type_support;
}

#if defined(__cplusplus)
}
#endif
