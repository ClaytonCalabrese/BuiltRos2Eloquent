// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__VAL__STRUCT_HPP_
#define RQT_PY_COMMON__MSG__VAL__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rqt_py_common__msg__Val __attribute__((deprecated))
#else
# define DEPRECATED__rqt_py_common__msg__Val __declspec(deprecated)
#endif

namespace rqt_py_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Val_
{
  using Type = Val_<ContainerAllocator>;

  explicit Val_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 5>::iterator, double>(this->floats.begin(), this->floats.end(), 0.0);
    }
  }

  explicit Val_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : floats(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 5>::iterator, double>(this->floats.begin(), this->floats.end(), 0.0);
    }
  }

  // field types and members
  using _floats_type =
    std::array<double, 5>;
  _floats_type floats;

  // setters for named parameter idiom
  Type & set__floats(
    const std::array<double, 5> & _arg)
  {
    this->floats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rqt_py_common::msg::Val_<ContainerAllocator> *;
  using ConstRawPtr =
    const rqt_py_common::msg::Val_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rqt_py_common::msg::Val_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rqt_py_common::msg::Val_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rqt_py_common::msg::Val_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rqt_py_common::msg::Val_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rqt_py_common::msg::Val_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rqt_py_common::msg::Val_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rqt_py_common::msg::Val_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rqt_py_common::msg::Val_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rqt_py_common__msg__Val
    std::shared_ptr<rqt_py_common::msg::Val_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rqt_py_common__msg__Val
    std::shared_ptr<rqt_py_common::msg::Val_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Val_ & other) const
  {
    if (this->floats != other.floats) {
      return false;
    }
    return true;
  }
  bool operator!=(const Val_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Val_

// alias to use template instance with default allocator
using Val =
  rqt_py_common::msg::Val_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rqt_py_common

#endif  // RQT_PY_COMMON__MSG__VAL__STRUCT_HPP_
