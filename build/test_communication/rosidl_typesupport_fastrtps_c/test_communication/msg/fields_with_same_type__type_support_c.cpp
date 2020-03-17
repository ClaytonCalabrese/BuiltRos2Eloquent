// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice
#include "test_communication/msg/fields_with_same_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_communication/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_communication/msg/fields_with_same_type__struct.h"
#include "test_communication/msg/fields_with_same_type__functions.h"
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

#include "test_msgs/msg/basic_types__functions.h"  // basic_types_values1, basic_types_values2

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_communication
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_communication
size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_test_communication
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();


using _FieldsWithSameType__ros_msg_type = test_communication__msg__FieldsWithSameType;

static bool _FieldsWithSameType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FieldsWithSameType__ros_msg_type * ros_message = static_cast<const _FieldsWithSameType__ros_msg_type *>(untyped_ros_message);
  // Field name: basic_types_values1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->basic_types_values1, cdr))
    {
      return false;
    }
  }

  // Field name: basic_types_values2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->basic_types_values2, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FieldsWithSameType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FieldsWithSameType__ros_msg_type * ros_message = static_cast<_FieldsWithSameType__ros_msg_type *>(untyped_ros_message);
  // Field name: basic_types_values1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->basic_types_values1))
    {
      return false;
    }
  }

  // Field name: basic_types_values2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->basic_types_values2))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_communication
size_t get_serialized_size_test_communication__msg__FieldsWithSameType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FieldsWithSameType__ros_msg_type * ros_message = static_cast<const _FieldsWithSameType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name basic_types_values1

  current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
    &(ros_message->basic_types_values1), current_alignment);
  // field.name basic_types_values2

  current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
    &(ros_message->basic_types_values2), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FieldsWithSameType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_communication__msg__FieldsWithSameType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_communication
size_t max_serialized_size_test_communication__msg__FieldsWithSameType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: basic_types_values1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BasicTypes(
        full_bounded, current_alignment);
    }
  }
  // member: basic_types_values2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BasicTypes(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FieldsWithSameType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_test_communication__msg__FieldsWithSameType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FieldsWithSameType = {
  "test_communication::msg",
  "FieldsWithSameType",
  _FieldsWithSameType__cdr_serialize,
  _FieldsWithSameType__cdr_deserialize,
  _FieldsWithSameType__get_serialized_size,
  _FieldsWithSameType__max_serialized_size
};

static rosidl_message_type_support_t _FieldsWithSameType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FieldsWithSameType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_communication, msg, FieldsWithSameType)() {
  return &_FieldsWithSameType__type_support;
}

#if defined(__cplusplus)
}
#endif
