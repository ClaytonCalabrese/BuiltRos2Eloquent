// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_communication:msg/FieldsWithSameType.idl
// generated code does not contain a copyright notice

#ifndef TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__FUNCTIONS_H_
#define TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "test_communication/msg/rosidl_generator_c__visibility_control.h"

#include "test_communication/msg/fields_with_same_type__struct.h"

/// Initialize msg/FieldsWithSameType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * test_communication__msg__FieldsWithSameType
 * )) before or use
 * test_communication__msg__FieldsWithSameType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
bool
test_communication__msg__FieldsWithSameType__init(test_communication__msg__FieldsWithSameType * msg);

/// Finalize msg/FieldsWithSameType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__FieldsWithSameType__fini(test_communication__msg__FieldsWithSameType * msg);

/// Create msg/FieldsWithSameType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * test_communication__msg__FieldsWithSameType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
test_communication__msg__FieldsWithSameType *
test_communication__msg__FieldsWithSameType__create();

/// Destroy msg/FieldsWithSameType message.
/**
 * It calls
 * test_communication__msg__FieldsWithSameType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__FieldsWithSameType__destroy(test_communication__msg__FieldsWithSameType * msg);


/// Initialize array of msg/FieldsWithSameType messages.
/**
 * It allocates the memory for the number of elements and calls
 * test_communication__msg__FieldsWithSameType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
bool
test_communication__msg__FieldsWithSameType__Sequence__init(test_communication__msg__FieldsWithSameType__Sequence * array, size_t size);

/// Finalize array of msg/FieldsWithSameType messages.
/**
 * It calls
 * test_communication__msg__FieldsWithSameType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__FieldsWithSameType__Sequence__fini(test_communication__msg__FieldsWithSameType__Sequence * array);

/// Create array of msg/FieldsWithSameType messages.
/**
 * It allocates the memory for the array and calls
 * test_communication__msg__FieldsWithSameType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
test_communication__msg__FieldsWithSameType__Sequence *
test_communication__msg__FieldsWithSameType__Sequence__create(size_t size);

/// Destroy array of msg/FieldsWithSameType messages.
/**
 * It calls
 * test_communication__msg__FieldsWithSameType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_test_communication
void
test_communication__msg__FieldsWithSameType__Sequence__destroy(test_communication__msg__FieldsWithSameType__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TEST_COMMUNICATION__MSG__FIELDS_WITH_SAME_TYPE__FUNCTIONS_H_
