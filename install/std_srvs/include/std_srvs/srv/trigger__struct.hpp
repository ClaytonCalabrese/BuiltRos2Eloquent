// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from std_srvs:srv/Trigger.idl
// generated code does not contain a copyright notice

#ifndef STD_SRVS__SRV__TRIGGER__STRUCT_HPP_
#define STD_SRVS__SRV__TRIGGER__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__Trigger_Request __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__Trigger_Request __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Request_
{
  using Type = Trigger_Request_<ContainerAllocator>;

  explicit Trigger_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Trigger_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    std_srvs::srv::Trigger_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::Trigger_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::Trigger_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::Trigger_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__Trigger_Request
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__Trigger_Request
    std::shared_ptr<std_srvs::srv::Trigger_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Request_

// alias to use template instance with default allocator
using Trigger_Request =
  std_srvs::srv::Trigger_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs


#ifndef _WIN32
# define DEPRECATED__std_srvs__srv__Trigger_Response __attribute__((deprecated))
#else
# define DEPRECATED__std_srvs__srv__Trigger_Response __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Trigger_Response_
{
  using Type = Trigger_Response_<ContainerAllocator>;

  explicit Trigger_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Trigger_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    std_srvs::srv::Trigger_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::Trigger_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::Trigger_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      std_srvs::srv::Trigger_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__std_srvs__srv__Trigger_Response
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__std_srvs__srv__Trigger_Response
    std::shared_ptr<std_srvs::srv::Trigger_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trigger_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trigger_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trigger_Response_

// alias to use template instance with default allocator
using Trigger_Response =
  std_srvs::srv::Trigger_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace std_srvs

namespace std_srvs
{

namespace srv
{

struct Trigger
{
  using Request = std_srvs::srv::Trigger_Request;
  using Response = std_srvs::srv::Trigger_Response;
};

}  // namespace srv

}  // namespace std_srvs

#endif  // STD_SRVS__SRV__TRIGGER__STRUCT_HPP_