// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice
#include "rosidl_generator_py/msg/string_arrays__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rosidl_generator_py/msg/string_arrays__struct.hpp"

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
  const rosidl_generator_py::msg::StringArrays & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ub_string_static_array_value
  {
    cdr << ros_message.ub_string_static_array_value;
  }
  // Member: ub_string_ub_array_value
  {
    size_t size = ros_message.ub_string_ub_array_value.size();
    if (size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.ub_string_ub_array_value[i];
    }
  }
  // Member: ub_string_dynamic_array_value
  {
    cdr << ros_message.ub_string_dynamic_array_value;
  }
  // Member: string_dynamic_array_value
  {
    cdr << ros_message.string_dynamic_array_value;
  }
  // Member: string_static_array_value
  {
    cdr << ros_message.string_static_array_value;
  }
  // Member: string_bounded_array_value
  {
    size_t size = ros_message.string_bounded_array_value.size();
    if (size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.string_bounded_array_value[i];
    }
  }
  // Member: def_string_dynamic_array_value
  {
    cdr << ros_message.def_string_dynamic_array_value;
  }
  // Member: def_string_static_array_value
  {
    cdr << ros_message.def_string_static_array_value;
  }
  // Member: def_string_bounded_array_value
  {
    size_t size = ros_message.def_string_bounded_array_value.size();
    if (size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cdr << ros_message.def_string_bounded_array_value[i];
    }
  }
  // Member: def_various_quotes
  {
    cdr << ros_message.def_various_quotes;
  }
  // Member: def_various_commas
  {
    cdr << ros_message.def_various_commas;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rosidl_generator_py::msg::StringArrays & ros_message)
{
  // Member: ub_string_static_array_value
  {
    cdr >> ros_message.ub_string_static_array_value;
  }

  // Member: ub_string_ub_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.ub_string_ub_array_value.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.ub_string_ub_array_value[i];
    }
  }

  // Member: ub_string_dynamic_array_value
  {
    cdr >> ros_message.ub_string_dynamic_array_value;
  }

  // Member: string_dynamic_array_value
  {
    cdr >> ros_message.string_dynamic_array_value;
  }

  // Member: string_static_array_value
  {
    cdr >> ros_message.string_static_array_value;
  }

  // Member: string_bounded_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.string_bounded_array_value.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.string_bounded_array_value[i];
    }
  }

  // Member: def_string_dynamic_array_value
  {
    cdr >> ros_message.def_string_dynamic_array_value;
  }

  // Member: def_string_static_array_value
  {
    cdr >> ros_message.def_string_static_array_value;
  }

  // Member: def_string_bounded_array_value
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.def_string_bounded_array_value.resize(size);
    for (size_t i = 0; i < size; i++) {
      cdr >> ros_message.def_string_bounded_array_value[i];
    }
  }

  // Member: def_various_quotes
  {
    cdr >> ros_message.def_various_quotes;
  }

  // Member: def_various_commas
  {
    cdr >> ros_message.def_various_commas;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
get_serialized_size(
  const rosidl_generator_py::msg::StringArrays & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ub_string_static_array_value
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.ub_string_static_array_value[index].size() + 1);
    }
  }
  // Member: ub_string_ub_array_value
  {
    size_t array_size = ros_message.ub_string_ub_array_value.size();
    if (array_size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.ub_string_ub_array_value[index].size() + 1);
    }
  }
  // Member: ub_string_dynamic_array_value
  {
    size_t array_size = ros_message.ub_string_dynamic_array_value.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.ub_string_dynamic_array_value[index].size() + 1);
    }
  }
  // Member: string_dynamic_array_value
  {
    size_t array_size = ros_message.string_dynamic_array_value.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_dynamic_array_value[index].size() + 1);
    }
  }
  // Member: string_static_array_value
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_static_array_value[index].size() + 1);
    }
  }
  // Member: string_bounded_array_value
  {
    size_t array_size = ros_message.string_bounded_array_value.size();
    if (array_size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.string_bounded_array_value[index].size() + 1);
    }
  }
  // Member: def_string_dynamic_array_value
  {
    size_t array_size = ros_message.def_string_dynamic_array_value.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.def_string_dynamic_array_value[index].size() + 1);
    }
  }
  // Member: def_string_static_array_value
  {
    size_t array_size = 3;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.def_string_static_array_value[index].size() + 1);
    }
  }
  // Member: def_string_bounded_array_value
  {
    size_t array_size = ros_message.def_string_bounded_array_value.size();
    if (array_size > 10) {
      throw std::runtime_error("array size exceeds upper bound");
    }

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.def_string_bounded_array_value[index].size() + 1);
    }
  }
  // Member: def_various_quotes
  {
    size_t array_size = ros_message.def_various_quotes.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.def_various_quotes[index].size() + 1);
    }
  }
  // Member: def_various_commas
  {
    size_t array_size = ros_message.def_various_commas.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.def_various_commas[index].size() + 1);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rosidl_generator_py
max_serialized_size_StringArrays(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: ub_string_static_array_value
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

  // Member: ub_string_ub_array_value
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

  // Member: ub_string_dynamic_array_value
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

  // Member: string_dynamic_array_value
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

  // Member: string_static_array_value
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: string_bounded_array_value
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

  // Member: def_string_dynamic_array_value
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

  // Member: def_string_static_array_value
  {
    size_t array_size = 3;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: def_string_bounded_array_value
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

  // Member: def_various_quotes
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

  // Member: def_various_commas
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

static bool _StringArrays__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rosidl_generator_py::msg::StringArrays *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _StringArrays__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rosidl_generator_py::msg::StringArrays *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _StringArrays__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rosidl_generator_py::msg::StringArrays *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _StringArrays__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_StringArrays(full_bounded, 0);
}

static message_type_support_callbacks_t _StringArrays__callbacks = {
  "rosidl_generator_py::msg",
  "StringArrays",
  _StringArrays__cdr_serialize,
  _StringArrays__cdr_deserialize,
  _StringArrays__get_serialized_size,
  _StringArrays__max_serialized_size
};

static rosidl_message_type_support_t _StringArrays__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_StringArrays__callbacks,
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
get_message_type_support_handle<rosidl_generator_py::msg::StringArrays>()
{
  return &rosidl_generator_py::msg::typesupport_fastrtps_cpp::_StringArrays__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosidl_generator_py, msg, StringArrays)() {
  return &rosidl_generator_py::msg::typesupport_fastrtps_cpp::_StringArrays__handle;
}

#ifdef __cplusplus
}
#endif
