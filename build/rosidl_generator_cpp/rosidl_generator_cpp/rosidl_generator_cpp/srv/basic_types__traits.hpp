// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:srv/BasicTypes.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__SRV__BASIC_TYPES__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__SRV__BASIC_TYPES__TRAITS_HPP_

#include "rosidl_generator_cpp/srv/basic_types__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::BasicTypes_Request>()
{
  return "rosidl_generator_cpp::srv::BasicTypes_Request";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::BasicTypes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::BasicTypes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::srv::BasicTypes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::BasicTypes_Response>()
{
  return "rosidl_generator_cpp::srv::BasicTypes_Response";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::BasicTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::BasicTypes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::srv::BasicTypes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::BasicTypes>()
{
  return "rosidl_generator_cpp::srv::BasicTypes";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::BasicTypes>
  : std::integral_constant<
    bool,
    has_fixed_size<rosidl_generator_cpp::srv::BasicTypes_Request>::value &&
    has_fixed_size<rosidl_generator_cpp::srv::BasicTypes_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::BasicTypes>
  : std::integral_constant<
    bool,
    has_bounded_size<rosidl_generator_cpp::srv::BasicTypes_Request>::value &&
    has_bounded_size<rosidl_generator_cpp::srv::BasicTypes_Response>::value
  >
{
};

template<>
struct is_service<rosidl_generator_cpp::srv::BasicTypes>
  : std::true_type
{
};

template<>
struct is_service_request<rosidl_generator_cpp::srv::BasicTypes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosidl_generator_cpp::srv::BasicTypes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__SRV__BASIC_TYPES__TRAITS_HPP_
