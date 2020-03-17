// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_rclcpp:msg/UInt32.idl
// generated code does not contain a copyright notice

#ifndef TEST_RCLCPP__MSG__U_INT32__TRAITS_HPP_
#define TEST_RCLCPP__MSG__U_INT32__TRAITS_HPP_

#include "test_rclcpp/msg/u_int32__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_rclcpp::msg::UInt32>()
{
  return "test_rclcpp::msg::UInt32";
}

template<>
struct has_fixed_size<test_rclcpp::msg::UInt32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_rclcpp::msg::UInt32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_rclcpp::msg::UInt32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_RCLCPP__MSG__U_INT32__TRAITS_HPP_