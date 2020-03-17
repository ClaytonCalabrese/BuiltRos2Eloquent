// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rosidl_generator_py/msg/string_arrays__rosidl_typesupport_introspection_c.h"
#include "rosidl_generator_py/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rosidl_generator_py/msg/string_arrays__functions.h"
#include "rosidl_generator_py/msg/string_arrays__struct.h"


// Include directives for member types
// Member `ub_string_static_array_value`
// Member `ub_string_ub_array_value`
// Member `ub_string_dynamic_array_value`
// Member `string_dynamic_array_value`
// Member `string_static_array_value`
// Member `string_bounded_array_value`
// Member `def_string_dynamic_array_value`
// Member `def_string_static_array_value`
// Member `def_string_bounded_array_value`
// Member `def_various_quotes`
// Member `def_various_commas`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void StringArrays__rosidl_typesupport_introspection_c__StringArrays_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rosidl_generator_py__msg__StringArrays__init(message_memory);
}

void StringArrays__rosidl_typesupport_introspection_c__StringArrays_fini_function(void * message_memory)
{
  rosidl_generator_py__msg__StringArrays__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_member_array[11] = {
  {
    "ub_string_static_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, ub_string_static_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ub_string_ub_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, ub_string_ub_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ub_string_dynamic_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    5,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, ub_string_dynamic_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_dynamic_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, string_dynamic_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_static_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, string_static_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_bounded_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, string_bounded_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "def_string_dynamic_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, def_string_dynamic_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "def_string_static_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, def_string_static_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "def_string_bounded_array_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    true,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, def_string_bounded_array_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "def_various_quotes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, def_various_quotes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "def_various_commas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rosidl_generator_py__msg__StringArrays, def_various_commas),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_members = {
  "rosidl_generator_py__msg",  // message namespace
  "StringArrays",  // message name
  11,  // number of fields
  sizeof(rosidl_generator_py__msg__StringArrays),
  StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_member_array,  // message members
  StringArrays__rosidl_typesupport_introspection_c__StringArrays_init_function,  // function to initialize message memory (memory has to be allocated)
  StringArrays__rosidl_typesupport_introspection_c__StringArrays_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_type_support_handle = {
  0,
  &StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rosidl_generator_py
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rosidl_generator_py, msg, StringArrays)() {
  if (!StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_type_support_handle.typesupport_identifier) {
    StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &StringArrays__rosidl_typesupport_introspection_c__StringArrays_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
