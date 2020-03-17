// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rcl_interfaces:srv/SetParameters.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__SET_PARAMETERS__FUNCTIONS_H_
#define RCL_INTERFACES__SRV__SET_PARAMETERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "rcl_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "rcl_interfaces/srv/set_parameters__struct.h"

/// Initialize srv/SetParameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rcl_interfaces__srv__SetParameters_Request
 * )) before or use
 * rcl_interfaces__srv__SetParameters_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__srv__SetParameters_Request__init(rcl_interfaces__srv__SetParameters_Request * msg);

/// Finalize srv/SetParameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Request__fini(rcl_interfaces__srv__SetParameters_Request * msg);

/// Create srv/SetParameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rcl_interfaces__srv__SetParameters_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__srv__SetParameters_Request *
rcl_interfaces__srv__SetParameters_Request__create();

/// Destroy srv/SetParameters message.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Request__destroy(rcl_interfaces__srv__SetParameters_Request * msg);


/// Initialize array of srv/SetParameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * rcl_interfaces__srv__SetParameters_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__srv__SetParameters_Request__Sequence__init(rcl_interfaces__srv__SetParameters_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetParameters messages.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Request__Sequence__fini(rcl_interfaces__srv__SetParameters_Request__Sequence * array);

/// Create array of srv/SetParameters messages.
/**
 * It allocates the memory for the array and calls
 * rcl_interfaces__srv__SetParameters_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__srv__SetParameters_Request__Sequence *
rcl_interfaces__srv__SetParameters_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetParameters messages.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Request__Sequence__destroy(rcl_interfaces__srv__SetParameters_Request__Sequence * array);

/// Initialize srv/SetParameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rcl_interfaces__srv__SetParameters_Response
 * )) before or use
 * rcl_interfaces__srv__SetParameters_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__srv__SetParameters_Response__init(rcl_interfaces__srv__SetParameters_Response * msg);

/// Finalize srv/SetParameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Response__fini(rcl_interfaces__srv__SetParameters_Response * msg);

/// Create srv/SetParameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rcl_interfaces__srv__SetParameters_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__srv__SetParameters_Response *
rcl_interfaces__srv__SetParameters_Response__create();

/// Destroy srv/SetParameters message.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Response__destroy(rcl_interfaces__srv__SetParameters_Response * msg);


/// Initialize array of srv/SetParameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * rcl_interfaces__srv__SetParameters_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
bool
rcl_interfaces__srv__SetParameters_Response__Sequence__init(rcl_interfaces__srv__SetParameters_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetParameters messages.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Response__Sequence__fini(rcl_interfaces__srv__SetParameters_Response__Sequence * array);

/// Create array of srv/SetParameters messages.
/**
 * It allocates the memory for the array and calls
 * rcl_interfaces__srv__SetParameters_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
rcl_interfaces__srv__SetParameters_Response__Sequence *
rcl_interfaces__srv__SetParameters_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetParameters messages.
/**
 * It calls
 * rcl_interfaces__srv__SetParameters_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rcl_interfaces
void
rcl_interfaces__srv__SetParameters_Response__Sequence__destroy(rcl_interfaces__srv__SetParameters_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RCL_INTERFACES__SRV__SET_PARAMETERS__FUNCTIONS_H_
