// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__SRV__EMPTY__STRUCT_H_
#define ROSIDL_GENERATOR_CPP__SRV__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Empty in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__srv__Empty_Request
{
  uint8_t structure_needs_at_least_one_member;
} rosidl_generator_cpp__srv__Empty_Request;

// Struct for a sequence of rosidl_generator_cpp__srv__Empty_Request.
typedef struct rosidl_generator_cpp__srv__Empty_Request__Sequence
{
  rosidl_generator_cpp__srv__Empty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__srv__Empty_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Empty in the package rosidl_generator_cpp.
typedef struct rosidl_generator_cpp__srv__Empty_Response
{
  uint8_t structure_needs_at_least_one_member;
} rosidl_generator_cpp__srv__Empty_Response;

// Struct for a sequence of rosidl_generator_cpp__srv__Empty_Response.
typedef struct rosidl_generator_cpp__srv__Empty_Response__Sequence
{
  rosidl_generator_cpp__srv__Empty_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_cpp__srv__Empty_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__SRV__EMPTY__STRUCT_H_
