// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__TRAITS_HPP_
#define TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__TRAITS_HPP_

#include "test_communication/msg/fields_with_same_type__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'basic_types_values1'
// Member 'basic_types_values2'
#include "test_msgs/msg/basic_types__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<test_communication::msg::FieldsWithSameType>()
{
  return "test_communication::msg::FieldsWithSameType";
}

template<>
struct has_fixed_size<test_communication::msg::FieldsWithSameType>
  : std::integral_constant<bool, has_fixed_size<test_msgs::msg::BasicTypes>::value> {};

template<>
struct has_bounded_size<test_communication::msg::FieldsWithSameType>
  : std::integral_constant<bool, has_bounded_size<test_msgs::msg::BasicTypes>::value> {};

template<>
struct is_message<test_communication::msg::FieldsWithSameType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__TRAITS_HPP_
