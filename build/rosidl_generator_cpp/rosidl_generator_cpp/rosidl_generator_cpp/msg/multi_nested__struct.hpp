// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rosidl_generator_cpp:msg/MultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__MSG__MULTI_NESTED__STRUCT_HPP_
#define ROSIDL_GENERATOR_CPP__MSG__MULTI_NESTED__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'array_of_arrays'
// Member 'bounded_sequence_of_arrays'
// Member 'unbounded_sequence_of_arrays'
#include "rosidl_generator_cpp/msg/arrays__struct.hpp"
// Member 'array_of_bounded_sequences'
// Member 'bounded_sequence_of_bounded_sequences'
// Member 'unbounded_sequence_of_bounded_sequences'
#include "rosidl_generator_cpp/msg/bounded_sequences__struct.hpp"
// Member 'array_of_unbounded_sequences'
// Member 'bounded_sequence_of_unbounded_sequences'
// Member 'unbounded_sequence_of_unbounded_sequences'
#include "rosidl_generator_cpp/msg/unbounded_sequences__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rosidl_generator_cpp__msg__MultiNested __attribute__((deprecated))
#else
# define DEPRECATED__rosidl_generator_cpp__msg__MultiNested __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiNested_
{
  using Type = MultiNested_<ContainerAllocator>;

  explicit MultiNested_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->array_of_arrays.fill(rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>{_init});
      this->array_of_bounded_sequences.fill(rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>{_init});
      this->array_of_unbounded_sequences.fill(rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>{_init});
    }
  }

  explicit MultiNested_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : array_of_arrays(_alloc),
    array_of_bounded_sequences(_alloc),
    array_of_unbounded_sequences(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->array_of_arrays.fill(rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>{_alloc, _init});
      this->array_of_bounded_sequences.fill(rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>{_alloc, _init});
      this->array_of_unbounded_sequences.fill(rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _array_of_arrays_type =
    std::array<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, 3>;
  _array_of_arrays_type array_of_arrays;
  using _array_of_bounded_sequences_type =
    std::array<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, 3>;
  _array_of_bounded_sequences_type array_of_bounded_sequences;
  using _array_of_unbounded_sequences_type =
    std::array<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, 3>;
  _array_of_unbounded_sequences_type array_of_unbounded_sequences;
  using _bounded_sequence_of_arrays_type =
    rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>>::other>;
  _bounded_sequence_of_arrays_type bounded_sequence_of_arrays;
  using _bounded_sequence_of_bounded_sequences_type =
    rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>::other>;
  _bounded_sequence_of_bounded_sequences_type bounded_sequence_of_bounded_sequences;
  using _bounded_sequence_of_unbounded_sequences_type =
    rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>>::other>;
  _bounded_sequence_of_unbounded_sequences_type bounded_sequence_of_unbounded_sequences;
  using _unbounded_sequence_of_arrays_type =
    std::vector<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>>::other>;
  _unbounded_sequence_of_arrays_type unbounded_sequence_of_arrays;
  using _unbounded_sequence_of_bounded_sequences_type =
    std::vector<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>::other>;
  _unbounded_sequence_of_bounded_sequences_type unbounded_sequence_of_bounded_sequences;
  using _unbounded_sequence_of_unbounded_sequences_type =
    std::vector<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>>::other>;
  _unbounded_sequence_of_unbounded_sequences_type unbounded_sequence_of_unbounded_sequences;

  // setters for named parameter idiom
  Type & set__array_of_arrays(
    const std::array<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, 3> & _arg)
  {
    this->array_of_arrays = _arg;
    return *this;
  }
  Type & set__array_of_bounded_sequences(
    const std::array<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, 3> & _arg)
  {
    this->array_of_bounded_sequences = _arg;
    return *this;
  }
  Type & set__array_of_unbounded_sequences(
    const std::array<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, 3> & _arg)
  {
    this->array_of_unbounded_sequences = _arg;
    return *this;
  }
  Type & set__bounded_sequence_of_arrays(
    const rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>>::other> & _arg)
  {
    this->bounded_sequence_of_arrays = _arg;
    return *this;
  }
  Type & set__bounded_sequence_of_bounded_sequences(
    const rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>::other> & _arg)
  {
    this->bounded_sequence_of_bounded_sequences = _arg;
    return *this;
  }
  Type & set__bounded_sequence_of_unbounded_sequences(
    const rosidl_generator_cpp::BoundedVector<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, 3, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>>::other> & _arg)
  {
    this->bounded_sequence_of_unbounded_sequences = _arg;
    return *this;
  }
  Type & set__unbounded_sequence_of_arrays(
    const std::vector<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::Arrays_<ContainerAllocator>>::other> & _arg)
  {
    this->unbounded_sequence_of_arrays = _arg;
    return *this;
  }
  Type & set__unbounded_sequence_of_bounded_sequences(
    const std::vector<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::BoundedSequences_<ContainerAllocator>>::other> & _arg)
  {
    this->unbounded_sequence_of_bounded_sequences = _arg;
    return *this;
  }
  Type & set__unbounded_sequence_of_unbounded_sequences(
    const std::vector<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>, typename ContainerAllocator::template rebind<rosidl_generator_cpp::msg::UnboundedSequences_<ContainerAllocator>>::other> & _arg)
  {
    this->unbounded_sequence_of_unbounded_sequences = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rosidl_generator_cpp__msg__MultiNested
    std::shared_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rosidl_generator_cpp__msg__MultiNested
    std::shared_ptr<rosidl_generator_cpp::msg::MultiNested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiNested_ & other) const
  {
    if (this->array_of_arrays != other.array_of_arrays) {
      return false;
    }
    if (this->array_of_bounded_sequences != other.array_of_bounded_sequences) {
      return false;
    }
    if (this->array_of_unbounded_sequences != other.array_of_unbounded_sequences) {
      return false;
    }
    if (this->bounded_sequence_of_arrays != other.bounded_sequence_of_arrays) {
      return false;
    }
    if (this->bounded_sequence_of_bounded_sequences != other.bounded_sequence_of_bounded_sequences) {
      return false;
    }
    if (this->bounded_sequence_of_unbounded_sequences != other.bounded_sequence_of_unbounded_sequences) {
      return false;
    }
    if (this->unbounded_sequence_of_arrays != other.unbounded_sequence_of_arrays) {
      return false;
    }
    if (this->unbounded_sequence_of_bounded_sequences != other.unbounded_sequence_of_bounded_sequences) {
      return false;
    }
    if (this->unbounded_sequence_of_unbounded_sequences != other.unbounded_sequence_of_unbounded_sequences) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiNested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiNested_

// alias to use template instance with default allocator
using MultiNested =
  rosidl_generator_cpp::msg::MultiNested_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // ROSIDL_GENERATOR_CPP__MSG__MULTI_NESTED__STRUCT_HPP_
