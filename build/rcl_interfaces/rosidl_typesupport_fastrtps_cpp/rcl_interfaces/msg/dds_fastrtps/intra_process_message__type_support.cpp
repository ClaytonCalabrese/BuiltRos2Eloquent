// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rcl_interfaces:msg/IntraProcessMessage.idl
// generated code does not contain a copyright notice
#include "rcl_interfaces/msg/intra_process_message__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rcl_interfaces/msg/intra_process_message__struct.hpp"

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

namespace rcl_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rcl_interfaces
cdr_serialize(
  const rcl_interfaces::msg::IntraProcessMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: publisher_id
  cdr << ros_message.publisher_id;
  // Member: message_sequence
  cdr << ros_message.message_sequence;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rcl_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rcl_interfaces::msg::IntraProcessMessage & ros_message)
{
  // Member: publisher_id
  cdr >> ros_message.publisher_id;

  // Member: message_sequence
  cdr >> ros_message.message_sequence;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rcl_interfaces
get_serialized_size(
  const rcl_interfaces::msg::IntraProcessMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: publisher_id
  {
    size_t item_size = sizeof(ros_message.publisher_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message_sequence
  {
    size_t item_size = sizeof(ros_message.message_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rcl_interfaces
max_serialized_size_IntraProcessMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: publisher_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: message_sequence
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _IntraProcessMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::IntraProcessMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IntraProcessMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rcl_interfaces::msg::IntraProcessMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IntraProcessMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rcl_interfaces::msg::IntraProcessMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IntraProcessMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IntraProcessMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _IntraProcessMessage__callbacks = {
  "rcl_interfaces::msg",
  "IntraProcessMessage",
  _IntraProcessMessage__cdr_serialize,
  _IntraProcessMessage__cdr_deserialize,
  _IntraProcessMessage__get_serialized_size,
  _IntraProcessMessage__max_serialized_size
};

static rosidl_message_type_support_t _IntraProcessMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IntraProcessMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rcl_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rcl_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rcl_interfaces::msg::IntraProcessMessage>()
{
  return &rcl_interfaces::msg::typesupport_fastrtps_cpp::_IntraProcessMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rcl_interfaces, msg, IntraProcessMessage)() {
  return &rcl_interfaces::msg::typesupport_fastrtps_cpp::_IntraProcessMessage__handle;
}

#ifdef __cplusplus
}
#endif
