// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__SRV__EMPTY__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__SRV__EMPTY__TRAITS_HPP_

#include "rosidl_generator_cpp/srv/empty__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::Empty_Request>()
{
  return "rosidl_generator_cpp::srv::Empty_Request";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosidl_generator_cpp::srv::Empty_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::Empty_Response>()
{
  return "rosidl_generator_cpp::srv::Empty_Response";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rosidl_generator_cpp::srv::Empty_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::Empty>()
{
  return "rosidl_generator_cpp::srv::Empty";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<rosidl_generator_cpp::srv::Empty_Request>::value &&
    has_fixed_size<rosidl_generator_cpp::srv::Empty_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Empty>
  : std::integral_constant<
    bool,
    has_bounded_size<rosidl_generator_cpp::srv::Empty_Request>::value &&
    has_bounded_size<rosidl_generator_cpp::srv::Empty_Response>::value
  >
{
};

template<>
struct is_service<rosidl_generator_cpp::srv::Empty>
  : std::true_type
{
};

template<>
struct is_service_request<rosidl_generator_cpp::srv::Empty_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosidl_generator_cpp::srv::Empty_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__SRV__EMPTY__TRAITS_HPP_
