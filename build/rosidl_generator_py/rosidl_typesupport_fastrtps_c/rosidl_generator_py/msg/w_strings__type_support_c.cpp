// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rosidl_generator_py:msg/WStrings.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/w_strings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_generator_py/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rosidl_generator_py/msg/w_strings__struct.h"
#include "rosidl_generator_py/msg/w_strings__functions.h"
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

#include "rosidl_generator_c/u16string.h"  // array_of_wstrings, bounded_sequence_of_wstrings, unbounded_sequence_of_wstrings, wstring_value, wstring_value_default1, wstring_value_default2, wstring_value_default3
#include "rosidl_generator_c/u16string_functions.h"  // array_of_wstrings, bounded_sequence_of_wstrings, unbounded_sequence_of_wstrings, wstring_value, wstring_value_default1, wstring_value_default2, wstring_value_default3

// forward declare type support functions


using _WStrings__ros_msg_type = rosidl_generator_py__msg__WStrings;

static bool _WStrings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WStrings__ros_msg_type * ros_message = static_cast<const _WStrings__ros_msg_type *>(untyped_ros_message);
  // Field name: wstring_value
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->wstring_value, wstr);
    cdr << wstr;
  }

  // Field name: wstring_value_default1
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->wstring_value_default1, wstr);
    cdr << wstr;
  }

  // Field name: wstring_value_default2
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->wstring_value_default2, wstr);
    cdr << wstr;
  }

  // Field name: wstring_value_default3
  {
    std::wstring wstr;
    rosidl_typesupport_fastrtps_c::u16string_to_wstring(ros_message->wstring_value_default3, wstr);
    cdr << wstr;
  }

  // Field name: array_of_wstrings
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_wstrings;
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__U16String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != u'\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      rosidl_typesupport_fastrtps_c::u16string_to_wstring(*str, wstr);
      cdr << wstr;
    }
  }

  // Field name: bounded_sequence_of_wstrings
  {
    size_t size = ros_message->bounded_sequence_of_wstrings.size;
    auto array_ptr = ros_message->bounded_sequence_of_wstrings.data;
    if (size > 3) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__U16String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != u'\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      rosidl_typesupport_fastrtps_c::u16string_to_wstring(*str, wstr);
      cdr << wstr;
    }
  }

  // Field name: unbounded_sequence_of_wstrings
  {
    size_t size = ros_message->unbounded_sequence_of_wstrings.size;
    auto array_ptr = ros_message->unbounded_sequence_of_wstrings.data;
    cdr << static_cast<uint32_t>(size);
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      const rosidl_generator_c__U16String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != u'\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      rosidl_typesupport_fastrtps_c::u16string_to_wstring(*str, wstr);
      cdr << wstr;
    }
  }

  return true;
}

static bool _WStrings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WStrings__ros_msg_type * ros_message = static_cast<_WStrings__ros_msg_type *>(untyped_ros_message);
  // Field name: wstring_value
  {
    if (!ros_message->wstring_value.data) {
      rosidl_generator_c__U16String__init(&ros_message->wstring_value);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->wstring_value);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_generator_c__U16String__fini(&ros_message->wstring_value);
      return false;
    }
  }

  // Field name: wstring_value_default1
  {
    if (!ros_message->wstring_value_default1.data) {
      rosidl_generator_c__U16String__init(&ros_message->wstring_value_default1);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->wstring_value_default1);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_generator_c__U16String__fini(&ros_message->wstring_value_default1);
      return false;
    }
  }

  // Field name: wstring_value_default2
  {
    if (!ros_message->wstring_value_default2.data) {
      rosidl_generator_c__U16String__init(&ros_message->wstring_value_default2);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->wstring_value_default2);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_generator_c__U16String__fini(&ros_message->wstring_value_default2);
      return false;
    }
  }

  // Field name: wstring_value_default3
  {
    if (!ros_message->wstring_value_default3.data) {
      rosidl_generator_c__U16String__init(&ros_message->wstring_value_default3);
    }
    std::wstring wstr;
    cdr >> wstr;
    bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_message->wstring_value_default3);
    if (!succeeded) {
      fprintf(stderr, "failed to create wstring from u16string\n");
      rosidl_generator_c__U16String__fini(&ros_message->wstring_value_default3);
      return false;
    }
  }

  // Field name: array_of_wstrings
  {
    size_t size = 3;
    auto array_ptr = ros_message->array_of_wstrings;
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__U16String__init(&ros_i);
      }
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_i);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        rosidl_generator_c__U16String__fini(&ros_i);
        return false;
      }
    }
  }

  // Field name: bounded_sequence_of_wstrings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->bounded_sequence_of_wstrings.data) {
      rosidl_generator_c__U16String__Sequence__fini(&ros_message->bounded_sequence_of_wstrings);
    }
    if (!rosidl_generator_c__U16String__Sequence__init(&ros_message->bounded_sequence_of_wstrings, size)) {
      return "failed to create array for field 'bounded_sequence_of_wstrings'";
    }
    auto array_ptr = ros_message->bounded_sequence_of_wstrings.data;
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__U16String__init(&ros_i);
      }
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_i);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        rosidl_generator_c__U16String__fini(&ros_i);
        return false;
      }
    }
  }

  // Field name: unbounded_sequence_of_wstrings
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->unbounded_sequence_of_wstrings.data) {
      rosidl_generator_c__U16String__Sequence__fini(&ros_message->unbounded_sequence_of_wstrings);
    }
    if (!rosidl_generator_c__U16String__Sequence__init(&ros_message->unbounded_sequence_of_wstrings, size)) {
      return "failed to create array for field 'unbounded_sequence_of_wstrings'";
    }
    auto array_ptr = ros_message->unbounded_sequence_of_wstrings.data;
    std::wstring wstr;
    for (size_t i = 0; i < size; ++i) {
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_generator_c__U16String__init(&ros_i);
      }
      cdr >> wstr;
      bool succeeded = rosidl_typesupport_fastrtps_c::wstring_to_u16string(wstr, ros_i);
      if (!succeeded) {
        fprintf(stderr, "failed to create wstring from u16string\n");
        rosidl_generator_c__U16String__fini(&ros_i);
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t get_serialized_size_rosidl_generator_py__msg__WStrings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WStrings__ros_msg_type * ros_message = static_cast<const _WStrings__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wstring_value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_value.size + 1);
  // field.name wstring_value_default1
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_value_default1.size + 1);
  // field.name wstring_value_default2
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_value_default2.size + 1);
  // field.name wstring_value_default3
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    wchar_size *
    (ros_message->wstring_value_default3.size + 1);
  // field.name array_of_wstrings
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->array_of_wstrings;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (array_ptr[index].size + 1);
    }
  }
  // field.name bounded_sequence_of_wstrings
  {
    size_t array_size = ros_message->bounded_sequence_of_wstrings.size;
    auto array_ptr = ros_message->bounded_sequence_of_wstrings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (array_ptr[index].size + 1);
    }
  }
  // field.name unbounded_sequence_of_wstrings
  {
    size_t array_size = ros_message->unbounded_sequence_of_wstrings.size;
    auto array_ptr = ros_message->unbounded_sequence_of_wstrings.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WStrings__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rosidl_generator_py__msg__WStrings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rosidl_generator_py
size_t max_serialized_size_rosidl_generator_py__msg__WStrings(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: wstring_value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: wstring_value_default1
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: wstring_value_default2
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: wstring_value_default3
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: array_of_wstrings
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: bounded_sequence_of_wstrings
  {
    size_t array_size = 3;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }
  // member: unbounded_sequence_of_wstrings
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        wchar_size *
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _WStrings__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_rosidl_generator_py__msg__WStrings(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_WStrings = {
  "rosidl_generator_py::msg",
  "WStrings",
  _WStrings__cdr_serialize,
  _WStrings__cdr_deserialize,
  _WStrings__get_serialized_size,
  _WStrings__max_serialized_size
};

static rosidl_message_type_support_t _WStrings__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WStrings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rosidl_generator_py, msg, WStrings)() {
  return &_WStrings__type_support;
}

#if defined(__cplusplus)
}
#endif
