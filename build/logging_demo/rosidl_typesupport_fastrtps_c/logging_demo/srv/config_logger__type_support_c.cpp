// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from logging_demo:srv/ConfigLogger.idl
// generated code does not contain a copyright notice
#include "logging_demo/srv/config_logger__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "logging_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "logging_demo/srv/config_logger__struct.h"
#include "logging_demo/srv/config_logger__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // level, logger_name
#include "rosidl_generator_c/string_functions.h"  // level, logger_name

// forward declare type support functions


using _ConfigLogger_Request__ros_msg_type = logging_demo__srv__ConfigLogger_Request;

static bool _ConfigLogger_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigLogger_Request__ros_msg_type * ros_message = static_cast<const _ConfigLogger_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: logger_name
  {
    const rosidl_generator_c__String * str = &ros_message->logger_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: level
  {
    const rosidl_generator_c__String * str = &ros_message->level;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ConfigLogger_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigLogger_Request__ros_msg_type * ros_message = static_cast<_ConfigLogger_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: logger_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->logger_name.data) {
      rosidl_generator_c__String__init(&ros_message->logger_name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->logger_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'logger_name'\n");
      return false;
    }
  }

  // Field name: level
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->level.data) {
      rosidl_generator_c__String__init(&ros_message->level);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->level,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'level'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logging_demo
size_t get_serialized_size_logging_demo__srv__ConfigLogger_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigLogger_Request__ros_msg_type * ros_message = static_cast<const _ConfigLogger_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name logger_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->logger_name.size + 1);
  // field.name level
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->level.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigLogger_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_logging_demo__srv__ConfigLogger_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logging_demo
size_t max_serialized_size_logging_demo__srv__ConfigLogger_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: logger_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: level
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigLogger_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_logging_demo__srv__ConfigLogger_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigLogger_Request = {
  "logging_demo::srv",
  "ConfigLogger_Request",
  _ConfigLogger_Request__cdr_serialize,
  _ConfigLogger_Request__cdr_deserialize,
  _ConfigLogger_Request__get_serialized_size,
  _ConfigLogger_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConfigLogger_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigLogger_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logging_demo, srv, ConfigLogger_Request)() {
  return &_ConfigLogger_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "logging_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "logging_demo/srv/config_logger__struct.h"
// already included above
// #include "logging_demo/srv/config_logger__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ConfigLogger_Response__ros_msg_type = logging_demo__srv__ConfigLogger_Response;

static bool _ConfigLogger_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConfigLogger_Response__ros_msg_type * ros_message = static_cast<const _ConfigLogger_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ConfigLogger_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConfigLogger_Response__ros_msg_type * ros_message = static_cast<_ConfigLogger_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logging_demo
size_t get_serialized_size_logging_demo__srv__ConfigLogger_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConfigLogger_Response__ros_msg_type * ros_message = static_cast<const _ConfigLogger_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConfigLogger_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_logging_demo__srv__ConfigLogger_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_logging_demo
size_t max_serialized_size_logging_demo__srv__ConfigLogger_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ConfigLogger_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_logging_demo__srv__ConfigLogger_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConfigLogger_Response = {
  "logging_demo::srv",
  "ConfigLogger_Response",
  _ConfigLogger_Response__cdr_serialize,
  _ConfigLogger_Response__cdr_deserialize,
  _ConfigLogger_Response__get_serialized_size,
  _ConfigLogger_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConfigLogger_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConfigLogger_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logging_demo, srv, ConfigLogger_Response)() {
  return &_ConfigLogger_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "logging_demo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "logging_demo/srv/config_logger.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConfigLogger__callbacks = {
  "logging_demo::srv",
  "ConfigLogger",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logging_demo, srv, ConfigLogger_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logging_demo, srv, ConfigLogger_Response)(),
};

static rosidl_service_type_support_t ConfigLogger__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConfigLogger__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, logging_demo, srv, ConfigLogger)() {
  return &ConfigLogger__handle;
}

#if defined(__cplusplus)
}
#endif
