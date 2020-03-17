// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_py:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__CONSTANTS__STRUCT_HPP_
#define ROSIDL_GENERATOR_PY__MSG__CONSTANTS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_generator_py__msg__Constants __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_py__msg__Constants __declspec(deprecated)
#endif

namespace rosidl_generator_py
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Constants_
{
  using Type = Constants_<ContainerAllocator>;

  explicit Constants_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Constants_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
  static constexpr bool BOOL_CONST =
    1;
  static constexpr unsigned char BYTE_CONST =
    50;
  static constexpr uint8_t CHAR_CONST =
    100u;
  static constexpr float FLOAT32_CONST =
    1.125;
  static constexpr double FLOAT64_CONST =
    1.125;
  static constexpr int8_t INT8_CONST =
    -50;
  static constexpr uint8_t UINT8_CONST =
    200u;
  static constexpr int16_t INT16_CONST =
    -1000;
  static constexpr uint16_t UINT16_CONST =
    2000u;
  static constexpr int32_t INT32_CONST =
    -30000;
  static constexpr uint32_t UINT32_CONST =
    60000u;
  static constexpr int64_t INT64_CONST =
    -40000000;
  static constexpr uint64_t UINT64_CONST =
    50000000u;

  // pointer types
  using RawPtr =
    rosidl_generator_py::msg::Constants_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_py::msg::Constants_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Constants_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Constants_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_py__msg__Constants
    std::shared_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_py__msg__Constants
    std::shared_ptr<rosidl_generator_py::msg::Constants_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Constants_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Constants_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Constants_

// alias to use template instance with default allocator
using Constants =
  rosidl_generator_py::msg::Constants_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr bool Constants_<ContainerAllocator>::BOOL_CONST;
template<typename ContainerAllocator>
constexpr unsigned char Constants_<ContainerAllocator>::BYTE_CONST;
template<typename ContainerAllocator>
constexpr uint8_t Constants_<ContainerAllocator>::CHAR_CONST;
template<typename ContainerAllocator>
constexpr float Constants_<ContainerAllocator>::FLOAT32_CONST;
template<typename ContainerAllocator>
constexpr double Constants_<ContainerAllocator>::FLOAT64_CONST;
template<typename ContainerAllocator>
constexpr int8_t Constants_<ContainerAllocator>::INT8_CONST;
template<typename ContainerAllocator>
constexpr uint8_t Constants_<ContainerAllocator>::UINT8_CONST;
template<typename ContainerAllocator>
constexpr int16_t Constants_<ContainerAllocator>::INT16_CONST;
template<typename ContainerAllocator>
constexpr uint16_t Constants_<ContainerAllocator>::UINT16_CONST;
template<typename ContainerAllocator>
constexpr int32_t Constants_<ContainerAllocator>::INT32_CONST;
template<typename ContainerAllocator>
constexpr uint32_t Constants_<ContainerAllocator>::UINT32_CONST;
template<typename ContainerAllocator>
constexpr int64_t Constants_<ContainerAllocator>::INT64_CONST;
template<typename ContainerAllocator>
constexpr uint64_t Constants_<ContainerAllocator>::UINT64_CONST;

}  // namespace msg

}  // namespace rosidl_generator_py

#endif  // ROSIDL_GENERATOR_PY__MSG__CONSTANTS__STRUCT_HPP_