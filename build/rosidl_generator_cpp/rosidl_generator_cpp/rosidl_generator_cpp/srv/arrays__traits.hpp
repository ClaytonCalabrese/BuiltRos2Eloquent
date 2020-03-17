// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rosidl_generator_cpp:srv/Arrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__SRV__ARRAYS__TRAITS_HPP_
#define ROSIDL_GENERATOR_CPP__SRV__ARRAYS__TRAITS_HPP_

#include "rosidl_generator_cpp/srv/arrays__struct.hpp"
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
inline const char * data_type<rosidl_generator_cpp::srv::Arrays_Request>()
{
  return "rosidl_generator_cpp::srv::Arrays_Request";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Arrays_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Arrays_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::srv::Arrays_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'basic_types_values'
// already included above
// #include "rosidl_generator_cpp/msg/basic_types__traits.hpp"
// Member 'constants_values'
// already included above
// #include "rosidl_generator_cpp/msg/constants__traits.hpp"
// Member 'defaults_values'
// already included above
// #include "rosidl_generator_cpp/msg/defaults__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::Arrays_Response>()
{
  return "rosidl_generator_cpp::srv::Arrays_Response";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Arrays_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Arrays_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rosidl_generator_cpp::srv::Arrays_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rosidl_generator_cpp::srv::Arrays>()
{
  return "rosidl_generator_cpp::srv::Arrays";
}

template<>
struct has_fixed_size<rosidl_generator_cpp::srv::Arrays>
  : std::integral_constant<
    bool,
    has_fixed_size<rosidl_generator_cpp::srv::Arrays_Request>::value &&
    has_fixed_size<rosidl_generator_cpp::srv::Arrays_Response>::value
  >
{
};

template<>
struct has_bounded_size<rosidl_generator_cpp::srv::Arrays>
  : std::integral_constant<
    bool,
    has_bounded_size<rosidl_generator_cpp::srv::Arrays_Request>::value &&
    has_bounded_size<rosidl_generator_cpp::srv::Arrays_Response>::value
  >
{
};

template<>
struct is_service<rosidl_generator_cpp::srv::Arrays>
  : std::true_type
{
};

template<>
struct is_service_request<rosidl_generator_cpp::srv::Arrays_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rosidl_generator_cpp::srv::Arrays_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROSIDL_GENERATOR_CPP__SRV__ARRAYS__TRAITS_HPP_
