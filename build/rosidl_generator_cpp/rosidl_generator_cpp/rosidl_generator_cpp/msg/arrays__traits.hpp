// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:msg/Arrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__ARRAYS__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__ARRAYS__TRAITS_HPP_

#include "rosidl_generator_cpp/msg/arrays__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_values'
#include "rosidl_generator_cpp/msg/basic_types__traits.hpp"
// Member 'constants_values'
#include "rosidl_generator_cpp/msg/constants__traits.hpp"
// Member 'defaults_values'
#include "rosidl_generator_cpp/msg/defaults__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::msg::Arrays>()
{
  return "rosidl_generator_cpp::msg::Arrays";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::msg::Arrays>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::msg::Arrays>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::msg::Arrays>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__MSG__ARRAYS__TRAITS_HPP_
