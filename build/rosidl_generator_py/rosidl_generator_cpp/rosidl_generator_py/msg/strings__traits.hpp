// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_py:msg/Strings.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__STRINGS__TRAITS_HPP_
#define ROSIDL_GENERATOR_PY__MSG__STRINGS__TRAITS_HPP_

#include "rosidl_generator_py/msg/strings__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_py::msg::Strings>()
{
  return "rosidl_generator_py::msg::Strings";
}

template<>
struct has_fixed_size<rosidl_generator_py::msg::Strings>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_py::msg::Strings>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_py::msg::Strings>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_PY__MSG__STRINGS__TRAITS_HPP_
