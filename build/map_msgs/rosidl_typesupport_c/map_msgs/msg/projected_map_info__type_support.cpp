// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/ProjectedMapInfo.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "map_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "map_msgs/msg/projected_map_info__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace map_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ProjectedMapInfo_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ProjectedMapInfo_type_support_ids_t;

static const _ProjectedMapInfo_type_support_ids_t _ProjectedMapInfo_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ProjectedMapInfo_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ProjectedMapInfo_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ProjectedMapInfo_type_support_symbol_names_t _ProjectedMapInfo_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, msg, ProjectedMapInfo)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, ProjectedMapInfo)),
  }
};

typedef struct _ProjectedMapInfo_type_support_data_t
{
  void * data[2];
} _ProjectedMapInfo_type_support_data_t;

static _ProjectedMapInfo_type_support_data_t _ProjectedMapInfo_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ProjectedMapInfo_message_typesupport_map = {
  2,
  "map_msgs",
  &_ProjectedMapInfo_message_typesupport_ids.typesupport_identifier[0],
  &_ProjectedMapInfo_message_typesupport_symbol_names.symbol_name[0],
  &_ProjectedMapInfo_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ProjectedMapInfo_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ProjectedMapInfo_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace map_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, map_msgs, msg, ProjectedMapInfo)() {
  return &::map_msgs::msg::rosidl_typesupport_c::ProjectedMapInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
