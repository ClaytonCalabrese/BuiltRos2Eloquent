// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rqt_py_common:msg/ArrayVal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rqt_py_common/msg/array_val__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rqt_py_common
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArrayVal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArrayVal_type_support_ids_t;

static const _ArrayVal_type_support_ids_t _ArrayVal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArrayVal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArrayVal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArrayVal_type_support_symbol_names_t _ArrayVal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rqt_py_common, msg, ArrayVal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rqt_py_common, msg, ArrayVal)),
  }
};

typedef struct _ArrayVal_type_support_data_t
{
  void * data[2];
} _ArrayVal_type_support_data_t;

static _ArrayVal_type_support_data_t _ArrayVal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArrayVal_message_typesupport_map = {
  2,
  "rqt_py_common",
  &_ArrayVal_message_typesupport_ids.typesupport_identifier[0],
  &_ArrayVal_message_typesupport_symbol_names.symbol_name[0],
  &_ArrayVal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArrayVal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArrayVal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace rqt_py_common

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rqt_py_common::msg::ArrayVal>()
{
  return &::rqt_py_common::msg::rosidl_typesupport_cpp::ArrayVal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rqt_py_common, msg, ArrayVal)() {
  return get_message_type_support_handle<rqt_py_common::msg::ArrayVal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
