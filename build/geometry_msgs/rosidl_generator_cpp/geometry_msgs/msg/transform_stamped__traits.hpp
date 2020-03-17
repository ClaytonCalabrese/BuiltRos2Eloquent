// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/TransformStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__TRAITS_HPP_

#include "geometry_msgs/msg/transform_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'transform'
#include "geometry_msgs/msg/transform__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::TransformStamped>()
{
  return "geometry_msgs::msg::TransformStamped";
}

template<>
struct has_fixed_size<geometry_msgs::msg::TransformStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<geometry_msgs::msg::TransformStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<geometry_msgs::msg::TransformStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__TRANSFORM_STAMPED__TRAITS_HPP_