// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_py:msg/Nested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__NESTED__STRUCT_HPP_
#define ROSIDL_GENERATOR_PY__MSG__NESTED__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'basic_types_value'
#include "rosidl_generator_py/msg/basic_types__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_generator_py__msg__Nested __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_py__msg__Nested __declspec(deprecated)
#endif

namespace rosidl_generator_py
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nested_
{
  using Type = Nested_<ContainerAllocator>;

  explicit Nested_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : basic_types_value(_init)
  {
    (void)_init;
  }

  explicit Nested_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : basic_types_value(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _basic_types_value_type =
    rosidl_generator_py::msg::BasicTypes_<ContainerAllocator>;
  _basic_types_value_type basic_types_value;

  // setters for named parameter idiom
  Type & set__basic_types_value(
    const rosidl_generator_py::msg::BasicTypes_<ContainerAllocator> & _arg)
  {
    this->basic_types_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_py::msg::Nested_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_py::msg::Nested_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Nested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Nested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_py__msg__Nested
    std::shared_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_py__msg__Nested
    std::shared_ptr<rosidl_generator_py::msg::Nested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nested_ & other) const
  {
    if (this->basic_types_value != other.basic_types_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nested_

// alias to use template instance with default allocator
using Nested =
  rosidl_generator_py::msg::Nested_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_py

#endif  // ROSIDL_GENERATOR_PY__MSG__NESTED__STRUCT_HPP_
