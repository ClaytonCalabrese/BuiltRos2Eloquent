// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pendulum_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pendulum_msgs/msg/joint_command__rosidl_typesupport_introspection_c.h"
#include "pendulum_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pendulum_msgs/msg/joint_command__functions.h"
#include "pendulum_msgs/msg/joint_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pendulum_msgs__msg__JointCommand__init(message_memory);
}

void JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function(void * message_memory)
{
  pendulum_msgs__msg__JointCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pendulum_msgs__msg__JointCommand, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members = {
  "pendulum_msgs__msg",  // message namespace
  "JointCommand",  // message name
  1,  // number of fields
  sizeof(pendulum_msgs__msg__JointCommand),
  JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_member_array,  // message members
  JointCommand__rosidl_typesupport_introspection_c__JointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  JointCommand__rosidl_typesupport_introspection_c__JointCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle = {
  0,
  &JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pendulum_msgs, msg, JointCommand)() {
  if (!JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier) {
    JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JointCommand__rosidl_typesupport_introspection_c__JointCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
