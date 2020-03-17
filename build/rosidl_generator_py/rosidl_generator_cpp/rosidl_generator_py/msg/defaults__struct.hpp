// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_py:msg/Defaults.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_HPP_
#define ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_generator_py__msg__Defaults __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_py__msg__Defaults __declspec(deprecated)
#endif

namespace rosidl_generator_py
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Defaults_
{
  using Type = Defaults_<ContainerAllocator>;

  explicit Defaults_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_value = true;
      this->byte_value = 50;
      this->char_value = 100;
      this->float32_value = 1.125f;
      this->float64_value = 1.125;
      this->int8_value = -50;
      this->uint8_value = 200;
      this->int16_value = -1000;
      this->uint16_value = 2000;
      this->int32_value = -30000l;
      this->uint32_value = 60000ul;
      this->int64_value = -40000000ll;
      this->uint64_value = 50000000ull;
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->bool_value = false;
      this->byte_value = 0;
      this->char_value = 0;
      this->float32_value = 0.0f;
      this->float64_value = 0.0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
    }
  }

  explicit Defaults_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->bool_value = true;
      this->byte_value = 50;
      this->char_value = 100;
      this->float32_value = 1.125f;
      this->float64_value = 1.125;
      this->int8_value = -50;
      this->uint8_value = 200;
      this->int16_value = -1000;
      this->uint16_value = 2000;
      this->int32_value = -30000l;
      this->uint32_value = 60000ul;
      this->int64_value = -40000000ll;
      this->uint64_value = 50000000ull;
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      this->bool_value = false;
      this->byte_value = 0;
      this->char_value = 0;
      this->float32_value = 0.0f;
      this->float64_value = 0.0;
      this->int8_value = 0;
      this->uint8_value = 0;
      this->int16_value = 0;
      this->uint16_value = 0;
      this->int32_value = 0l;
      this->uint32_value = 0ul;
      this->int64_value = 0ll;
      this->uint64_value = 0ull;
    }
  }

  // field types and members
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;
  using _byte_value_type =
    unsigned char;
  _byte_value_type byte_value;
  using _char_value_type =
    uint8_t;
  _char_value_type char_value;
  using _float32_value_type =
    float;
  _float32_value_type float32_value;
  using _float64_value_type =
    double;
  _float64_value_type float64_value;
  using _int8_value_type =
    int8_t;
  _int8_value_type int8_value;
  using _uint8_value_type =
    uint8_t;
  _uint8_value_type uint8_value;
  using _int16_value_type =
    int16_t;
  _int16_value_type int16_value;
  using _uint16_value_type =
    uint16_t;
  _uint16_value_type uint16_value;
  using _int32_value_type =
    int32_t;
  _int32_value_type int32_value;
  using _uint32_value_type =
    uint32_t;
  _uint32_value_type uint32_value;
  using _int64_value_type =
    int64_t;
  _int64_value_type int64_value;
  using _uint64_value_type =
    uint64_t;
  _uint64_value_type uint64_value;

  // setters for named parameter idiom
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }
  Type & set__byte_value(
    const unsigned char & _arg)
  {
    this->byte_value = _arg;
    return *this;
  }
  Type & set__char_value(
    const uint8_t & _arg)
  {
    this->char_value = _arg;
    return *this;
  }
  Type & set__float32_value(
    const float & _arg)
  {
    this->float32_value = _arg;
    return *this;
  }
  Type & set__float64_value(
    const double & _arg)
  {
    this->float64_value = _arg;
    return *this;
  }
  Type & set__int8_value(
    const int8_t & _arg)
  {
    this->int8_value = _arg;
    return *this;
  }
  Type & set__uint8_value(
    const uint8_t & _arg)
  {
    this->uint8_value = _arg;
    return *this;
  }
  Type & set__int16_value(
    const int16_t & _arg)
  {
    this->int16_value = _arg;
    return *this;
  }
  Type & set__uint16_value(
    const uint16_t & _arg)
  {
    this->uint16_value = _arg;
    return *this;
  }
  Type & set__int32_value(
    const int32_t & _arg)
  {
    this->int32_value = _arg;
    return *this;
  }
  Type & set__uint32_value(
    const uint32_t & _arg)
  {
    this->uint32_value = _arg;
    return *this;
  }
  Type & set__int64_value(
    const int64_t & _arg)
  {
    this->int64_value = _arg;
    return *this;
  }
  Type & set__uint64_value(
    const uint64_t & _arg)
  {
    this->uint64_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_py::msg::Defaults_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_py::msg::Defaults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Defaults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::Defaults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_py__msg__Defaults
    std::shared_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_py__msg__Defaults
    std::shared_ptr<rosidl_generator_py::msg::Defaults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Defaults_ & other) const
  {
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->byte_value != other.byte_value) {
      return false;
    }
    if (this->char_value != other.char_value) {
      return false;
    }
    if (this->float32_value != other.float32_value) {
      return false;
    }
    if (this->float64_value != other.float64_value) {
      return false;
    }
    if (this->int8_value != other.int8_value) {
      return false;
    }
    if (this->uint8_value != other.uint8_value) {
      return false;
    }
    if (this->int16_value != other.int16_value) {
      return false;
    }
    if (this->uint16_value != other.uint16_value) {
      return false;
    }
    if (this->int32_value != other.int32_value) {
      return false;
    }
    if (this->uint32_value != other.uint32_value) {
      return false;
    }
    if (this->int64_value != other.int64_value) {
      return false;
    }
    if (this->uint64_value != other.uint64_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Defaults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Defaults_

// alias to use template instance with default allocator
using Defaults =
  rosidl_generator_py::msg::Defaults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_py

#endif  // ROSIDL_GENERATOR_PY__MSG__DEFAULTS__STRUCT_HPP_