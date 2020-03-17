// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "logging_demo/srv/config_logger__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace logging_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigLogger_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigLogger_Request_type_support_ids_t;

static const _ConfigLogger_Request_type_support_ids_t _ConfigLogger_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigLogger_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigLogger_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigLogger_Request_type_support_symbol_names_t _ConfigLogger_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, logging_demo, srv, ConfigLogger_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, logging_demo, srv, ConfigLogger_Request)),
  }
};

typedef struct _ConfigLogger_Request_type_support_data_t
{
  void * data[2];
} _ConfigLogger_Request_type_support_data_t;

static _ConfigLogger_Request_type_support_data_t _ConfigLogger_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigLogger_Request_message_typesupport_map = {
  2,
  "logging_demo",
  &_ConfigLogger_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigLogger_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigLogger_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigLogger_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigLogger_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<logging_demo::srv::ConfigLogger_Request>()
{
  return &::logging_demo::srv::rosidl_typesupport_cpp::ConfigLogger_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, logging_demo, srv, ConfigLogger_Request)() {
  return get_message_type_support_handle<logging_demo::srv::ConfigLogger_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "logging_demo/srv/config_logger__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace logging_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigLogger_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigLogger_Response_type_support_ids_t;

static const _ConfigLogger_Response_type_support_ids_t _ConfigLogger_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigLogger_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigLogger_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigLogger_Response_type_support_symbol_names_t _ConfigLogger_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, logging_demo, srv, ConfigLogger_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, logging_demo, srv, ConfigLogger_Response)),
  }
};

typedef struct _ConfigLogger_Response_type_support_data_t
{
  void * data[2];
} _ConfigLogger_Response_type_support_data_t;

static _ConfigLogger_Response_type_support_data_t _ConfigLogger_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigLogger_Response_message_typesupport_map = {
  2,
  "logging_demo",
  &_ConfigLogger_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ConfigLogger_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ConfigLogger_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ConfigLogger_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigLogger_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<logging_demo::srv::ConfigLogger_Response>()
{
  return &::logging_demo::srv::rosidl_typesupport_cpp::ConfigLogger_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, logging_demo, srv, ConfigLogger_Response)() {
  return get_message_type_support_handle<logging_demo::srv::ConfigLogger_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "logging_demo/srv/config_logger__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace logging_demo
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ConfigLogger_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ConfigLogger_type_support_ids_t;

static const _ConfigLogger_type_support_ids_t _ConfigLogger_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ConfigLogger_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ConfigLogger_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ConfigLogger_type_support_symbol_names_t _ConfigLogger_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, logging_demo, srv, ConfigLogger)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, logging_demo, srv, ConfigLogger)),
  }
};

typedef struct _ConfigLogger_type_support_data_t
{
  void * data[2];
} _ConfigLogger_type_support_data_t;

static _ConfigLogger_type_support_data_t _ConfigLogger_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ConfigLogger_service_typesupport_map = {
  2,
  "logging_demo",
  &_ConfigLogger_service_typesupport_ids.typesupport_identifier[0],
  &_ConfigLogger_service_typesupport_symbol_names.symbol_name[0],
  &_ConfigLogger_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ConfigLogger_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ConfigLogger_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace logging_demo

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<logging_demo::srv::ConfigLogger>()
{
  return &::logging_demo::srv::rosidl_typesupport_cpp::ConfigLogger_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
