// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:msg/WStrings.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__TRAITS_HPP_

#include "rosidl_generator_cpp/msg/w_strings__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::msg::WStrings>()
{
  return "rosidl_generator_cpp::msg::WStrings";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::msg::WStrings>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::msg::WStrings>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::msg::WStrings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__MSG__W_STRINGS__TRAITS_HPP_
