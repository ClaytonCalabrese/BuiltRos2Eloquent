// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pendulum_msgs:msg/JointCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "pendulum_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "pendulum_msgs/msg/joint_command__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pendulum_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _JointCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _JointCommand_type_support_ids_t;

static const _JointCommand_type_support_ids_t _JointCommand_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _JointCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _JointCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _JointCommand_type_support_symbol_names_t _JointCommand_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pendulum_msgs, msg, JointCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pendulum_msgs, msg, JointCommand)),
  }
};

typedef struct _JointCommand_type_support_data_t
{
  void * data[2];
} _JointCommand_type_support_data_t;

static _JointCommand_type_support_data_t _JointCommand_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _JointCommand_message_typesupport_map = {
  2,
  "pendulum_msgs",
  &_JointCommand_message_typesupport_ids.typesupport_identifier[0],
  &_JointCommand_message_typesupport_symbol_names.symbol_name[0],
  &_JointCommand_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t JointCommand_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_JointCommand_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace pendulum_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_pendulum_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pendulum_msgs, msg, JointCommand)() {
  return &::pendulum_msgs::msg::rosidl_typesupport_c::JointCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
