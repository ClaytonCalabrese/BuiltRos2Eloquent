// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__POSE__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__POSE__TRAITS_HPP_

#include "geometry_msgs/msg/pose__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Pose>()
{
  return "geometry_msgs::msg::Pose";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Pose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Pose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<geometry_msgs::msg::Pose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__POSE__TRAITS_HPP_
