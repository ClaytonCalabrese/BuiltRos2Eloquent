// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from visualization_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_
#define VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARROW'.
enum
{
  visualization_msgs__msg__Marker__ARROW = 0
};

/// Constant 'CUBE'.
enum
{
  visualization_msgs__msg__Marker__CUBE = 1
};

/// Constant 'SPHERE'.
enum
{
  visualization_msgs__msg__Marker__SPHERE = 2
};

/// Constant 'CYLINDER'.
enum
{
  visualization_msgs__msg__Marker__CYLINDER = 3
};

/// Constant 'LINE_STRIP'.
enum
{
  visualization_msgs__msg__Marker__LINE_STRIP = 4
};

/// Constant 'LINE_LIST'.
enum
{
  visualization_msgs__msg__Marker__LINE_LIST = 5
};

/// Constant 'CUBE_LIST'.
enum
{
  visualization_msgs__msg__Marker__CUBE_LIST = 6
};

/// Constant 'SPHERE_LIST'.
enum
{
  visualization_msgs__msg__Marker__SPHERE_LIST = 7
};

/// Constant 'POINTS'.
enum
{
  visualization_msgs__msg__Marker__POINTS = 8
};

/// Constant 'TEXT_VIEW_FACING'.
enum
{
  visualization_msgs__msg__Marker__TEXT_VIEW_FACING = 9
};

/// Constant 'MESH_RESOURCE'.
enum
{
  visualization_msgs__msg__Marker__MESH_RESOURCE = 10
};

/// Constant 'TRIANGLE_LIST'.
enum
{
  visualization_msgs__msg__Marker__TRIANGLE_LIST = 11
};

/// Constant 'ADD'.
enum
{
  visualization_msgs__msg__Marker__ADD = 0
};

/// Constant 'MODIFY'.
enum
{
  visualization_msgs__msg__Marker__MODIFY = 0
};

/// Constant 'DELETE'.
enum
{
  visualization_msgs__msg__Marker__DELETE = 2
};

/// Constant 'DELETEALL'.
enum
{
  visualization_msgs__msg__Marker__DELETEALL = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'ns'
// Member 'text'
// Member 'mesh_resource'
#include "rosidl_generator_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'scale'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'color'
// Member 'colors'
#include "std_msgs/msg/color_rgba__struct.h"
// Member 'lifetime'
#include "builtin_interfaces/msg/duration__struct.h"
// Member 'points'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in msg/Marker in the package visualization_msgs.
typedef struct visualization_msgs__msg__Marker
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String ns;
  int32_t id;
  int32_t type;
  int32_t action;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Vector3 scale;
  std_msgs__msg__ColorRGBA color;
  builtin_interfaces__msg__Duration lifetime;
  bool frame_locked;
  geometry_msgs__msg__Point__Sequence points;
  std_msgs__msg__ColorRGBA__Sequence colors;
  rosidl_generator_c__String text;
  rosidl_generator_c__String mesh_resource;
  bool mesh_use_embedded_materials;
} visualization_msgs__msg__Marker;

// Struct for a sequence of visualization_msgs__msg__Marker.
typedef struct visualization_msgs__msg__Marker__Sequence
{
  visualization_msgs__msg__Marker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} visualization_msgs__msg__Marker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISUALIZATION_MSGS__MSG__MARKER__STRUCT_H_
