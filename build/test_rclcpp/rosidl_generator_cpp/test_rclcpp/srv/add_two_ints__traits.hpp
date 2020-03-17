// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_rclcpp:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_RCLCPP__SRV__ADD_TWO_INTS__TRAITS_HPP_
#define TEST_RCLCPP__SRV__ADD_TWO_INTS__TRAITS_HPP_

#include "test_rclcpp/srv/add_two_ints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_rclcpp::srv::AddTwoInts_Request>()
{
  return "test_rclcpp::srv::AddTwoInts_Request";
}

template<>
struct has_fixed_size<test_rclcpp::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_rclcpp::srv::AddTwoInts_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_rclcpp::srv::AddTwoInts_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_rclcpp::srv::AddTwoInts_Response>()
{
  return "test_rclcpp::srv::AddTwoInts_Response";
}

template<>
struct has_fixed_size<test_rclcpp::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<test_rclcpp::srv::AddTwoInts_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<test_rclcpp::srv::AddTwoInts_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_rclcpp::srv::AddTwoInts>()
{
  return "test_rclcpp::srv::AddTwoInts";
}

template<>
struct has_fixed_size<test_rclcpp::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_fixed_size<test_rclcpp::srv::AddTwoInts_Request>::value &&
    has_fixed_size<test_rclcpp::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct has_bounded_size<test_rclcpp::srv::AddTwoInts>
  : std::integral_constant<
    bool,
    has_bounded_size<test_rclcpp::srv::AddTwoInts_Request>::value &&
    has_bounded_size<test_rclcpp::srv::AddTwoInts_Response>::value
  >
{
};

template<>
struct is_service<test_rclcpp::srv::AddTwoInts>
  : std::true_type
{
};

template<>
struct is_service_request<test_rclcpp::srv::AddTwoInts_Request>
  : std::true_type
{
};

template<>
struct is_service_response<test_rclcpp::srv::AddTwoInts_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TEST_RCLCPP__SRV__ADD_TWO_INTS__TRAITS_HPP_
