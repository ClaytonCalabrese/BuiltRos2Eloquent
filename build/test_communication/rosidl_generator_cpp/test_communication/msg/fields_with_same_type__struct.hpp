// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_
#define TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'basic_types_values1'
// Member 'basic_types_values2'
#include "test_msgs/msg/basic_types__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__test_communication__msg__FieldsWithSameType __attribute__((deprecated))
#else
# define DEPRECATED__test_communication__msg__FieldsWithSameType __declspec(deprecated)
#endif

namespace test_communication
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FieldsWithSameType_
{
  using Type = FieldsWithSameType_<ContainerAllocator>;

  explicit FieldsWithSameType_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : basic_types_values1(_init),
    basic_types_values2(_init)
  {
    (void)_init;
  }

  explicit FieldsWithSameType_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : basic_types_values1(_alloc, _init),
    basic_types_values2(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _basic_types_values1_type =
    test_msgs::msg::BasicTypes_<ContainerAllocator>;
  _basic_types_values1_type basic_types_values1;
  using _basic_types_values2_type =
    test_msgs::msg::BasicTypes_<ContainerAllocator>;
  _basic_types_values2_type basic_types_values2;

  // setters for named parameter idiom
  Type & set__basic_types_values1(
    const test_msgs::msg::BasicTypes_<ContainerAllocator> & _arg)
  {
    this->basic_types_values1 = _arg;
    return *this;
  }
  Type & set__basic_types_values2(
    const test_msgs::msg::BasicTypes_<ContainerAllocator> & _arg)
  {
    this->basic_types_values2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_communication::msg::FieldsWithSameType_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_communication::msg::FieldsWithSameType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_communication::msg::FieldsWithSameType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_communication::msg::FieldsWithSameType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_communication__msg__FieldsWithSameType
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_communication__msg__FieldsWithSameType
    std::shared_ptr<test_communication::msg::FieldsWithSameType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FieldsWithSameType_ & other) const
  {
    if (this->basic_types_values1 != other.basic_types_values1) {
      return false;
    }
    if (this->basic_types_values2 != other.basic_types_values2) {
      return false;
    }
    return true;
  }
  bool operator!=(const FieldsWithSameType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FieldsWithSameType_

// alias to use template instance with default allocator
using FieldsWithSameType =
  test_communication::msg::FieldsWithSameType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_communication

#endif  // TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__STRUCT_HPP_
