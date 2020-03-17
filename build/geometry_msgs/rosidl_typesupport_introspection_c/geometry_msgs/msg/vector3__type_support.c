// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from geometry_msgs:msg/Vector3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "geometry_msgs/msg/vector3__rosidl_typesupport_introspection_c.h"
#include "geometry_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "geometry_msgs/msg/vector3__functions.h"
#include "geometry_msgs/msg/vector3__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Vector3__rosidl_typesupport_introspection_c__Vector3_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  geometry_msgs__msg__Vector3__init(message_memory);
}

void Vector3__rosidl_typesupport_introspection_c__Vector3_fini_function(void * message_memory)
{
  geometry_msgs__msg__Vector3__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Vector3__rosidl_typesupport_introspection_c__Vector3_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Vector3, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Vector3, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(geometry_msgs__msg__Vector3, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Vector3__rosidl_typesupport_introspection_c__Vector3_message_members = {
  "geometry_msgs__msg",  // message namespace
  "Vector3",  // message name
  3,  // number of fields
  sizeof(geometry_msgs__msg__Vector3),
  Vector3__rosidl_typesupport_introspection_c__Vector3_message_member_array,  // message members
  Vector3__rosidl_typesupport_introspection_c__Vector3_init_function,  // function to initialize message memory (memory has to be allocated)
  Vector3__rosidl_typesupport_introspection_c__Vector3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Vector3__rosidl_typesupport_introspection_c__Vector3_message_type_support_handle = {
  0,
  &Vector3__rosidl_typesupport_introspection_c__Vector3_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_geometry_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)() {
  if (!Vector3__rosidl_typesupport_introspection_c__Vector3_message_type_support_handle.typesupport_identifier) {
    Vector3__rosidl_typesupport_introspection_c__Vector3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Vector3__rosidl_typesupport_introspection_c__Vector3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
