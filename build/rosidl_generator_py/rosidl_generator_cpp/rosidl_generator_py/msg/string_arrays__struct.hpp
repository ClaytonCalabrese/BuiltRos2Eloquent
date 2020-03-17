// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_HPP_
#define ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__rosidl_generator_py__msg__StringArrays __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_py__msg__StringArrays __declspec(deprecated)
#endif

namespace rosidl_generator_py
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StringArrays_
{
  using Type = StringArrays_<ContainerAllocator>;

  explicit StringArrays_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->def_string_dynamic_array_value.resize(5);
      this->def_string_dynamic_array_value = {{"What"}, {"a"}, {"wonderful"}, {"world"}, {"!"}};
      this->def_string_static_array_value[0] = "Hello";
      this->def_string_static_array_value[1] = "World";
      this->def_string_static_array_value[2] = "!";
      this->def_string_bounded_array_value.resize(3);
      this->def_string_bounded_array_value = {{"Hello"}, {"World"}, {"!"}};
      this->def_various_quotes.resize(2);
      this->def_various_quotes = {{"H\"el'lo"}, {"Wo'r\"ld"}};
      this->def_various_commas.resize(4);
      this->def_various_commas = {{"Hel,lo"}, {",World"}, {"abcd"}, {"!,"}};
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->ub_string_static_array_value.begin(), this->ub_string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->string_static_array_value.begin(), this->string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->def_string_static_array_value.begin(), this->def_string_static_array_value.end(), "");
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->ub_string_static_array_value.begin(), this->ub_string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->string_static_array_value.begin(), this->string_static_array_value.end(), "");
    }
  }

  explicit StringArrays_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : ub_string_static_array_value(_alloc),
    string_static_array_value(_alloc),
    def_string_static_array_value(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->def_string_dynamic_array_value.resize(5);
      this->def_string_dynamic_array_value = {{"What"}, {"a"}, {"wonderful"}, {"world"}, {"!"}};
      this->def_string_static_array_value[0] = "Hello";
      this->def_string_static_array_value[1] = "World";
      this->def_string_static_array_value[2] = "!";
      this->def_string_bounded_array_value.resize(3);
      this->def_string_bounded_array_value = {{"Hello"}, {"World"}, {"!"}};
      this->def_various_quotes.resize(2);
      this->def_various_quotes = {{"H\"el'lo"}, {"Wo'r\"ld"}};
      this->def_various_commas.resize(4);
      this->def_various_commas = {{"Hel,lo"}, {",World"}, {"abcd"}, {"!,"}};
    } else if (rosidl_generator_cpp::MessageInitialization::ZERO == _init) {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->ub_string_static_array_value.begin(), this->ub_string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->string_static_array_value.begin(), this->string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->def_string_static_array_value.begin(), this->def_string_static_array_value.end(), "");
    }
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->ub_string_static_array_value.begin(), this->ub_string_static_array_value.end(), "");
      std::fill<typename std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>::iterator, std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>(this->string_static_array_value.begin(), this->string_static_array_value.end(), "");
    }
  }

  // field types and members
  using _ub_string_static_array_value_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>;
  _ub_string_static_array_value_type ub_string_static_array_value;
  using _ub_string_ub_array_value_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _ub_string_ub_array_value_type ub_string_ub_array_value;
  using _ub_string_dynamic_array_value_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _ub_string_dynamic_array_value_type ub_string_dynamic_array_value;
  using _string_dynamic_array_value_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_dynamic_array_value_type string_dynamic_array_value;
  using _string_static_array_value_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>;
  _string_static_array_value_type string_static_array_value;
  using _string_bounded_array_value_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _string_bounded_array_value_type string_bounded_array_value;
  using _def_string_dynamic_array_value_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _def_string_dynamic_array_value_type def_string_dynamic_array_value;
  using _def_string_static_array_value_type =
    std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3>;
  _def_string_static_array_value_type def_string_static_array_value;
  using _def_string_bounded_array_value_type =
    rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _def_string_bounded_array_value_type def_string_bounded_array_value;
  using _def_various_quotes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _def_various_quotes_type def_various_quotes;
  using _def_various_commas_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _def_various_commas_type def_various_commas;

  // setters for named parameter idiom
  Type & set__ub_string_static_array_value(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3> & _arg)
  {
    this->ub_string_static_array_value = _arg;
    return *this;
  }
  Type & set__ub_string_ub_array_value(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->ub_string_ub_array_value = _arg;
    return *this;
  }
  Type & set__ub_string_dynamic_array_value(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->ub_string_dynamic_array_value = _arg;
    return *this;
  }
  Type & set__string_dynamic_array_value(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_dynamic_array_value = _arg;
    return *this;
  }
  Type & set__string_static_array_value(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3> & _arg)
  {
    this->string_static_array_value = _arg;
    return *this;
  }
  Type & set__string_bounded_array_value(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->string_bounded_array_value = _arg;
    return *this;
  }
  Type & set__def_string_dynamic_array_value(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->def_string_dynamic_array_value = _arg;
    return *this;
  }
  Type & set__def_string_static_array_value(
    const std::array<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 3> & _arg)
  {
    this->def_string_static_array_value = _arg;
    return *this;
  }
  Type & set__def_string_bounded_array_value(
    const rosidl_generator_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, 10, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->def_string_bounded_array_value = _arg;
    return *this;
  }
  Type & set__def_various_quotes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->def_various_quotes = _arg;
    return *this;
  }
  Type & set__def_various_commas(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->def_various_commas = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_py::msg::StringArrays_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_py::msg::StringArrays_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::StringArrays_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_py::msg::StringArrays_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_py__msg__StringArrays
    std::shared_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_py__msg__StringArrays
    std::shared_ptr<rosidl_generator_py::msg::StringArrays_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StringArrays_ & other) const
  {
    if (this->ub_string_static_array_value != other.ub_string_static_array_value) {
      return false;
    }
    if (this->ub_string_ub_array_value != other.ub_string_ub_array_value) {
      return false;
    }
    if (this->ub_string_dynamic_array_value != other.ub_string_dynamic_array_value) {
      return false;
    }
    if (this->string_dynamic_array_value != other.string_dynamic_array_value) {
      return false;
    }
    if (this->string_static_array_value != other.string_static_array_value) {
      return false;
    }
    if (this->string_bounded_array_value != other.string_bounded_array_value) {
      return false;
    }
    if (this->def_string_dynamic_array_value != other.def_string_dynamic_array_value) {
      return false;
    }
    if (this->def_string_static_array_value != other.def_string_static_array_value) {
      return false;
    }
    if (this->def_string_bounded_array_value != other.def_string_bounded_array_value) {
      return false;
    }
    if (this->def_various_quotes != other.def_various_quotes) {
      return false;
    }
    if (this->def_various_commas != other.def_various_commas) {
      return false;
    }
    return true;
  }
  bool operator!=(const StringArrays_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StringArrays_

// alias to use template instance with default allocator
using StringArrays =
  rosidl_generator_py::msg::StringArrays_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_py

#endif  // ROSIDL_GENERATOR_PY__MSG__STRING_ARRAYS__STRUCT_HPP_
