// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rqt_py_common:msg/ArrayVal.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_HPP_
#define RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'vals'
#include "rqt_py_common/msg/val__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rqt_py_common__msg__ArrayVal __attribute__((deprecated))
#else
# define DEPRECATED__rqt_py_common__msg__ArrayVal __declspec(deprecated)
#endif

namespace rqt_py_common
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArrayVal_
{
  using Type = ArrayVal_<ContainerAllocator>;

  explicit ArrayVal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->vals.fill(rqt_py_common::msg::Val_<ContainerAllocator>{_init});
    }
  }

  explicit ArrayVal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : vals(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->vals.fill(rqt_py_common::msg::Val_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _vals_type =
    std::array<rqt_py_common::msg::Val_<ContainerAllocator>, 5>;
  _vals_type vals;

  // setters for named parameter idiom
  Type & set__vals(
    const std::array<rqt_py_common::msg::Val_<ContainerAllocator>, 5> & _arg)
  {
    this->vals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rqt_py_common::msg::ArrayVal_<ContainerAllocator> *;
  using ConstRawPtr =
    const rqt_py_common::msg::ArrayVal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rqt_py_common::msg::ArrayVal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rqt_py_common::msg::ArrayVal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rqt_py_common__msg__ArrayVal
    std::shared_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rqt_py_common__msg__ArrayVal
    std::shared_ptr<rqt_py_common::msg::ArrayVal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArrayVal_ & other) const
  {
    if (this->vals != other.vals) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArrayVal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArrayVal_

// alias to use template instance with default allocator
using ArrayVal =
  rqt_py_common::msg::ArrayVal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rqt_py_common

#endif  // RQT_PY_COMMON__MSG__ARRAY_VAL__STRUCT_HPP_
