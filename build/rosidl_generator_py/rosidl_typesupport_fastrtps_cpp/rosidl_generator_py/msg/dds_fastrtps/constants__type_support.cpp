// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_generator_py:msg/Constants.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/constants__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosidl_generator_py/msg/constants__struct.hpp"

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

namespace rosidl_generator_py
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
cdr_serialize(
  const rosidl_generator_py::msg::Constants & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_generator_py::msg::Constants & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
get_serialized_size(
  const rosidl_generator_py::msg::Constants & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
max_serialized_size_Constants(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Constants__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosidl_generator_py::msg::Constants *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Constants__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_generator_py::msg::Constants *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Constants__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_generator_py::msg::Constants *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Constants__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Constants(full_bounded, 0);
}

static message_type_support_callbacks_t _Constants__callbacks = {
  "rosidl_generator_py::msg",
  "Constants",
  _Constants__cdr_serialize,
  _Constants__cdr_deserialize,
  _Constants__get_serialized_size,
  _Constants__max_serialized_size
};

static rosidl_message_type_support_t _Constants__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Constants__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rosidl_generator_py

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rosidl_generator_py
const rosidl_message_type_support_t *
get_message_type_support_handle<rosidl_generator_py::msg::Constants>()
{
  return &rosidl_generator_py::msg::typesupport_fastrtps_cpp::_Constants__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosidl_generator_py, msg, Constants)() {
  return &rosidl_generator_py::msg::typesupport_fastrtps_cpp::_Constants__handle;
}

#ifdef __cplusplus
}
#endif
