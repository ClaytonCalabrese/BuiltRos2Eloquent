// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:srv/GetMapROI.idl
// generated code does not contain a copyright notice
#include "map_msgs/srv/get_map_roi__rosidl_typesupport_fastrtps_cpp.hpp"
#include "map_msgs/srv/get_map_roi__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::srv::GetMapROI_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x
  cdr << ros_message.x;
  // Member: y
  cdr << ros_message.y;
  // Member: l_x
  cdr << ros_message.l_x;
  // Member: l_y
  cdr << ros_message.l_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  map_msgs::srv::GetMapROI_Request & ros_message)
{
  // Member: x
  cdr >> ros_message.x;

  // Member: y
  cdr >> ros_message.y;

  // Member: l_x
  cdr >> ros_message.l_x;

  // Member: l_y
  cdr >> ros_message.l_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::srv::GetMapROI_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x
  {
    size_t item_size = sizeof(ros_message.x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t item_size = sizeof(ros_message.y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l_x
  {
    size_t item_size = sizeof(ros_message.l_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l_y
  {
    size_t item_size = sizeof(ros_message.l_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
max_serialized_size_GetMapROI_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetMapROI_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const map_msgs::srv::GetMapROI_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetMapROI_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::srv::GetMapROI_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetMapROI_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::srv::GetMapROI_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetMapROI_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetMapROI_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetMapROI_Request__callbacks = {
  "map_msgs::srv",
  "GetMapROI_Request",
  _GetMapROI_Request__cdr_serialize,
  _GetMapROI_Request__cdr_deserialize,
  _GetMapROI_Request__get_serialized_size,
  _GetMapROI_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMapROI_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetMapROI_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::srv::GetMapROI_Request>()
{
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, srv, GetMapROI_Request)() {
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace nav_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const nav_msgs::msg::OccupancyGrid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  nav_msgs::msg::OccupancyGrid &);
size_t get_serialized_size(
  const nav_msgs::msg::OccupancyGrid &,
  size_t current_alignment);
size_t
max_serialized_size_OccupancyGrid(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace nav_msgs


namespace map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::srv::GetMapROI_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sub_map
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sub_map,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  map_msgs::srv::GetMapROI_Response & ros_message)
{
  // Member: sub_map
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sub_map);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::srv::GetMapROI_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sub_map

  current_alignment +=
    nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sub_map, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
max_serialized_size_GetMapROI_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sub_map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OccupancyGrid(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetMapROI_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const map_msgs::srv::GetMapROI_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetMapROI_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::srv::GetMapROI_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetMapROI_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::srv::GetMapROI_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetMapROI_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetMapROI_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetMapROI_Response__callbacks = {
  "map_msgs::srv",
  "GetMapROI_Response",
  _GetMapROI_Response__cdr_serialize,
  _GetMapROI_Response__cdr_deserialize,
  _GetMapROI_Response__get_serialized_size,
  _GetMapROI_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMapROI_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetMapROI_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::srv::GetMapROI_Response>()
{
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, srv, GetMapROI_Response)() {
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace map_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetMapROI__callbacks = {
  "map_msgs::srv",
  "GetMapROI",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, srv, GetMapROI_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, srv, GetMapROI_Response)(),
};

static rosidl_service_type_support_t _GetMapROI__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetMapROI__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_map_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<map_msgs::srv::GetMapROI>()
{
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, srv, GetMapROI)() {
  return &map_msgs::srv::typesupport_fastrtps_cpp::_GetMapROI__handle;
}

#ifdef __cplusplus
}
#endif
