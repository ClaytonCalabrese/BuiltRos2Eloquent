// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/Twist.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__TWIST__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__TWIST__TRAITS_HPP_

#include "geometry_msgs/msg/twist__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'linear'
// Member 'angular'
#include "geometry_msgs/msg/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Twist>()
{
  return "geometry_msgs::msg::Twist";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Twist>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Twist>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<geometry_msgs::msg::Twist>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__TWIST__TRAITS_HPP_