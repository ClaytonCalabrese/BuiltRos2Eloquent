// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_c:msg/Constants.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_C__MSG__CONSTANTS__FUNCTIONS_H_
#define ROSIDL_GENERATOR_C__MSG__CONSTANTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosidl_generator_c/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_generator_c/msg/constants__struct.h"

/// Initialize msg/Constants message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosidl_generator_c__msg__Constants
 * )) before or use
 * rosidl_generator_c__msg__Constants__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Constants__init(rosidl_generator_c__msg__Constants * msg);

/// Finalize msg/Constants message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Constants__fini(rosidl_generator_c__msg__Constants * msg);

/// Create msg/Constants message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosidl_generator_c__msg__Constants__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
rosidl_generator_c__msg__Constants *
rosidl_generator_c__msg__Constants__create();

/// Destroy msg/Constants message.
/**
 * It calls
 * rosidl_generator_c__msg__Constants__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Constants__destroy(rosidl_generator_c__msg__Constants * msg);


/// Initialize array of msg/Constants messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosidl_generator_c__msg__Constants__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
bool
rosidl_generator_c__msg__Constants__Sequence__init(rosidl_generator_c__msg__Constants__Sequence * array, size_t size);

/// Finalize array of msg/Constants messages.
/**
 * It calls
 * rosidl_generator_c__msg__Constants__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Constants__Sequence__fini(rosidl_generator_c__msg__Constants__Sequence * array);

/// Create array of msg/Constants messages.
/**
 * It allocates the memory for the array and calls
 * rosidl_generator_c__msg__Constants__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
rosidl_generator_c__msg__Constants__Sequence *
rosidl_generator_c__msg__Constants__Sequence__create(size_t size);

/// Destroy array of msg/Constants messages.
/**
 * It calls
 * rosidl_generator_c__msg__Constants__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_c
void
rosidl_generator_c__msg__Constants__Sequence__destroy(rosidl_generator_c__msg__Constants__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__MSG__CONSTANTS__FUNCTIONS_H_
