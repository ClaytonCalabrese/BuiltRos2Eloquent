// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from map_msgs:msg/ProjectedMap.idl
// generated code does not contain a copyright notice
#include "map_msgs/msg/projected_map__rosidl_typesupport_fastrtps_cpp.hpp"
#include "map_msgs/msg/projected_map__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_serialize(
  const map_msgs::msg::ProjectedMap & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: map
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.map,
    cdr);
  // Member: min_z
  cdr << ros_message.min_z;
  // Member: max_z
  cdr << ros_message.max_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  map_msgs::msg::ProjectedMap & ros_message)
{
  // Member: map
  nav_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.map);

  // Member: min_z
  cdr >> ros_message.min_z;

  // Member: max_z
  cdr >> ros_message.max_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
get_serialized_size(
  const map_msgs::msg::ProjectedMap & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: map

  current_alignment +=
    nav_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.map, current_alignment);
  // Member: min_z
  {
    size_t item_size = sizeof(ros_message.min_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_z
  {
    size_t item_size = sizeof(ros_message.max_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_map_msgs
max_serialized_size_ProjectedMap(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: map
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        nav_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_OccupancyGrid(
        full_bounded, current_alignment);
    }
  }

  // Member: min_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ProjectedMap__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const map_msgs::msg::ProjectedMap *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ProjectedMap__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<map_msgs::msg::ProjectedMap *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ProjectedMap__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const map_msgs::msg::ProjectedMap *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ProjectedMap__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ProjectedMap(full_bounded, 0);
}

static message_type_support_callbacks_t _ProjectedMap__callbacks = {
  "map_msgs::msg",
  "ProjectedMap",
  _ProjectedMap__cdr_serialize,
  _ProjectedMap__cdr_deserialize,
  _ProjectedMap__get_serialized_size,
  _ProjectedMap__max_serialized_size
};

static rosidl_message_type_support_t _ProjectedMap__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ProjectedMap__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace map_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_map_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<map_msgs::msg::ProjectedMap>()
{
  return &map_msgs::msg::typesupport_fastrtps_cpp::_ProjectedMap__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, map_msgs, msg, ProjectedMap)() {
  return &map_msgs::msg::typesupport_fastrtps_cpp::_ProjectedMap__handle;
}

#ifdef __cplusplus
}
#endif
