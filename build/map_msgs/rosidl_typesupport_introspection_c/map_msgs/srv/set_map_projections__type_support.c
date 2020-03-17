// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from map_msgs:srv/SetMapProjections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "map_msgs/srv/set_map_projections__rosidl_typesupport_introspection_c.h"
#include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "map_msgs/srv/set_map_projections__functions.h"
#include "map_msgs/srv/set_map_projections__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__SetMapProjections_Request__init(message_memory);
}

void SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_fini_function(void * message_memory)
{
  map_msgs__srv__SetMapProjections_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__SetMapProjections_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_members = {
  "map_msgs__srv",  // message namespace
  "SetMapProjections_Request",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__SetMapProjections_Request),
  SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_member_array,  // message members
  SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_type_support_handle = {
  0,
  &SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Request)() {
  if (!SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_type_support_handle.typesupport_identifier) {
    SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMapProjections_Request__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "map_msgs/srv/set_map_projections__rosidl_typesupport_introspection_c.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "map_msgs/srv/set_map_projections__functions.h"
// already included above
// #include "map_msgs/srv/set_map_projections__struct.h"


// Include directives for member types
// Member `projected_maps_info`
#include "map_msgs/msg/projected_map_info.h"
// Member `projected_maps_info`
#include "map_msgs/msg/projected_map_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  map_msgs__srv__SetMapProjections_Response__init(message_memory);
}

void SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_fini_function(void * message_memory)
{
  map_msgs__srv__SetMapProjections_Response__fini(message_memory);
}

size_t SetMapProjections_Response__rosidl_typesupport_introspection_c__size_function__ProjectedMapInfo__projected_maps_info(
  const void * untyped_member)
{
  const map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (const map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * SetMapProjections_Response__rosidl_typesupport_introspection_c__get_const_function__ProjectedMapInfo__projected_maps_info(
  const void * untyped_member, size_t index)
{
  const map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (const map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * SetMapProjections_Response__rosidl_typesupport_introspection_c__get_function__ProjectedMapInfo__projected_maps_info(
  void * untyped_member, size_t index)
{
  map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

bool SetMapProjections_Response__rosidl_typesupport_introspection_c__resize_function__ProjectedMapInfo__projected_maps_info(
  void * untyped_member, size_t size)
{
  map_msgs__msg__ProjectedMapInfo__Sequence * member =
    (map_msgs__msg__ProjectedMapInfo__Sequence *)(untyped_member);
  map_msgs__msg__ProjectedMapInfo__Sequence__fini(member);
  return map_msgs__msg__ProjectedMapInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_member_array[1] = {
  {
    "projected_maps_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(map_msgs__srv__SetMapProjections_Response, projected_maps_info),  // bytes offset in struct
    NULL,  // default value
    SetMapProjections_Response__rosidl_typesupport_introspection_c__size_function__ProjectedMapInfo__projected_maps_info,  // size() function pointer
    SetMapProjections_Response__rosidl_typesupport_introspection_c__get_const_function__ProjectedMapInfo__projected_maps_info,  // get_const(index) function pointer
    SetMapProjections_Response__rosidl_typesupport_introspection_c__get_function__ProjectedMapInfo__projected_maps_info,  // get(index) function pointer
    SetMapProjections_Response__rosidl_typesupport_introspection_c__resize_function__ProjectedMapInfo__projected_maps_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_members = {
  "map_msgs__srv",  // message namespace
  "SetMapProjections_Response",  // message name
  1,  // number of fields
  sizeof(map_msgs__srv__SetMapProjections_Response),
  SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_member_array,  // message members
  SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_type_support_handle = {
  0,
  &SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Response)() {
  SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, msg, ProjectedMapInfo)();
  if (!SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_type_support_handle.typesupport_identifier) {
    SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetMapProjections_Response__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "map_msgs/srv/set_map_projections__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_members = {
  "map_msgs__srv",  // service namespace
  "SetMapProjections",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_Request_message_type_support_handle,
  NULL  // response message
  // map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_Response_message_type_support_handle
};

static rosidl_service_type_support_t map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_type_support_handle = {
  0,
  &map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_map_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections)() {
  if (!map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_type_support_handle.typesupport_identifier) {
    map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, map_msgs, srv, SetMapProjections_Response)()->data;
  }

  return &map_msgs__srv__set_map_projections__rosidl_typesupport_introspection_c__SetMapProjections_service_type_support_handle;
}
