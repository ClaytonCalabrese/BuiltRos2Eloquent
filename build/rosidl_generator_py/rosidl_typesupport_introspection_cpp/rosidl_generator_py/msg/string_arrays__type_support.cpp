// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_generator_py/msg/string_arrays__struct.hpp"
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

void StringArrays_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_generator_py::msg::StringArrays(_init);
}

void StringArrays_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_generator_py::msg::StringArrays *>(message_memory);
  typed_message->~StringArrays();
}

size_t size_function__StringArrays__ub_string_static_array_value(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__StringArrays__ub_string_static_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__ub_string_static_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__StringArrays__ub_string_ub_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__ub_string_ub_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__ub_string_ub_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__ub_string_ub_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__ub_string_dynamic_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__ub_string_dynamic_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__ub_string_dynamic_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__ub_string_dynamic_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__string_dynamic_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__string_dynamic_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__string_dynamic_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__string_dynamic_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__string_static_array_value(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__StringArrays__string_static_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__string_static_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__StringArrays__string_bounded_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__string_bounded_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__string_bounded_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__string_bounded_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__def_string_dynamic_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__def_string_dynamic_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__def_string_dynamic_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__def_string_dynamic_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__def_string_static_array_value(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__StringArrays__def_string_static_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__def_string_static_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<std::string, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__StringArrays__def_string_bounded_array_value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__def_string_bounded_array_value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__def_string_bounded_array_value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__def_string_bounded_array_value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__def_various_quotes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__def_various_quotes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__def_various_quotes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__def_various_quotes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StringArrays__def_various_commas(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StringArrays__def_various_commas(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__StringArrays__def_various_commas(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__StringArrays__def_various_commas(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StringArrays_message_member_array[11] = {
  {
    "ub_string_static_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, ub_string_static_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__ub_string_static_array_value,  // size() function pointer
    get_const_function__StringArrays__ub_string_static_array_value,  // get_const(index) function pointer
    get_function__StringArrays__ub_string_static_array_value,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ub_string_ub_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, ub_string_ub_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__ub_string_ub_array_value,  // size() function pointer
    get_const_function__StringArrays__ub_string_ub_array_value,  // get_const(index) function pointer
    get_function__StringArrays__ub_string_ub_array_value,  // get(index) function pointer
    resize_function__StringArrays__ub_string_ub_array_value  // resize(index) function pointer
  },
  {
    "ub_string_dynamic_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, ub_string_dynamic_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__ub_string_dynamic_array_value,  // size() function pointer
    get_const_function__StringArrays__ub_string_dynamic_array_value,  // get_const(index) function pointer
    get_function__StringArrays__ub_string_dynamic_array_value,  // get(index) function pointer
    resize_function__StringArrays__ub_string_dynamic_array_value  // resize(index) function pointer
  },
  {
    "string_dynamic_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, string_dynamic_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__string_dynamic_array_value,  // size() function pointer
    get_const_function__StringArrays__string_dynamic_array_value,  // get_const(index) function pointer
    get_function__StringArrays__string_dynamic_array_value,  // get(index) function pointer
    resize_function__StringArrays__string_dynamic_array_value  // resize(index) function pointer
  },
  {
    "string_static_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, string_static_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__string_static_array_value,  // size() function pointer
    get_const_function__StringArrays__string_static_array_value,  // get_const(index) function pointer
    get_function__StringArrays__string_static_array_value,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "string_bounded_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, string_bounded_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__string_bounded_array_value,  // size() function pointer
    get_const_function__StringArrays__string_bounded_array_value,  // get_const(index) function pointer
    get_function__StringArrays__string_bounded_array_value,  // get(index) function pointer
    resize_function__StringArrays__string_bounded_array_value  // resize(index) function pointer
  },
  {
    "def_string_dynamic_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, def_string_dynamic_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__def_string_dynamic_array_value,  // size() function pointer
    get_const_function__StringArrays__def_string_dynamic_array_value,  // get_const(index) function pointer
    get_function__StringArrays__def_string_dynamic_array_value,  // get(index) function pointer
    resize_function__StringArrays__def_string_dynamic_array_value  // resize(index) function pointer
  },
  {
    "def_string_static_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, def_string_static_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__def_string_static_array_value,  // size() function pointer
    get_const_function__StringArrays__def_string_static_array_value,  // get_const(index) function pointer
    get_function__StringArrays__def_string_static_array_value,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "def_string_bounded_array_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, def_string_bounded_array_value),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__def_string_bounded_array_value,  // size() function pointer
    get_const_function__StringArrays__def_string_bounded_array_value,  // get_const(index) function pointer
    get_function__StringArrays__def_string_bounded_array_value,  // get(index) function pointer
    resize_function__StringArrays__def_string_bounded_array_value  // resize(index) function pointer
  },
  {
    "def_various_quotes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, def_various_quotes),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__def_various_quotes,  // size() function pointer
    get_const_function__StringArrays__def_various_quotes,  // get_const(index) function pointer
    get_function__StringArrays__def_various_quotes,  // get(index) function pointer
    resize_function__StringArrays__def_various_quotes  // resize(index) function pointer
  },
  {
    "def_various_commas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::StringArrays, def_various_commas),  // bytes offset in struct
    nullptr,  // default value
    size_function__StringArrays__def_various_commas,  // size() function pointer
    get_const_function__StringArrays__def_various_commas,  // get_const(index) function pointer
    get_function__StringArrays__def_various_commas,  // get(index) function pointer
    resize_function__StringArrays__def_various_commas  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StringArrays_message_members = {
  "rosidl_generator_py::msg",  // message namespace
  "StringArrays",  // message name
  11,  // number of fields
  sizeof(rosidl_generator_py::msg::StringArrays),
  StringArrays_message_member_array,  // message members
  StringArrays_init_function,  // function to initialize message memory (memory has to be allocated)
  StringArrays_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StringArrays_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StringArrays_message_members,
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
get_message_type_support_handle<rosidl_generator_py::msg::StringArrays>()
{
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::StringArrays_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_generator_py, msg, StringArrays)() {
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::StringArrays_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
