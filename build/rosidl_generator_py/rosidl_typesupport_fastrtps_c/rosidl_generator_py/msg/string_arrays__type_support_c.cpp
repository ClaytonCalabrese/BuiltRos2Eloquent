// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/string_arrays__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_generator_py/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_generator_py/msg/string_arrays__struct.h"
#include "rosidl_generator_py/msg/string_arrays__functions.h"
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

#include "rosidl_generator_c/string.h"  // def_string_bounded_array_value, def_string_dynamic_array_value, def_string_static_array_value, def_various_commas, def_various_quotes, string_bounded_array_value, string_dynamic_array_value, string_static_array_value, ub_string_dynamic_array_value, ub_string_static_array_value, ub_string_ub_array_value
#include "rosidl_generator_c/string_functions.h"  // def_string_bounded_array_value, def_string_dynamic_array_value, def_string_static_array_value, def_various_commas, def_various_quotes, string_bounded_array_value, string_dynamic_array_value, string_static_array_value, ub_string_dynamic_array_value, ub_string_static_array_value, ub_string_ub_array_value

// forward declare type support functions


using _StringArrays__ros_msg_type = rosidl_generator_py__msg__StringArrays;

static bool _StringArrays__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StringArrays__ros_msg_type * ros_message = static_cast<const _StringArrays__ros_msg_type *>(untyped_ros_message);
  // Field name: ub_string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->ub_string_static_array_value;
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

  // Field name: ub_string_ub_array_value
  {
    size_t size = ros_message->ub_string_ub_array_value.size;
    auto array_ptr = ros_message->ub_string_ub_array_value.data;
    if (size > 10) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
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

  // Field name: ub_string_dynamic_array_value
  {
    size_t size = ros_message->ub_string_dynamic_array_value.size;
    auto array_ptr = ros_message->ub_string_dynamic_array_value.data;
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

  // Field name: string_dynamic_array_value
  {
    size_t size = ros_message->string_dynamic_array_value.size;
    auto array_ptr = ros_message->string_dynamic_array_value.data;
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

  // Field name: string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_static_array_value;
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

  // Field name: string_bounded_array_value
  {
    size_t size = ros_message->string_bounded_array_value.size;
    auto array_ptr = ros_message->string_bounded_array_value.data;
    if (size > 10) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
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

  // Field name: def_string_dynamic_array_value
  {
    size_t size = ros_message->def_string_dynamic_array_value.size;
    auto array_ptr = ros_message->def_string_dynamic_array_value.data;
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

  // Field name: def_string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->def_string_static_array_value;
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

  // Field name: def_string_bounded_array_value
  {
    size_t size = ros_message->def_string_bounded_array_value.size;
    auto array_ptr = ros_message->def_string_bounded_array_value.data;
    if (size > 10) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
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

  // Field name: def_various_quotes
  {
    size_t size = ros_message->def_various_quotes.size;
    auto array_ptr = ros_message->def_various_quotes.data;
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

  // Field name: def_various_commas
  {
    size_t size = ros_message->def_various_commas.size;
    auto array_ptr = ros_message->def_various_commas.data;
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

  return true;
}

static bool _StringArrays__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StringArrays__ros_msg_type * ros_message = static_cast<_StringArrays__ros_msg_type *>(untyped_ros_message);
  // Field name: ub_string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->ub_string_static_array_value;
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
        fprintf(stderr, "failed to assign string into field 'ub_string_static_array_value'\n");
        return false;
      }
    }
  }

  // Field name: ub_string_ub_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ub_string_ub_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->ub_string_ub_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->ub_string_ub_array_value, size)) {
      return "failed to create array for field 'ub_string_ub_array_value'";
    }
    auto array_ptr = ros_message->ub_string_ub_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'ub_string_ub_array_value'\n");
        return false;
      }
    }
  }

  // Field name: ub_string_dynamic_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ub_string_dynamic_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->ub_string_dynamic_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->ub_string_dynamic_array_value, size)) {
      return "failed to create array for field 'ub_string_dynamic_array_value'";
    }
    auto array_ptr = ros_message->ub_string_dynamic_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'ub_string_dynamic_array_value'\n");
        return false;
      }
    }
  }

  // Field name: string_dynamic_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_dynamic_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->string_dynamic_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->string_dynamic_array_value, size)) {
      return "failed to create array for field 'string_dynamic_array_value'";
    }
    auto array_ptr = ros_message->string_dynamic_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'string_dynamic_array_value'\n");
        return false;
      }
    }
  }

  // Field name: string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->string_static_array_value;
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
        fprintf(stderr, "failed to assign string into field 'string_static_array_value'\n");
        return false;
      }
    }
  }

  // Field name: string_bounded_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->string_bounded_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->string_bounded_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->string_bounded_array_value, size)) {
      return "failed to create array for field 'string_bounded_array_value'";
    }
    auto array_ptr = ros_message->string_bounded_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'string_bounded_array_value'\n");
        return false;
      }
    }
  }

  // Field name: def_string_dynamic_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->def_string_dynamic_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->def_string_dynamic_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->def_string_dynamic_array_value, size)) {
      return "failed to create array for field 'def_string_dynamic_array_value'";
    }
    auto array_ptr = ros_message->def_string_dynamic_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'def_string_dynamic_array_value'\n");
        return false;
      }
    }
  }

  // Field name: def_string_static_array_value
  {
    size_t size = 3;
    auto array_ptr = ros_message->def_string_static_array_value;
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
        fprintf(stderr, "failed to assign string into field 'def_string_static_array_value'\n");
        return false;
      }
    }
  }

  // Field name: def_string_bounded_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->def_string_bounded_array_value.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->def_string_bounded_array_value);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->def_string_bounded_array_value, size)) {
      return "failed to create array for field 'def_string_bounded_array_value'";
    }
    auto array_ptr = ros_message->def_string_bounded_array_value.data;
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
        fprintf(stderr, "failed to assign string into field 'def_string_bounded_array_value'\n");
        return false;
      }
    }
  }

  // Field name: def_various_quotes
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->def_various_quotes.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->def_various_quotes);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->def_various_quotes, size)) {
      return "failed to create array for field 'def_various_quotes'";
    }
    auto array_ptr = ros_message->def_various_quotes.data;
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
        fprintf(stderr, "failed to assign string into field 'def_various_quotes'\n");
        return false;
      }
    }
  }

  // Field name: def_various_commas
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->def_various_commas.data) {
      rosidl_generator_c__String__Sequence__fini(&ros_message->def_various_commas);
    }
    if (!rosidl_generator_c__String__Sequence__init(&ros_message->def_various_commas, size)) {
      return "failed to create array for field 'def_various_commas'";
    }
    auto array_ptr = ros_message->def_various_commas.data;
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
        fprintf(stderr, "failed to assign string into field 'def_various_commas'\n");
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t get_serialized_size_rosidl_generator_py__msg__StringArrays(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StringArrays__ros_msg_type * ros_message = static_cast<const _StringArrays__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ub_string_static_array_value
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->ub_string_static_array_value;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name ub_string_ub_array_value
  {
    size_t array_size = ros_message->ub_string_ub_array_value.size;
    auto array_ptr = ros_message->ub_string_ub_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name ub_string_dynamic_array_value
  {
    size_t array_size = ros_message->ub_string_dynamic_array_value.size;
    auto array_ptr = ros_message->ub_string_dynamic_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name string_dynamic_array_value
  {
    size_t array_size = ros_message->string_dynamic_array_value.size;
    auto array_ptr = ros_message->string_dynamic_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name string_static_array_value
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->string_static_array_value;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name string_bounded_array_value
  {
    size_t array_size = ros_message->string_bounded_array_value.size;
    auto array_ptr = ros_message->string_bounded_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name def_string_dynamic_array_value
  {
    size_t array_size = ros_message->def_string_dynamic_array_value.size;
    auto array_ptr = ros_message->def_string_dynamic_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name def_string_static_array_value
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->def_string_static_array_value;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name def_string_bounded_array_value
  {
    size_t array_size = ros_message->def_string_bounded_array_value.size;
    auto array_ptr = ros_message->def_string_bounded_array_value.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name def_various_quotes
  {
    size_t array_size = ros_message->def_various_quotes.size;
    auto array_ptr = ros_message->def_various_quotes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name def_various_commas
  {
    size_t array_size = ros_message->def_various_commas.size;
    auto array_ptr = ros_message->def_various_commas.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StringArrays__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_generator_py__msg__StringArrays(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t max_serialized_size_rosidl_generator_py__msg__StringArrays(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: ub_string_static_array_value
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        5 +
        1;
    }
  }
  // member: ub_string_ub_array_value
  {
    size_t array_size = 10;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        5 +
        1;
    }
  }
  // member: ub_string_dynamic_array_value
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        5 +
        1;
    }
  }
  // member: string_dynamic_array_value
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
  // member: string_static_array_value
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: string_bounded_array_value
  {
    size_t array_size = 10;
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
  // member: def_string_dynamic_array_value
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
  // member: def_string_static_array_value
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: def_string_bounded_array_value
  {
    size_t array_size = 10;
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
  // member: def_various_quotes
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
  // member: def_various_commas
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

  return current_alignment - initial_alignment;
}

static size_t _StringArrays__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_generator_py__msg__StringArrays(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_StringArrays = {
  "rosidl_generator_py::msg",
  "StringArrays",
  _StringArrays__cdr_serialize,
  _StringArrays__cdr_deserialize,
  _StringArrays__get_serialized_size,
  _StringArrays__max_serialized_size
};

static rosidl_message_type_support_t _StringArrays__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StringArrays,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_generator_py, msg, StringArrays)() {
  return &_StringArrays__type_support;
}

#if defined(__cplusplus)
}
#endif
