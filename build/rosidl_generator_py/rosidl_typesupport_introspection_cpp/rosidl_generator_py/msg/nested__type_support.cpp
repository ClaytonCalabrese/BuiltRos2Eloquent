// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rosidl_generator_py:msg/Nested.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rosidl_generator_py/msg/nested__struct.hpp"
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

void Nested_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) rosidl_generator_py::msg::Nested(_init);
}

void Nested_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rosidl_generator_py::msg::Nested *>(message_memory);
  typed_message->~Nested();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Nested_message_member_array[1] = {
  {
    "basic_types_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rosidl_generator_py::msg::BasicTypes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py::msg::Nested, basic_types_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Nested_message_members = {
  "rosidl_generator_py::msg",  // message namespace
  "Nested",  // message name
  1,  // number of fields
  sizeof(rosidl_generator_py::msg::Nested),
  Nested_message_member_array,  // message members
  Nested_init_function,  // function to initialize message memory (memory has to be allocated)
  Nested_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Nested_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Nested_message_members,
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
get_message_type_support_handle<rosidl_generator_py::msg::Nested>()
{
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::Nested_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosidl_generator_py, msg, Nested)() {
  return &::rosidl_generator_py::msg::rosidl_typesupport_introspection_cpp::Nested_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif