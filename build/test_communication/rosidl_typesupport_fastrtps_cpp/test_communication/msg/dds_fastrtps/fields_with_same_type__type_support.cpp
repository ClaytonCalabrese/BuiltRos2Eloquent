// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice
#include "test_communication/msg/fields_with_same_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_communication/msg/fields_with_same_type__struct.hpp"

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
namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::BasicTypes &);
size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);
size_t
max_serialized_size_BasicTypes(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs

namespace test_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const test_msgs::msg::BasicTypes &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  test_msgs::msg::BasicTypes &);
size_t get_serialized_size(
  const test_msgs::msg::BasicTypes &,
  size_t current_alignment);
size_t
max_serialized_size_BasicTypes(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace test_msgs


namespace test_communication
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_communication
cdr_serialize(
  const test_communication::msg::FieldsWithSameType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: basic_types_values1
  test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.basic_types_values1,
    cdr);
  // Member: basic_types_values2
  test_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.basic_types_values2,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_communication
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_communication::msg::FieldsWithSameType & ros_message)
{
  // Member: basic_types_values1
  test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.basic_types_values1);

  // Member: basic_types_values2
  test_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.basic_types_values2);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_communication
get_serialized_size(
  const test_communication::msg::FieldsWithSameType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: basic_types_values1

  current_alignment +=
    test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.basic_types_values1, current_alignment);
  // Member: basic_types_values2

  current_alignment +=
    test_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.basic_types_values2, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_communication
max_serialized_size_FieldsWithSameType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: basic_types_values1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BasicTypes(
        full_bounded, current_alignment);
    }
  }

  // Member: basic_types_values2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        test_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_BasicTypes(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FieldsWithSameType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_communication::msg::FieldsWithSameType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FieldsWithSameType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_communication::msg::FieldsWithSameType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FieldsWithSameType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_communication::msg::FieldsWithSameType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FieldsWithSameType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FieldsWithSameType(full_bounded, 0);
}

static message_type_support_callbacks_t _FieldsWithSameType__callbacks = {
  "test_communication::msg",
  "FieldsWithSameType",
  _FieldsWithSameType__cdr_serialize,
  _FieldsWithSameType__cdr_deserialize,
  _FieldsWithSameType__get_serialized_size,
  _FieldsWithSameType__max_serialized_size
};

static rosidl_message_type_support_t _FieldsWithSameType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FieldsWithSameType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace test_communication

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_communication
const rosidl_message_type_support_t *
get_message_type_support_handle<test_communication::msg::FieldsWithSameType>()
{
  return &test_communication::msg::typesupport_fastrtps_cpp::_FieldsWithSameType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_communication, msg, FieldsWithSameType)() {
  return &test_communication::msg::typesupport_fastrtps_cpp::_FieldsWithSameType__handle;
}

#ifdef __cplusplus
}
#endif
