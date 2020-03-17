// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice
#include "pendulum_msgs/msg/rttest_results__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pendulum_msgs/msg/rttest_results__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace pendulum_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pendulum_msgs::msg::JointCommand &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pendulum_msgs::msg::JointCommand &);
size_t get_serialized_size(
  const pendulum_msgs::msg::JointCommand &,
  size_t current_alignment);
size_t
max_serialized_size_JointCommand(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pendulum_msgs

namespace pendulum_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pendulum_msgs::msg::JointState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pendulum_msgs::msg::JointState &);
size_t get_serialized_size(
  const pendulum_msgs::msg::JointState &,
  size_t current_alignment);
size_t
max_serialized_size_JointState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pendulum_msgs


namespace pendulum_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pendulum_msgs
cdr_serialize(
  const pendulum_msgs::msg::RttestResults & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: command
  pendulum_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.command,
    cdr);
  // Member: state
  pendulum_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.state,
    cdr);
  // Member: cur_latency
  cdr << ros_message.cur_latency;
  // Member: mean_latency
  cdr << ros_message.mean_latency;
  // Member: min_latency
  cdr << ros_message.min_latency;
  // Member: max_latency
  cdr << ros_message.max_latency;
  // Member: minor_pagefaults
  cdr << ros_message.minor_pagefaults;
  // Member: major_pagefaults
  cdr << ros_message.major_pagefaults;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pendulum_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pendulum_msgs::msg::RttestResults & ros_message)
{
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: command
  pendulum_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.command);

  // Member: state
  pendulum_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.state);

  // Member: cur_latency
  cdr >> ros_message.cur_latency;

  // Member: mean_latency
  cdr >> ros_message.mean_latency;

  // Member: min_latency
  cdr >> ros_message.min_latency;

  // Member: max_latency
  cdr >> ros_message.max_latency;

  // Member: minor_pagefaults
  cdr >> ros_message.minor_pagefaults;

  // Member: major_pagefaults
  cdr >> ros_message.major_pagefaults;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pendulum_msgs
get_serialized_size(
  const pendulum_msgs::msg::RttestResults & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: command

  current_alignment +=
    pendulum_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.command, current_alignment);
  // Member: state

  current_alignment +=
    pendulum_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.state, current_alignment);
  // Member: cur_latency
  {
    size_t item_size = sizeof(ros_message.cur_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mean_latency
  {
    size_t item_size = sizeof(ros_message.mean_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: min_latency
  {
    size_t item_size = sizeof(ros_message.min_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_latency
  {
    size_t item_size = sizeof(ros_message.max_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: minor_pagefaults
  {
    size_t item_size = sizeof(ros_message.minor_pagefaults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: major_pagefaults
  {
    size_t item_size = sizeof(ros_message.major_pagefaults);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pendulum_msgs
max_serialized_size_RttestResults(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: command
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        pendulum_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointCommand(
        full_bounded, current_alignment);
    }
  }

  // Member: state
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        pendulum_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JointState(
        full_bounded, current_alignment);
    }
  }

  // Member: cur_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: mean_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: min_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_latency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: minor_pagefaults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: major_pagefaults
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RttestResults__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RttestResults__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RttestResults__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pendulum_msgs::msg::RttestResults *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RttestResults__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RttestResults(full_bounded, 0);
}

static message_type_support_callbacks_t _RttestResults__callbacks = {
  "pendulum_msgs::msg",
  "RttestResults",
  _RttestResults__cdr_serialize,
  _RttestResults__cdr_deserialize,
  _RttestResults__get_serialized_size,
  _RttestResults__max_serialized_size
};

static rosidl_message_type_support_t _RttestResults__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RttestResults__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pendulum_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pendulum_msgs::msg::RttestResults>()
{
  return &pendulum_msgs::msg::typesupport_fastrtps_cpp::_RttestResults__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pendulum_msgs, msg, RttestResults)() {
  return &pendulum_msgs::msg::typesupport_fastrtps_cpp::_RttestResults__handle;
}

#ifdef __cplusplus
}
#endif
