// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_msgs:msg/Builtins.idl
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BUILTINS__TRAITS_HPP_
#define TEST_MSGS__MSG__BUILTINS__TRAITS_HPP_

#include "test_msgs/msg/builtins__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'duration_value'
#include "builtin_interfaces/msg/duration__traits.hpp"
// Member 'time_value'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_msgs::msg::Builtins>()
{
  return "test_msgs::msg::Builtins";
}

template<>
struct has_fixed_size<test_msgs::msg::Builtins>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<test_msgs::msg::Builtins>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<test_msgs::msg::Builtins>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_MSGS__MSG__BUILTINS__TRAITS_HPP_
