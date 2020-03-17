// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_rclcpp:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_HPP_
#define TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test_rclcpp__srv__AddTwoInts_Request __attribute__((deprecated))
#else
# define DEPRECATED__test_rclcpp__srv__AddTwoInts_Request __declspec(deprecated)
#endif

namespace test_rclcpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInts_Request_
{
  using Type = AddTwoInts_Request_<ContainerAllocator>;

  explicit AddTwoInts_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  explicit AddTwoInts_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0ll;
      this->b = 0ll;
    }
  }

  // field types and members
  using _a_type =
    int64_t;
  _a_type a;
  using _b_type =
    int64_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int64_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int64_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_rclcpp__srv__AddTwoInts_Request
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_rclcpp__srv__AddTwoInts_Request
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInts_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInts_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoInts_Request_

// alias to use template instance with default allocator
using AddTwoInts_Request =
  test_rclcpp::srv::AddTwoInts_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_rclcpp


#ifndef _WIN32
# define DEPRECATED__test_rclcpp__srv__AddTwoInts_Response __attribute__((deprecated))
#else
# define DEPRECATED__test_rclcpp__srv__AddTwoInts_Response __declspec(deprecated)
#endif

namespace test_rclcpp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct AddTwoInts_Response_
{
  using Type = AddTwoInts_Response_<ContainerAllocator>;

  explicit AddTwoInts_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  explicit AddTwoInts_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0ll;
    }
  }

  // field types and members
  using _sum_type =
    int64_t;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const int64_t & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_rclcpp__srv__AddTwoInts_Response
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_rclcpp__srv__AddTwoInts_Response
    std::shared_ptr<test_rclcpp::srv::AddTwoInts_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddTwoInts_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddTwoInts_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddTwoInts_Response_

// alias to use template instance with default allocator
using AddTwoInts_Response =
  test_rclcpp::srv::AddTwoInts_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace test_rclcpp

namespace test_rclcpp
{

namespace srv
{

struct AddTwoInts
{
  using Request = test_rclcpp::srv::AddTwoInts_Request;
  using Response = test_rclcpp::srv::AddTwoInts_Response;
};

}  // namespace srv

}  // namespace test_rclcpp

#endif  // TEST_RCLCPP__SRV__ADD_TWO_INTS__STRUCT_HPP_
