// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_cpp:srv/Arrays.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_CPP__SRV__ARRAYS__FUNCTIONS_H_
#define ROSIDL_GENERATOR_CPP__SRV__ARRAYS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rosidl_generator_cpp/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_generator_cpp/srv/arrays__struct.h"

/// Initialize srv/Arrays message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosidl_generator_cpp__srv__Arrays_Request
 * )) before or use
 * rosidl_generator_cpp__srv__Arrays_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
bool
rosidl_generator_cpp__srv__Arrays_Request__init(rosidl_generator_cpp__srv__Arrays_Request * msg);

/// Finalize srv/Arrays message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Request__fini(rosidl_generator_cpp__srv__Arrays_Request * msg);

/// Create srv/Arrays message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosidl_generator_cpp__srv__Arrays_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
rosidl_generator_cpp__srv__Arrays_Request *
rosidl_generator_cpp__srv__Arrays_Request__create();

/// Destroy srv/Arrays message.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Request__destroy(rosidl_generator_cpp__srv__Arrays_Request * msg);


/// Initialize array of srv/Arrays messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosidl_generator_cpp__srv__Arrays_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
bool
rosidl_generator_cpp__srv__Arrays_Request__Sequence__init(rosidl_generator_cpp__srv__Arrays_Request__Sequence * array, size_t size);

/// Finalize array of srv/Arrays messages.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Request__Sequence__fini(rosidl_generator_cpp__srv__Arrays_Request__Sequence * array);

/// Create array of srv/Arrays messages.
/**
 * It allocates the memory for the array and calls
 * rosidl_generator_cpp__srv__Arrays_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
rosidl_generator_cpp__srv__Arrays_Request__Sequence *
rosidl_generator_cpp__srv__Arrays_Request__Sequence__create(size_t size);

/// Destroy array of srv/Arrays messages.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Request__Sequence__destroy(rosidl_generator_cpp__srv__Arrays_Request__Sequence * array);

/// Initialize srv/Arrays message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rosidl_generator_cpp__srv__Arrays_Response
 * )) before or use
 * rosidl_generator_cpp__srv__Arrays_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
bool
rosidl_generator_cpp__srv__Arrays_Response__init(rosidl_generator_cpp__srv__Arrays_Response * msg);

/// Finalize srv/Arrays message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Response__fini(rosidl_generator_cpp__srv__Arrays_Response * msg);

/// Create srv/Arrays message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rosidl_generator_cpp__srv__Arrays_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
rosidl_generator_cpp__srv__Arrays_Response *
rosidl_generator_cpp__srv__Arrays_Response__create();

/// Destroy srv/Arrays message.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Response__destroy(rosidl_generator_cpp__srv__Arrays_Response * msg);


/// Initialize array of srv/Arrays messages.
/**
 * It allocates the memory for the number of elements and calls
 * rosidl_generator_cpp__srv__Arrays_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
bool
rosidl_generator_cpp__srv__Arrays_Response__Sequence__init(rosidl_generator_cpp__srv__Arrays_Response__Sequence * array, size_t size);

/// Finalize array of srv/Arrays messages.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Response__Sequence__fini(rosidl_generator_cpp__srv__Arrays_Response__Sequence * array);

/// Create array of srv/Arrays messages.
/**
 * It allocates the memory for the array and calls
 * rosidl_generator_cpp__srv__Arrays_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
rosidl_generator_cpp__srv__Arrays_Response__Sequence *
rosidl_generator_cpp__srv__Arrays_Response__Sequence__create(size_t size);

/// Destroy array of srv/Arrays messages.
/**
 * It calls
 * rosidl_generator_cpp__srv__Arrays_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rosidl_generator_cpp
void
rosidl_generator_cpp__srv__Arrays_Response__Sequence__destroy(rosidl_generator_cpp__srv__Arrays_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_CPP__SRV__ARRAYS__FUNCTIONS_H_
