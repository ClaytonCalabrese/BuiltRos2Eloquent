// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__VAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define RQT_PY_COMMON__MSG__VAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rqt_py_common/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rqt_py_common/msg/val__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace rqt_py_common
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rqt_py_common
cdr_serialize(
  const rqt_py_common::msg::Val & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rqt_py_common
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rqt_py_common::msg::Val & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rqt_py_common
get_serialized_size(
  const rqt_py_common::msg::Val & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rqt_py_common
max_serialized_size_Val(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rqt_py_common

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rqt_py_common
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rqt_py_common, msg, Val)();

#ifdef __cplusplus
}
#endif

#endif  // RQT_PY_COMMON__MSG__VAL__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
