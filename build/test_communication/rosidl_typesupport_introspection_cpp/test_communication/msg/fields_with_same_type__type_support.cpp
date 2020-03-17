// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "test_communication/msg/fields_with_same_type__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace test_communication
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FieldsWithSameType_init_function(
  void * message_memory, rosidl_generator_cpp::MessageInitialization _init)
{
  new (message_memory) test_communication::msg::FieldsWithSameType(_init);
}

void FieldsWithSameType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<test_communication::msg::FieldsWithSameType *>(message_memory);
  typed_message->~FieldsWithSameType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FieldsWithSameType_message_member_array[2] = {
  {
    "basic_types_values1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication::msg::FieldsWithSameType, basic_types_values1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "basic_types_values2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<test_msgs::msg::BasicTypes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication::msg::FieldsWithSameType, basic_types_values2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FieldsWithSameType_message_members = {
  "test_communication::msg",  // message namespace
  "FieldsWithSameType",  // message name
  2,  // number of fields
  sizeof(test_communication::msg::FieldsWithSameType),
  FieldsWithSameType_message_member_array,  // message members
  FieldsWithSameType_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldsWithSameType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FieldsWithSameType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FieldsWithSameType_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace test_communication


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<test_communication::msg::FieldsWithSameType>()
{
  return &::test_communication::msg::rosidl_typesupport_introspection_cpp::FieldsWithSameType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, test_communication, msg, FieldsWithSameType)() {
  return &::test_communication::msg::rosidl_typesupport_introspection_cpp::FieldsWithSameType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
