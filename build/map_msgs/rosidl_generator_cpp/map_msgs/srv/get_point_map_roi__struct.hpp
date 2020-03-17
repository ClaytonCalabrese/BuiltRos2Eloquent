// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from map_msgs:srv/GetPointMapROI.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__GET_POINT_MAP_ROI__STRUCT_HPP_
#define MAP_MSGS__SRV__GET_POINT_MAP_ROI__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__map_msgs__srv__GetPointMapROI_Request __attribute__((deprecated))
#else
# define DEPRECATED__map_msgs__srv__GetPointMapROI_Request __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointMapROI_Request_
{
  using Type = GetPointMapROI_Request_<ContainerAllocator>;

  explicit GetPointMapROI_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->r = 0.0;
      this->l_x = 0.0;
      this->l_y = 0.0;
      this->l_z = 0.0;
    }
  }

  explicit GetPointMapROI_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->r = 0.0;
      this->l_x = 0.0;
      this->l_y = 0.0;
      this->l_z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _r_type =
    double;
  _r_type r;
  using _l_x_type =
    double;
  _l_x_type l_x;
  using _l_y_type =
    double;
  _l_y_type l_y;
  using _l_z_type =
    double;
  _l_z_type l_z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__l_x(
    const double & _arg)
  {
    this->l_x = _arg;
    return *this;
  }
  Type & set__l_y(
    const double & _arg)
  {
    this->l_y = _arg;
    return *this;
  }
  Type & set__l_z(
    const double & _arg)
  {
    this->l_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_msgs__srv__GetPointMapROI_Request
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_msgs__srv__GetPointMapROI_Request
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointMapROI_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->l_x != other.l_x) {
      return false;
    }
    if (this->l_y != other.l_y) {
      return false;
    }
    if (this->l_z != other.l_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointMapROI_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointMapROI_Request_

// alias to use template instance with default allocator
using GetPointMapROI_Request =
  map_msgs::srv::GetPointMapROI_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs


// Include directives for member types
// Member 'sub_map'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__map_msgs__srv__GetPointMapROI_Response __attribute__((deprecated))
#else
# define DEPRECATED__map_msgs__srv__GetPointMapROI_Response __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPointMapROI_Response_
{
  using Type = GetPointMapROI_Response_<ContainerAllocator>;

  explicit GetPointMapROI_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sub_map(_init)
  {
    (void)_init;
  }

  explicit GetPointMapROI_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : sub_map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _sub_map_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _sub_map_type sub_map;

  // setters for named parameter idiom
  Type & set__sub_map(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->sub_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_msgs__srv__GetPointMapROI_Response
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_msgs__srv__GetPointMapROI_Response
    std::shared_ptr<map_msgs::srv::GetPointMapROI_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPointMapROI_Response_ & other) const
  {
    if (this->sub_map != other.sub_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPointMapROI_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPointMapROI_Response_

// alias to use template instance with default allocator
using GetPointMapROI_Response =
  map_msgs::srv::GetPointMapROI_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs

namespace map_msgs
{

namespace srv
{

struct GetPointMapROI
{
  using Request = map_msgs::srv::GetPointMapROI_Request;
  using Response = map_msgs::srv::GetPointMapROI_Response;
};

}  // namespace srv

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__GET_POINT_MAP_ROI__STRUCT_HPP_
