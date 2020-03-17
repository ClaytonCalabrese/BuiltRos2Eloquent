// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__NESTED__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__NESTED__TRAITS_HPP_

#include "rosidl_generator_cpp/msg/nested__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_value'
#include "rosidl_generator_cpp/msg/basic_types__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::msg::Nested>()
{
  return "rosidl_generator_cpp::msg::Nested";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::msg::Nested>
  : std::integral_constant<bool, has_fixed_size<rosidl_generator_cpp::msg::BasicTypes>::value> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::msg::Nested>
  : std::integral_constant<bool, has_bounded_size<rosidl_generator_cpp::msg::BasicTypes>::value> {};

template<>
struct is_message<rosidl_generator_cpp::msg::Nested>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__MSG__NESTED__TRAITS_HPP_
