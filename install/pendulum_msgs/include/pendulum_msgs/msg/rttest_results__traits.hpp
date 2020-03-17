// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pendulum_msgs:msg/RttestResults.idl
// generated code does not contain a copyright notice

#ifndef PENDULUM_MSGS__MSG__RTTEST_RESULTS__TRAITS_HPP_
#define PENDULUM_MSGS__MSG__RTTEST_RESULTS__TRAITS_HPP_

#include "pendulum_msgs/msg/rttest_results__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"
// Member 'command'
#include "pendulum_msgs/msg/joint_command__traits.hpp"
// Member 'state'
#include "pendulum_msgs/msg/joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pendulum_msgs::msg::RttestResults>()
{
  return "pendulum_msgs::msg::RttestResults";
}

template<>
struct has_fixed_size<pendulum_msgs::msg::RttestResults>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<pendulum_msgs::msg::JointCommand>::value && has_fixed_size<pendulum_msgs::msg::JointState>::value> {};

template<>
struct has_bounded_size<pendulum_msgs::msg::RttestResults>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<pendulum_msgs::msg::JointCommand>::value && has_bounded_size<pendulum_msgs::msg::JointState>::value> {};

template<>
struct is_message<pendulum_msgs::msg::RttestResults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PENDULUM_MSGS__MSG__RTTEST_RESULTS__TRAITS_HPP_
