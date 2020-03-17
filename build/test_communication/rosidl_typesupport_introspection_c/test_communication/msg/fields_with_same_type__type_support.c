// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_communication/msg/fields_with_same_type__rosidl_typesupport_introspection_c.h"
#include "test_communication/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_communication/msg/fields_with_same_type__functions.h"
#include "test_communication/msg/fields_with_same_type__struct.h"


// Include directives for member types
// Member `basic_types_values1`
// Member `basic_types_values2`
#include "test_msgs/msg/basic_types.h"
// Member `basic_types_values1`
// Member `basic_types_values2`
#include "test_msgs/msg/basic_types__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_communication__msg__FieldsWithSameType__init(message_memory);
}

void FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_fini_function(void * message_memory)
{
  test_communication__msg__FieldsWithSameType__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_member_array[2] = {
  {
    "basic_types_values1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication__msg__FieldsWithSameType, basic_types_values1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "basic_types_values2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_communication__msg__FieldsWithSameType, basic_types_values2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_members = {
  "test_communication__msg",  // message namespace
  "FieldsWithSameType",  // message name
  2,  // number of fields
  sizeof(test_communication__msg__FieldsWithSameType),
  FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_member_array,  // message members
  FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_init_function,  // function to initialize message memory (memory has to be allocated)
  FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_type_support_handle = {
  0,
  &FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_communication
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_communication, msg, FieldsWithSameType)() {
  FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_msgs, msg, BasicTypes)();
  if (!FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_type_support_handle.typesupport_identifier) {
    FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FieldsWithSameType__rosidl_typesupport_introspection_c__FieldsWithSameType_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
