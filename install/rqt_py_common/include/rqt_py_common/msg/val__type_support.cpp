// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rqt_py_common/msg/val__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rqt_py_common
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Val_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) rqt_py_common::msg::Val(_init);
}

void Val_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rqt_py_common::msg::Val *>(message_memory);
  typed_message->~Val();
}

size_t size_function__Val__floats(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__Val__floats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__Val__floats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 5> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Val_message_member_array[1] = {
  {
    "floats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(rqt_py_common::msg::Val, floats),  // bytes offset in struct
    nullptr,  // default value
    size_function__Val__floats,  // size() function pointer
    get_const_function__Val__floats,  // get_const(index) function pointer
    get_function__Val__floats,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Val_message_members = {
  "rqt_py_common::msg",  // message namespace
  "Val",  // message name
  1,  // number of fields
  sizeof(rqt_py_common::msg::Val),
  Val_message_member_array,  // message members
  Val_init_function,  // function to initialize message memory (memory has to be allocated)
  Val_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Val_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Val_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rqt_py_common


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rqt_py_common::msg::Val>()
{
  return &::rqt_py_common::msg::rosidl_typesupport_introspection_cpp::Val_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rqt_py_common, msg, Val)() {
  return &::rqt_py_common::msg::rosidl_typesupport_introspection_cpp::Val_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
