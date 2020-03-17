// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_py:msg/MultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__MULTI_NESTED__TRAITS_HPP_
#define ROSIDL_GENERATOR_PY__MSG__MULTI_NESTED__TRAITS_HPP_

#include "rosidl_generator_py/msg/multi_nested__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'array_of_arrays'
// Member 'bounded_sequence_of_arrays'
#include "rosidl_generator_py/msg/arrays__traits.hpp"
// Member 'array_of_bounded_sequences'
// Member 'bounded_sequence_of_bounded_sequences'
#include "rosidl_generator_py/msg/bounded_sequences__traits.hpp"
// Member 'array_of_unbounded_sequences'
// Member 'bounded_sequence_of_unbounded_sequences'
#include "rosidl_generator_py/msg/unbounded_sequences__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_py::msg::MultiNested>()
{
  return "rosidl_generator_py::msg::MultiNested";
}

template<>
struct has_fixed_size<rosidl_generator_py::msg::MultiNested>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_py::msg::MultiNested>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_py::msg::MultiNested>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_PY__MSG__MULTI_NESTED__TRAITS_HPP_
