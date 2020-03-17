// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rqt_py_common/msg/val__rosidl_typesupport_introspection_c.h"
#include "rqt_py_common/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rqt_py_common/msg/val__functions.h"
#include "rqt_py_common/msg/val__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Val__rosidl_typesupport_introspection_c__Val_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rqt_py_common__msg__Val__init(message_memory);
}

void Val__rosidl_typesupport_introspection_c__Val_fini_function(void * message_memory)
{
  rqt_py_common__msg__Val__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Val__rosidl_typesupport_introspection_c__Val_message_member_array[1] = {
  {
    "floats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(rqt_py_common__msg__Val, floats),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Val__rosidl_typesupport_introspection_c__Val_message_members = {
  "rqt_py_common__msg",  // message namespace
  "Val",  // message name
  1,  // number of fields
  sizeof(rqt_py_common__msg__Val),
  Val__rosidl_typesupport_introspection_c__Val_message_member_array,  // message members
  Val__rosidl_typesupport_introspection_c__Val_init_function,  // function to initialize message memory (memory has to be allocated)
  Val__rosidl_typesupport_introspection_c__Val_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Val__rosidl_typesupport_introspection_c__Val_message_type_support_handle = {
  0,
  &Val__rosidl_typesupport_introspection_c__Val_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rqt_py_common
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rqt_py_common, msg, Val)() {
  if (!Val__rosidl_typesupport_introspection_c__Val_message_type_support_handle.typesupport_identifier) {
    Val__rosidl_typesupport_introspection_c__Val_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Val__rosidl_typesupport_introspection_c__Val_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
