// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actionlib_msgs:msg/GoalID.idl
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_ID__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_ID__TRAITS_HPP_

#include "actionlib_msgs/msg/goal_id__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actionlib_msgs::msg::GoalID>()
{
  return "actionlib_msgs::msg::GoalID";
}

template<>
struct has_fixed_size<actionlib_msgs::msg::GoalID>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalID>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actionlib_msgs::msg::GoalID>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__GOAL_ID__TRAITS_HPP_
