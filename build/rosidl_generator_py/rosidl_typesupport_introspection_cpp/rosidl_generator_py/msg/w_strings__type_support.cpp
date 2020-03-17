// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_generator_py:msg/WStrings.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_generator_py/msg/w_strings__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rosidl_generator_py
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WStrings_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_generator_py::msg::WStrings(_init);
}

void WStrings_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_generator_py::msg::WStrings *>(message_memory);
  typed_message->~WStrings();
}

size_t size_function__WStrings__array_of_wstrings(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__WStrings__array_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::u16string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__array_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::u16string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__WStrings__bounded_sequence_of_wstrings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WStrings__bounded_sequence_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__bounded_sequence_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void resize_function__WStrings__bounded_sequence_of_wstrings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WStrings__unbounded_sequence_of_wstrings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WStrings__unbounded_sequence_of_wstrings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void * get_function__WStrings__unbounded_sequence_of_wstrings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  return &member[index];
}

void resize_function__WStrings__unbounded_sequence_of_wstrings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::u16string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WStrings_message_member_array[7] = {
  {
    "wstring_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, wstring_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wstring_value_default1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, wstring_value_default1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wstring_value_default2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, wstring_value_default2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wstring_value_default3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, wstring_value_default3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "array_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, array_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__array_of_wstrings,  // size() function pointer
    get_const_function__WStrings__array_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__array_of_wstrings,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounded_sequence_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, bounded_sequence_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__bounded_sequence_of_wstrings,  // size() function pointer
    get_const_function__WStrings__bounded_sequence_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__bounded_sequence_of_wstrings,  // get(index) function pointer
    resize_function__WStrings__bounded_sequence_of_wstrings  // resize(index) function pointer
  },
  {
    "unbounded_sequence_of_wstrings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_WSTRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::WStrings, unbounded_sequence_of_wstrings),  // bytes offset in struct
    nullptr,  // default value
    size_function__WStrings__unbounded_sequence_of_wstrings,  // size() function pointer
    get_const_function__WStrings__unbounded_sequence_of_wstrings,  // get_const(index) function pointer
    get_function__WStrings__unbounded_sequence_of_wstrings,  // get(index) function pointer
    resize_function__WStrings__unbounded_sequence_of_wstrings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WStrings_message_members = {
  "rosidl_generator_py::msg",  // message namespace
  "WStrings",  // message name
  7,  // number of fields
  sizeof(rosidl_generator_py::msg::WStrings),
  WStrings_message_member_array,  // message members
  WStrings_init_function,  // function to initialize message memory (memory has to be allocated)
  WStrings_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WStrings_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WStrings_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rosidl_generator_py


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosidl_generator_py::msg::WStrings>()
{
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::WStrings_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_generator_py, msg, WStrings)() {
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::WStrings_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
