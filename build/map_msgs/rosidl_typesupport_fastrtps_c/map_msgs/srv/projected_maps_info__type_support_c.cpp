// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice
#include "map_msgs/srv/projected_maps_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "map_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "map_msgs/srv/projected_maps_info__struct.h"
#include "map_msgs/srv/projected_maps_info__functions.h"
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

#include "map_msgs/msg/projected_map_info__functions.h"  // projected_maps_info

// forward declare type support functions
size_t get_serialized_size_map_msgs__msg__ProjectedMapInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_map_msgs__msg__ProjectedMapInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, msg, ProjectedMapInfo)();


using _ProjectedMapsInfo_Request__ros_msg_type = map_msgs__srv__ProjectedMapsInfo_Request;

static bool _ProjectedMapsInfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProjectedMapsInfo_Request__ros_msg_type * ros_message = static_cast<const _ProjectedMapsInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: projected_maps_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, msg, ProjectedMapInfo
      )()->data);
    size_t size = ros_message->projected_maps_info.size;
    auto array_ptr = ros_message->projected_maps_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ProjectedMapsInfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProjectedMapsInfo_Request__ros_msg_type * ros_message = static_cast<_ProjectedMapsInfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: projected_maps_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, msg, ProjectedMapInfo
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->projected_maps_info.data) {
      map_msgs__msg__ProjectedMapInfo__Sequence__fini(&ros_message->projected_maps_info);
    }
    if (!map_msgs__msg__ProjectedMapInfo__Sequence__init(&ros_message->projected_maps_info, size)) {
      return "failed to create array for field 'projected_maps_info'";
    }
    auto array_ptr = ros_message->projected_maps_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t get_serialized_size_map_msgs__srv__ProjectedMapsInfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProjectedMapsInfo_Request__ros_msg_type * ros_message = static_cast<const _ProjectedMapsInfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name projected_maps_info
  {
    size_t array_size = ros_message->projected_maps_info.size;
    auto array_ptr = ros_message->projected_maps_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_map_msgs__msg__ProjectedMapInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ProjectedMapsInfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_map_msgs__srv__ProjectedMapsInfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t max_serialized_size_map_msgs__srv__ProjectedMapsInfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: projected_maps_info
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_map_msgs__msg__ProjectedMapInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ProjectedMapsInfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_map_msgs__srv__ProjectedMapsInfo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProjectedMapsInfo_Request = {
  "map_msgs::srv",
  "ProjectedMapsInfo_Request",
  _ProjectedMapsInfo_Request__cdr_serialize,
  _ProjectedMapsInfo_Request__cdr_deserialize,
  _ProjectedMapsInfo_Request__get_serialized_size,
  _ProjectedMapsInfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _ProjectedMapsInfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProjectedMapsInfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, ProjectedMapsInfo_Request)() {
  return &_ProjectedMapsInfo_Request__type_support;
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
// #include "map_msgs/srv/projected_maps_info__struct.h"
// already included above
// #include "map_msgs/srv/projected_maps_info__functions.h"
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


// forward declare type support functions


using _ProjectedMapsInfo_Response__ros_msg_type = map_msgs__srv__ProjectedMapsInfo_Response;

static bool _ProjectedMapsInfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ProjectedMapsInfo_Response__ros_msg_type * ros_message = static_cast<const _ProjectedMapsInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _ProjectedMapsInfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ProjectedMapsInfo_Response__ros_msg_type * ros_message = static_cast<_ProjectedMapsInfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t get_serialized_size_map_msgs__srv__ProjectedMapsInfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ProjectedMapsInfo_Response__ros_msg_type * ros_message = static_cast<const _ProjectedMapsInfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ProjectedMapsInfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_map_msgs__srv__ProjectedMapsInfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_map_msgs
size_t max_serialized_size_map_msgs__srv__ProjectedMapsInfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ProjectedMapsInfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_map_msgs__srv__ProjectedMapsInfo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ProjectedMapsInfo_Response = {
  "map_msgs::srv",
  "ProjectedMapsInfo_Response",
  _ProjectedMapsInfo_Response__cdr_serialize,
  _ProjectedMapsInfo_Response__cdr_deserialize,
  _ProjectedMapsInfo_Response__get_serialized_size,
  _ProjectedMapsInfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _ProjectedMapsInfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ProjectedMapsInfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, ProjectedMapsInfo_Response)() {
  return &_ProjectedMapsInfo_Response__type_support;
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
#include "map_msgs/srv/projected_maps_info.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ProjectedMapsInfo__callbacks = {
  "map_msgs::srv",
  "ProjectedMapsInfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, ProjectedMapsInfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, ProjectedMapsInfo_Response)(),
};

static rosidl_service_type_support_t ProjectedMapsInfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ProjectedMapsInfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, map_msgs, srv, ProjectedMapsInfo)() {
  return &ProjectedMapsInfo__handle;
}

#if defined(__cplusplus)
}
#endif
