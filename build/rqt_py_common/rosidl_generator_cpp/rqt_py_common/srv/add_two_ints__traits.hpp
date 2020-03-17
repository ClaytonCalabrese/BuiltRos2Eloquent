// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rqt_py_common:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__SRV__ADD_TWO_INTS__TRAITS_HPP_
#define RQT_PY_COMMON__SRV__ADD_TWO_INTS__TRAITS_HPP_

#include "rqt_py_common/srv/add_two_ints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rqt_py_common::srv::AddTwoInts_Request>()
{
  return "rqt_py_common::srv::AddTwoInts_Request";
}

template<>
struct has_fixed_size<rqt_py_common::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rqt_py_common::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rqt_py_common::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rqt_py_common::srv::AddTwoInts_Response>()
{
  return "rqt_py_common::srv::AddTwoInts_Response";
}

template<>
struct has_fixed_size<rqt_py_common::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rqt_py_common::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rqt_py_common::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rqt_py_common::srv::AddTwoInts>()
{
  return "rqt_py_common::srv::AddTwoInts";
}

template<>
struct has_fixed_size<rqt_py_common::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<rqt_py_common::srv::AddTwoInts_Request>::value &&
    has_fixed_size<rqt_py_common::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<rqt_py_common::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<rqt_py_common::srv::AddTwoInts_Request>::value &&
    has_bounded_size<rqt_py_common::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<rqt_py_common::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<rqt_py_common::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rqt_py_common::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RQT_PY_COMMON__SRV__ADD_TWO_INTS__TRAITS_HPP_
