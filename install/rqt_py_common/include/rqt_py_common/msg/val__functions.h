// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rqt_py_common:msg/Val.idl
// generated code does not contain a copyright notice

#ifndef RQT_PY_COMMON__MSG__VAL__FUNCTIONS_H_
#define RQT_PY_COMMON__MSG__VAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rqt_py_common/msg/rosidl_generator_c__visibility_control.h"

#include "rqt_py_common/msg/val__struct.h"

/// Initialize msg/Val message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rqt_py_common__msg__Val
 * )) before or use
 * rqt_py_common__msg__Val__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
bool
rqt_py_common__msg__Val__init(rqt_py_common__msg__Val * msg);

/// Finalize msg/Val message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
void
rqt_py_common__msg__Val__fini(rqt_py_common__msg__Val * msg);

/// Create msg/Val message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rqt_py_common__msg__Val__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
rqt_py_common__msg__Val *
rqt_py_common__msg__Val__create();

/// Destroy msg/Val message.
/**
 * It calls
 * rqt_py_common__msg__Val__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
void
rqt_py_common__msg__Val__destroy(rqt_py_common__msg__Val * msg);


/// Initialize array of msg/Val messages.
/**
 * It allocates the memory for the number of elements and calls
 * rqt_py_common__msg__Val__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
bool
rqt_py_common__msg__Val__Sequence__init(rqt_py_common__msg__Val__Sequence * array, size_t size);

/// Finalize array of msg/Val messages.
/**
 * It calls
 * rqt_py_common__msg__Val__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
void
rqt_py_common__msg__Val__Sequence__fini(rqt_py_common__msg__Val__Sequence * array);

/// Create array of msg/Val messages.
/**
 * It allocates the memory for the array and calls
 * rqt_py_common__msg__Val__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
rqt_py_common__msg__Val__Sequence *
rqt_py_common__msg__Val__Sequence__create(size_t size);

/// Destroy array of msg/Val messages.
/**
 * It calls
 * rqt_py_common__msg__Val__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rqt_py_common
void
rqt_py_common__msg__Val__Sequence__destroy(rqt_py_common__msg__Val__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RQT_PY_COMMON__MSG__VAL__FUNCTIONS_H_
