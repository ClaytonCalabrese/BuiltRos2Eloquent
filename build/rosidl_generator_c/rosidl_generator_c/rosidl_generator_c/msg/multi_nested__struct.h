// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rosidl_generator_c:msg/MultiNested.idl
// generated code does not contain a copyright notice

#ifndef ROSIDL_GENERATOR_C__MSG__MULTI_NESTED__STRUCT_H_
#define ROSIDL_GENERATOR_C__MSG__MULTI_NESTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'array_of_arrays'
// Member 'bounded_sequence_of_arrays'
// Member 'unbounded_sequence_of_arrays'
#include "rosidl_generator_c/msg/arrays__struct.h"
// Member 'array_of_bounded_sequences'
// Member 'bounded_sequence_of_bounded_sequences'
// Member 'unbounded_sequence_of_bounded_sequences'
#include "rosidl_generator_c/msg/bounded_sequences__struct.h"
// Member 'array_of_unbounded_sequences'
// Member 'bounded_sequence_of_unbounded_sequences'
// Member 'unbounded_sequence_of_unbounded_sequences'
#include "rosidl_generator_c/msg/unbounded_sequences__struct.h"

// constants for array fields with an upper bound
// bounded_sequence_of_arrays
enum
{
  rosidl_generator_c__msg__MultiNested__bounded_sequence_of_arrays__MAX_SIZE = 3
};
// bounded_sequence_of_bounded_sequences
enum
{
  rosidl_generator_c__msg__MultiNested__bounded_sequence_of_bounded_sequences__MAX_SIZE = 3
};
// bounded_sequence_of_unbounded_sequences
enum
{
  rosidl_generator_c__msg__MultiNested__bounded_sequence_of_unbounded_sequences__MAX_SIZE = 3
};

// Struct defined in msg/MultiNested in the package rosidl_generator_c.
typedef struct rosidl_generator_c__msg__MultiNested
{
  rosidl_generator_c__msg__Arrays array_of_arrays[3];
  rosidl_generator_c__msg__BoundedSequences array_of_bounded_sequences[3];
  rosidl_generator_c__msg__UnboundedSequences array_of_unbounded_sequences[3];
  rosidl_generator_c__msg__Arrays__Sequence bounded_sequence_of_arrays;
  rosidl_generator_c__msg__BoundedSequences__Sequence bounded_sequence_of_bounded_sequences;
  rosidl_generator_c__msg__UnboundedSequences__Sequence bounded_sequence_of_unbounded_sequences;
  rosidl_generator_c__msg__Arrays__Sequence unbounded_sequence_of_arrays;
  rosidl_generator_c__msg__BoundedSequences__Sequence unbounded_sequence_of_bounded_sequences;
  rosidl_generator_c__msg__UnboundedSequences__Sequence unbounded_sequence_of_unbounded_sequences;
} rosidl_generator_c__msg__MultiNested;

// Struct for a sequence of rosidl_generator_c__msg__MultiNested.
typedef struct rosidl_generator_c__msg__MultiNested__Sequence
{
  rosidl_generator_c__msg__MultiNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rosidl_generator_c__msg__MultiNested__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROSIDL_GENERATOR_C__MSG__MULTI_NESTED__STRUCT_H_
