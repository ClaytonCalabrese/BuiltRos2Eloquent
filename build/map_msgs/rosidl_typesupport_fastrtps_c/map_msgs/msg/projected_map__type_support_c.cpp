// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from map_msgs:msg/ProjectedMap.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/projected_map__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "map_msgs/msg/projected_map__struct.h"
#include "map_msgs/msg/projected_map__functions.h"
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

#include "nav_msgs/msg/occupancy_grid__functions.h"  // map

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


using _ProjectedMap__ros_msg_type = map_msgs__msg__ProjectedMap;

static bool _ProjectedMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProjectedMap__ros_msg_type * ros_message = static_cast<const _ProjectedMap__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->map, cdr))
    {
      return false;
    }
  }

  // Field name: min_z
  {
    cdr << ros_message->min_z;
  }

  // Field name: max_z
  {
    cdr << ros_message->max_z;
  }

  return true;
}

static bool _ProjectedMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProjectedMap__ros_msg_type * ros_message = static_cast<_ProjectedMap__ros_msg_type *>(untyped_ros_message);
  // Field name: map
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, nav_msgs, msg, OccupancyGrid
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->map))
    {
      return false;
    }
  }

  // Field name: min_z
  {
    cdr >> ros_message->min_z;
  }

  // Field name: max_z
  {
    cdr >> ros_message->max_z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t get_serialized_size_map_msgs__msg__ProjectedMap(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProjectedMap__ros_msg_type * ros_message = static_cast<const _ProjectedMap__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name map

  current_alignment += get_serialized_size_nav_msgs__msg__OccupancyGrid(
    &(ros_message->map), current_alignment);
  // field.name min_z
  {
    size_t item_size = sizeof(ros_message->min_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_z
  {
    size_t item_size = sizeof(ros_message->max_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ProjectedMap__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_map_msgs__msg__ProjectedMap(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t max_serialized_size_map_msgs__msg__ProjectedMap(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_nav_msgs__msg__OccupancyGrid(
        full_bounded, current_alignment);
    }
  }
  // member: min_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ProjectedMap__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_map_msgs__msg__ProjectedMap(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProjectedMap = {
  "map_msgs::msg",
  "ProjectedMap",
  _ProjectedMap__cdr_serialize,
  _ProjectedMap__cdr_deserialize,
  _ProjectedMap__get_serialized_size,
  _ProjectedMap__max_serialized_size
};

static rosidl_message_type_support_t _ProjectedMap__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProjectedMap,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, msg, ProjectedMap)() {
  return &_ProjectedMap__type_support;
}

#if defined(__cplusplus)
}
#endif
