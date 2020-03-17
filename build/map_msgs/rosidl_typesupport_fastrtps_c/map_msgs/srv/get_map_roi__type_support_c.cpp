// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from map_msgs:srv/GetMapROI.idl
// generated code does not contain a copyright notice
#include "map_msgs/srv/get_map_roi__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "map_msgs/srv/get_map_roi__struct.h"
#include "map_msgs/srv/get_map_roi__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetMapROI_Request__ros_msg_type = map_msgs__srv__GetMapROI_Request;

static bool _GetMapROI_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMapROI_Request__ros_msg_type * ros_message = static_cast<const _GetMapROI_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: l_x
  {
    cdr << ros_message->l_x;
  }

  // Field name: l_y
  {
    cdr << ros_message->l_y;
  }

  return true;
}

static bool _GetMapROI_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMapROI_Request__ros_msg_type * ros_message = static_cast<_GetMapROI_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: l_x
  {
    cdr >> ros_message->l_x;
  }

  // Field name: l_y
  {
    cdr >> ros_message->l_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t get_serialized_size_map_msgs__srv__GetMapROI_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMapROI_Request__ros_msg_type * ros_message = static_cast<const _GetMapROI_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l_x
  {
    size_t item_size = sizeof(ros_message->l_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l_y
  {
    size_t item_size = sizeof(ros_message->l_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMapROI_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_map_msgs__srv__GetMapROI_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t max_serialized_size_map_msgs__srv__GetMapROI_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMapROI_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_map_msgs__srv__GetMapROI_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMapROI_Request = {
  "map_msgs::srv",
  "GetMapROI_Request",
  _GetMapROI_Request__cdr_serialize,
  _GetMapROI_Request__cdr_deserialize,
  _GetMapROI_Request__get_serialized_size,
  _GetMapROI_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMapROI_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMapROI_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, GetMapROI_Request)() {
  return &_GetMapROI_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "map_msgs/srv/get_map_roi__struct.h"
// already included above
// #include "map_msgs/srv/get_map_roi__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "nav_msgs/msg/occupancy_grid__functions.h"  // sub_map

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_map_msgs
size_t get_serialized_size_nav_msgs__msg__OccupancyGrid(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_map_msgs
size_t max_serialized_size_nav_msgs__msg__OccupancyGrid(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid)();


using _GetMapROI_Response__ros_msg_type = map_msgs__srv__GetMapROI_Response;

static bool _GetMapROI_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMapROI_Response__ros_msg_type * ros_message = static_cast<const _GetMapROI_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sub_map, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetMapROI_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMapROI_Response__ros_msg_type * ros_message = static_cast<_GetMapROI_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sub_map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sub_map))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t get_serialized_size_map_msgs__srv__GetMapROI_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMapROI_Response__ros_msg_type * ros_message = static_cast<const _GetMapROI_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sub_map

  current_alignment += get_serialized_size_nav_msgs__msg__OccupancyGrid(
    &(ros_message->sub_map), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetMapROI_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_map_msgs__srv__GetMapROI_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t max_serialized_size_map_msgs__srv__GetMapROI_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sub_map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__OccupancyGrid(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMapROI_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_map_msgs__srv__GetMapROI_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMapROI_Response = {
  "map_msgs::srv",
  "GetMapROI_Response",
  _GetMapROI_Response__cdr_serialize,
  _GetMapROI_Response__cdr_deserialize,
  _GetMapROI_Response__get_serialized_size,
  _GetMapROI_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMapROI_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMapROI_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, GetMapROI_Response)() {
  return &_GetMapROI_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "map_msgs/srv/get_map_roi.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetMapROI__callbacks = {
  "map_msgs::srv",
  "GetMapROI",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, GetMapROI_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, GetMapROI_Response)(),
};

static rosidl_service_type_support_t GetMapROI__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetMapROI__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, GetMapROI)() {
  return &GetMapROI__handle;
}

#if defined(__cplusplus)
}
#endif
