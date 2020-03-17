// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from test_msgs:msg/UnboundedSequences.idl
// generated code does not contain a copyright notice
#include "test_msgs/msg/unbounded_sequences__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "test_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "test_msgs/msg/unbounded_sequences__struct.h"
#include "test_msgs/msg/unbounded_sequences__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // bool_values, bool_values_default, byte_values, byte_values_default, char_values, char_values_default, float32_values, float32_values_default, float64_values, float64_values_default, int16_values, int16_values_default, int32_values, int32_values_default, int64_values, int64_values_default, int8_values, int8_values_default, uint16_values, uint16_values_default, uint32_values, uint32_values_default, uint64_values, uint64_values_default, uint8_values, uint8_values_default
#include "rosidl_generator_c/primitives_sequence_functions.h"  // bool_values, bool_values_default, byte_values, byte_values_default, char_values, char_values_default, float32_values, float32_values_default, float64_values, float64_values_default, int16_values, int16_values_default, int32_values, int32_values_default, int64_values, int64_values_default, int8_values, int8_values_default, uint16_values, uint16_values_default, uint32_values, uint32_values_default, uint64_values, uint64_values_default, uint8_values, uint8_values_default
#include "rosidl_generator_c/string.h"  // string_values, string_values_default
#include "rosidl_generator_c/string_functions.h"  // string_values, string_values_default
#include "test_msgs/msg/basic_types__functions.h"  // basic_types_values
#include "test_msgs/msg/constants__functions.h"  // constants_values
#include "test_msgs/msg/defaults__functions.h"  // defaults_values

// forward declare type support functions
size_t get_serialized_size_test_msgs__msg__BasicTypes(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__BasicTypes(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes)();
size_t get_serialized_size_test_msgs__msg__Constants(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Constants(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants)();
size_t get_serialized_size_test_msgs__msg__Defaults(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_test_msgs__msg__Defaults(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults)();


using _UnboundedSequences__ros_msg_type = test_msgs__msg__UnboundedSequences;

static bool _UnboundedSequences__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _UnboundedSequences__ros_msg_type * ros_message = static_cast<const _UnboundedSequences__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_values
  {
    size_t size = ros_message->bool_values.size;
    auto array_ptr = ros_message->bool_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: byte_values
  {
    size_t size = ros_message->byte_values.size;
    auto array_ptr = ros_message->byte_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: char_values
  {
    size_t size = ros_message->char_values.size;
    auto array_ptr = ros_message->char_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32_values
  {
    size_t size = ros_message->float32_values.size;
    auto array_ptr = ros_message->float32_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float64_values
  {
    size_t size = ros_message->float64_values.size;
    auto array_ptr = ros_message->float64_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_values
  {
    size_t size = ros_message->int8_values.size;
    auto array_ptr = ros_message->int8_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_values
  {
    size_t size = ros_message->uint8_values.size;
    auto array_ptr = ros_message->uint8_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_values
  {
    size_t size = ros_message->int16_values.size;
    auto array_ptr = ros_message->int16_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16_values
  {
    size_t size = ros_message->uint16_values.size;
    auto array_ptr = ros_message->uint16_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_values
  {
    size_t size = ros_message->int32_values.size;
    auto array_ptr = ros_message->int32_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32_values
  {
    size_t size = ros_message->uint32_values.size;
    auto array_ptr = ros_message->uint32_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64_values
  {
    size_t size = ros_message->int64_values.size;
    auto array_ptr = ros_message->int64_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64_values
  {
    size_t size = ros_message->uint64_values.size;
    auto array_ptr = ros_message->uint64_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_values
  {
    size_t size = ros_message->string_values.size;
    auto array_ptr = ros_message->string_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  // Field name: basic_types_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    size_t size = ros_message->basic_types_values.size;
    auto array_ptr = ros_message->basic_types_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: constants_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants
      )()->data);
    size_t size = ros_message->constants_values.size;
    auto array_ptr = ros_message->constants_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: defaults_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults
      )()->data);
    size_t size = ros_message->defaults_values.size;
    auto array_ptr = ros_message->defaults_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: bool_values_default
  {
    size_t size = ros_message->bool_values_default.size;
    auto array_ptr = ros_message->bool_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: byte_values_default
  {
    size_t size = ros_message->byte_values_default.size;
    auto array_ptr = ros_message->byte_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: char_values_default
  {
    size_t size = ros_message->char_values_default.size;
    auto array_ptr = ros_message->char_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    size_t size = ros_message->float32_values_default.size;
    auto array_ptr = ros_message->float32_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    size_t size = ros_message->float64_values_default.size;
    auto array_ptr = ros_message->float64_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    size_t size = ros_message->int8_values_default.size;
    auto array_ptr = ros_message->int8_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    size_t size = ros_message->uint8_values_default.size;
    auto array_ptr = ros_message->uint8_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    size_t size = ros_message->int16_values_default.size;
    auto array_ptr = ros_message->int16_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    size_t size = ros_message->uint16_values_default.size;
    auto array_ptr = ros_message->uint16_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    size_t size = ros_message->int32_values_default.size;
    auto array_ptr = ros_message->int32_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    size_t size = ros_message->uint32_values_default.size;
    auto array_ptr = ros_message->uint32_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    size_t size = ros_message->int64_values_default.size;
    auto array_ptr = ros_message->int64_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    size_t size = ros_message->uint64_values_default.size;
    auto array_ptr = ros_message->uint64_values_default.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: string_values_default
  {
    size_t size = ros_message->string_values_default.size;
    auto array_ptr = ros_message->string_values_default.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__String * str = &array_ptr[i];
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
  }

  // Field name: alignment_check
  {
    cdr << ros_message->alignment_check;
  }

  return true;
}

static bool _UnboundedSequences__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _UnboundedSequences__ros_msg_type * ros_message = static_cast<_UnboundedSequences__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bool_values.data) {
      rosidl_generator_c__boolean__Sequence__fini(&ros_message->bool_values);
    }
    if (!rosidl_generator_c__boolean__Sequence__init(&ros_message->bool_values, size)) {
      return "failed to create array for field 'bool_values'";
    }
    auto array_ptr = ros_message->bool_values.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->byte_values.data) {
      rosidl_generator_c__octet__Sequence__fini(&ros_message->byte_values);
    }
    if (!rosidl_generator_c__octet__Sequence__init(&ros_message->byte_values, size)) {
      return "failed to create array for field 'byte_values'";
    }
    auto array_ptr = ros_message->byte_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: char_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->char_values.data) {
      rosidl_generator_c__uint8__Sequence__fini(&ros_message->char_values);
    }
    if (!rosidl_generator_c__uint8__Sequence__init(&ros_message->char_values, size)) {
      return "failed to create array for field 'char_values'";
    }
    auto array_ptr = ros_message->char_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float32_values.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->float32_values);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->float32_values, size)) {
      return "failed to create array for field 'float32_values'";
    }
    auto array_ptr = ros_message->float32_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float64_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float64_values.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->float64_values);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->float64_values, size)) {
      return "failed to create array for field 'float64_values'";
    }
    auto array_ptr = ros_message->float64_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int8_values.data) {
      rosidl_generator_c__int8__Sequence__fini(&ros_message->int8_values);
    }
    if (!rosidl_generator_c__int8__Sequence__init(&ros_message->int8_values, size)) {
      return "failed to create array for field 'int8_values'";
    }
    auto array_ptr = ros_message->int8_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint8_values.data) {
      rosidl_generator_c__uint8__Sequence__fini(&ros_message->uint8_values);
    }
    if (!rosidl_generator_c__uint8__Sequence__init(&ros_message->uint8_values, size)) {
      return "failed to create array for field 'uint8_values'";
    }
    auto array_ptr = ros_message->uint8_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int16_values.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->int16_values);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->int16_values, size)) {
      return "failed to create array for field 'int16_values'";
    }
    auto array_ptr = ros_message->int16_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint16_values.data) {
      rosidl_generator_c__uint16__Sequence__fini(&ros_message->uint16_values);
    }
    if (!rosidl_generator_c__uint16__Sequence__init(&ros_message->uint16_values, size)) {
      return "failed to create array for field 'uint16_values'";
    }
    auto array_ptr = ros_message->uint16_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int32_values.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->int32_values);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->int32_values, size)) {
      return "failed to create array for field 'int32_values'";
    }
    auto array_ptr = ros_message->int32_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint32_values.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->uint32_values);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->uint32_values, size)) {
      return "failed to create array for field 'uint32_values'";
    }
    auto array_ptr = ros_message->uint32_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int64_values.data) {
      rosidl_generator_c__int64__Sequence__fini(&ros_message->int64_values);
    }
    if (!rosidl_generator_c__int64__Sequence__init(&ros_message->int64_values, size)) {
      return "failed to create array for field 'int64_values'";
    }
    auto array_ptr = ros_message->int64_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint64_values.data) {
      rosidl_generator_c__uint64__Sequence__fini(&ros_message->uint64_values);
    }
    if (!rosidl_generator_c__uint64__Sequence__init(&ros_message->uint64_values, size)) {
      return "failed to create array for field 'uint64_values'";
    }
    auto array_ptr = ros_message->uint64_values.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_values.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->string_values);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->string_values, size)) {
      return "failed to create array for field 'string_values'";
    }
    auto array_ptr = ros_message->string_values.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values'\n");
        return false;
      }
    }
  }

  // Field name: basic_types_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, BasicTypes
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->basic_types_values.data) {
      test_msgs__msg__BasicTypes__Sequence__fini(&ros_message->basic_types_values);
    }
    if (!test_msgs__msg__BasicTypes__Sequence__init(&ros_message->basic_types_values, size)) {
      return "failed to create array for field 'basic_types_values'";
    }
    auto array_ptr = ros_message->basic_types_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: constants_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Constants
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->constants_values.data) {
      test_msgs__msg__Constants__Sequence__fini(&ros_message->constants_values);
    }
    if (!test_msgs__msg__Constants__Sequence__init(&ros_message->constants_values, size)) {
      return "failed to create array for field 'constants_values'";
    }
    auto array_ptr = ros_message->constants_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: defaults_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, Defaults
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->defaults_values.data) {
      test_msgs__msg__Defaults__Sequence__fini(&ros_message->defaults_values);
    }
    if (!test_msgs__msg__Defaults__Sequence__init(&ros_message->defaults_values, size)) {
      return "failed to create array for field 'defaults_values'";
    }
    auto array_ptr = ros_message->defaults_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: bool_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bool_values_default.data) {
      rosidl_generator_c__boolean__Sequence__fini(&ros_message->bool_values_default);
    }
    if (!rosidl_generator_c__boolean__Sequence__init(&ros_message->bool_values_default, size)) {
      return "failed to create array for field 'bool_values_default'";
    }
    auto array_ptr = ros_message->bool_values_default.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: byte_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->byte_values_default.data) {
      rosidl_generator_c__octet__Sequence__fini(&ros_message->byte_values_default);
    }
    if (!rosidl_generator_c__octet__Sequence__init(&ros_message->byte_values_default, size)) {
      return "failed to create array for field 'byte_values_default'";
    }
    auto array_ptr = ros_message->byte_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: char_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->char_values_default.data) {
      rosidl_generator_c__uint8__Sequence__fini(&ros_message->char_values_default);
    }
    if (!rosidl_generator_c__uint8__Sequence__init(&ros_message->char_values_default, size)) {
      return "failed to create array for field 'char_values_default'";
    }
    auto array_ptr = ros_message->char_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float32_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float32_values_default.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->float32_values_default);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->float32_values_default, size)) {
      return "failed to create array for field 'float32_values_default'";
    }
    auto array_ptr = ros_message->float32_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: float64_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->float64_values_default.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->float64_values_default);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->float64_values_default, size)) {
      return "failed to create array for field 'float64_values_default'";
    }
    auto array_ptr = ros_message->float64_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int8_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int8_values_default.data) {
      rosidl_generator_c__int8__Sequence__fini(&ros_message->int8_values_default);
    }
    if (!rosidl_generator_c__int8__Sequence__init(&ros_message->int8_values_default, size)) {
      return "failed to create array for field 'int8_values_default'";
    }
    auto array_ptr = ros_message->int8_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint8_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint8_values_default.data) {
      rosidl_generator_c__uint8__Sequence__fini(&ros_message->uint8_values_default);
    }
    if (!rosidl_generator_c__uint8__Sequence__init(&ros_message->uint8_values_default, size)) {
      return "failed to create array for field 'uint8_values_default'";
    }
    auto array_ptr = ros_message->uint8_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int16_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int16_values_default.data) {
      rosidl_generator_c__int16__Sequence__fini(&ros_message->int16_values_default);
    }
    if (!rosidl_generator_c__int16__Sequence__init(&ros_message->int16_values_default, size)) {
      return "failed to create array for field 'int16_values_default'";
    }
    auto array_ptr = ros_message->int16_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint16_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint16_values_default.data) {
      rosidl_generator_c__uint16__Sequence__fini(&ros_message->uint16_values_default);
    }
    if (!rosidl_generator_c__uint16__Sequence__init(&ros_message->uint16_values_default, size)) {
      return "failed to create array for field 'uint16_values_default'";
    }
    auto array_ptr = ros_message->uint16_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int32_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int32_values_default.data) {
      rosidl_generator_c__int32__Sequence__fini(&ros_message->int32_values_default);
    }
    if (!rosidl_generator_c__int32__Sequence__init(&ros_message->int32_values_default, size)) {
      return "failed to create array for field 'int32_values_default'";
    }
    auto array_ptr = ros_message->int32_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint32_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint32_values_default.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->uint32_values_default);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->uint32_values_default, size)) {
      return "failed to create array for field 'uint32_values_default'";
    }
    auto array_ptr = ros_message->uint32_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: int64_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->int64_values_default.data) {
      rosidl_generator_c__int64__Sequence__fini(&ros_message->int64_values_default);
    }
    if (!rosidl_generator_c__int64__Sequence__init(&ros_message->int64_values_default, size)) {
      return "failed to create array for field 'int64_values_default'";
    }
    auto array_ptr = ros_message->int64_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: uint64_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->uint64_values_default.data) {
      rosidl_generator_c__uint64__Sequence__fini(&ros_message->uint64_values_default);
    }
    if (!rosidl_generator_c__uint64__Sequence__init(&ros_message->uint64_values_default, size)) {
      return "failed to create array for field 'uint64_values_default'";
    }
    auto array_ptr = ros_message->uint64_values_default.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: string_values_default
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_values_default.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->string_values_default);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->string_values_default, size)) {
      return "failed to create array for field 'string_values_default'";
    }
    auto array_ptr = ros_message->string_values_default.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_generator_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'string_values_default'\n");
        return false;
      }
    }
  }

  // Field name: alignment_check
  {
    cdr >> ros_message->alignment_check;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t get_serialized_size_test_msgs__msg__UnboundedSequences(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UnboundedSequences__ros_msg_type * ros_message = static_cast<const _UnboundedSequences__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_values
  {
    size_t array_size = ros_message->bool_values.size;
    auto array_ptr = ros_message->bool_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_values
  {
    size_t array_size = ros_message->byte_values.size;
    auto array_ptr = ros_message->byte_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_values
  {
    size_t array_size = ros_message->char_values.size;
    auto array_ptr = ros_message->char_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_values
  {
    size_t array_size = ros_message->float32_values.size;
    auto array_ptr = ros_message->float32_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_values
  {
    size_t array_size = ros_message->float64_values.size;
    auto array_ptr = ros_message->float64_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_values
  {
    size_t array_size = ros_message->int8_values.size;
    auto array_ptr = ros_message->int8_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_values
  {
    size_t array_size = ros_message->uint8_values.size;
    auto array_ptr = ros_message->uint8_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_values
  {
    size_t array_size = ros_message->int16_values.size;
    auto array_ptr = ros_message->int16_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_values
  {
    size_t array_size = ros_message->uint16_values.size;
    auto array_ptr = ros_message->uint16_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_values
  {
    size_t array_size = ros_message->int32_values.size;
    auto array_ptr = ros_message->int32_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_values
  {
    size_t array_size = ros_message->uint32_values.size;
    auto array_ptr = ros_message->uint32_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_values
  {
    size_t array_size = ros_message->int64_values.size;
    auto array_ptr = ros_message->int64_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_values
  {
    size_t array_size = ros_message->uint64_values.size;
    auto array_ptr = ros_message->uint64_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_values
  {
    size_t array_size = ros_message->string_values.size;
    auto array_ptr = ros_message->string_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name basic_types_values
  {
    size_t array_size = ros_message->basic_types_values.size;
    auto array_ptr = ros_message->basic_types_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__BasicTypes(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name constants_values
  {
    size_t array_size = ros_message->constants_values.size;
    auto array_ptr = ros_message->constants_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Constants(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name defaults_values
  {
    size_t array_size = ros_message->defaults_values.size;
    auto array_ptr = ros_message->defaults_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_test_msgs__msg__Defaults(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name bool_values_default
  {
    size_t array_size = ros_message->bool_values_default.size;
    auto array_ptr = ros_message->bool_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name byte_values_default
  {
    size_t array_size = ros_message->byte_values_default.size;
    auto array_ptr = ros_message->byte_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name char_values_default
  {
    size_t array_size = ros_message->char_values_default.size;
    auto array_ptr = ros_message->char_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float32_values_default
  {
    size_t array_size = ros_message->float32_values_default.size;
    auto array_ptr = ros_message->float32_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float64_values_default
  {
    size_t array_size = ros_message->float64_values_default.size;
    auto array_ptr = ros_message->float64_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int8_values_default
  {
    size_t array_size = ros_message->int8_values_default.size;
    auto array_ptr = ros_message->int8_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint8_values_default
  {
    size_t array_size = ros_message->uint8_values_default.size;
    auto array_ptr = ros_message->uint8_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int16_values_default
  {
    size_t array_size = ros_message->int16_values_default.size;
    auto array_ptr = ros_message->int16_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint16_values_default
  {
    size_t array_size = ros_message->uint16_values_default.size;
    auto array_ptr = ros_message->uint16_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int32_values_default
  {
    size_t array_size = ros_message->int32_values_default.size;
    auto array_ptr = ros_message->int32_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint32_values_default
  {
    size_t array_size = ros_message->uint32_values_default.size;
    auto array_ptr = ros_message->uint32_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name int64_values_default
  {
    size_t array_size = ros_message->int64_values_default.size;
    auto array_ptr = ros_message->int64_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uint64_values_default
  {
    size_t array_size = ros_message->uint64_values_default.size;
    auto array_ptr = ros_message->uint64_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name string_values_default
  {
    size_t array_size = ros_message->string_values_default.size;
    auto array_ptr = ros_message->string_values_default.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name alignment_check
  {
    size_t item_size = sizeof(ros_message->alignment_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _UnboundedSequences__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_test_msgs__msg__UnboundedSequences(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_test_msgs
size_t max_serialized_size_test_msgs__msg__UnboundedSequences(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: bool_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: basic_types_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__BasicTypes(
        full_bounded, current_alignment);
    }
  }
  // member: constants_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__Constants(
        full_bounded, current_alignment);
    }
  }
  // member: defaults_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_test_msgs__msg__Defaults(
        full_bounded, current_alignment);
    }
  }
  // member: bool_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: byte_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: char_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float32_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: float64_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: int8_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: uint8_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: int16_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: uint16_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: int32_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: uint32_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: int64_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uint64_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: string_values_default
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: alignment_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _UnboundedSequences__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_test_msgs__msg__UnboundedSequences(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_UnboundedSequences = {
  "test_msgs::msg",
  "UnboundedSequences",
  _UnboundedSequences__cdr_serialize,
  _UnboundedSequences__cdr_deserialize,
  _UnboundedSequences__get_serialized_size,
  _UnboundedSequences__max_serialized_size
};

static rosidl_message_type_support_t _UnboundedSequences__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UnboundedSequences,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, test_msgs, msg, UnboundedSequences)() {
  return &_UnboundedSequences__type_support;
}

#if defined(__cplusplus)
}
#endif
