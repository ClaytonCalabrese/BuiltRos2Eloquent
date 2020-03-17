// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_py:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__EMPTY__STRUCT_HPP_
#define ROSIDL_GENERATOR_PY__MSG__EMPTY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_generator_py__msg__Empty __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_py__msg__Empty __declspec(deprecated)
#endif

namespace rosidl_generator_py
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Empty_
{
  using Type = Empty_<ContainerAllocator>;

  explicit Empty_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Empty_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_py::msg::Empty_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_py::msg::Empty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Empty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Empty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_py__msg__Empty
    std::shared_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_py__msg__Empty
    std::shared_ptr<rosidl_generator_py::msg::Empty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Empty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Empty_

// alias to use template instance with default allocator
using Empty =
  rosidl_generator_py::msg::Empty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_py

#endif  // ROSIDL_GENERATOR_PY__MSG__EMPTY__STRUCT_HPP_
