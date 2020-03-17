// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg/InertiaStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__INERTIA_STAMPED__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__INERTIA_STAMPED__TRAITS_HPP_

#include "geometry_msgs/msg/inertia_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'inertia'
#include "geometry_msgs/msg/inertia__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::InertiaStamped>()
{
  return "geometry_msgs::msg::InertiaStamped";
}

template<>
struct has_fixed_size<geometry_msgs::msg::InertiaStamped>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Inertia>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<geometry_msgs::msg::InertiaStamped>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Inertia>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<geometry_msgs::msg::InertiaStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__INERTIA_STAMPED__TRAITS_HPP_
