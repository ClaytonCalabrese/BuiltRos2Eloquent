// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rqt_py_common:msg/ArrayVal.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__ARRAY_VAL__TRAITS_HPP_
#define RQT_PY_COMMON__MSG__ARRAY_VAL__TRAITS_HPP_

#include "rqt_py_common/msg/array_val__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'vals'
#include "rqt_py_common/msg/val__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rqt_py_common::msg::ArrayVal>()
{
  return "rqt_py_common::msg::ArrayVal";
}

template<>
struct has_fixed_size<rqt_py_common::msg::ArrayVal>
  : std::integral_constant<bool, has_fixed_size<rqt_py_common::msg::Val>::value> {};

template<>
struct has_bounded_size<rqt_py_common::msg::ArrayVal>
  : std::integral_constant<bool, has_bounded_size<rqt_py_common::msg::Val>::value> {};

template<>
struct is_message<rqt_py_common::msg::ArrayVal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RQT_PY_COMMON__MSG__ARRAY_VAL__TRAITS_HPP_
