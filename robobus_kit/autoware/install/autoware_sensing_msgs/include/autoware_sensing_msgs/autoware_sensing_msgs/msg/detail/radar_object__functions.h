// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__FUNCTIONS_H_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "autoware_sensing_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "autoware_sensing_msgs/msg/detail/radar_object__struct.h"

/// Initialize msg/RadarObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * autoware_sensing_msgs__msg__RadarObject
 * )) before or use
 * autoware_sensing_msgs__msg__RadarObject__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__init(autoware_sensing_msgs__msg__RadarObject * msg);

/// Finalize msg/RadarObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__RadarObject__fini(autoware_sensing_msgs__msg__RadarObject * msg);

/// Create msg/RadarObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * autoware_sensing_msgs__msg__RadarObject__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
autoware_sensing_msgs__msg__RadarObject *
autoware_sensing_msgs__msg__RadarObject__create();

/// Destroy msg/RadarObject message.
/**
 * It calls
 * autoware_sensing_msgs__msg__RadarObject__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__RadarObject__destroy(autoware_sensing_msgs__msg__RadarObject * msg);

/// Check for msg/RadarObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__are_equal(const autoware_sensing_msgs__msg__RadarObject * lhs, const autoware_sensing_msgs__msg__RadarObject * rhs);

/// Copy a msg/RadarObject message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__copy(
  const autoware_sensing_msgs__msg__RadarObject * input,
  autoware_sensing_msgs__msg__RadarObject * output);

/// Initialize array of msg/RadarObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * autoware_sensing_msgs__msg__RadarObject__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__Sequence__init(autoware_sensing_msgs__msg__RadarObject__Sequence * array, size_t size);

/// Finalize array of msg/RadarObject messages.
/**
 * It calls
 * autoware_sensing_msgs__msg__RadarObject__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__RadarObject__Sequence__fini(autoware_sensing_msgs__msg__RadarObject__Sequence * array);

/// Create array of msg/RadarObject messages.
/**
 * It allocates the memory for the array and calls
 * autoware_sensing_msgs__msg__RadarObject__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
autoware_sensing_msgs__msg__RadarObject__Sequence *
autoware_sensing_msgs__msg__RadarObject__Sequence__create(size_t size);

/// Destroy array of msg/RadarObject messages.
/**
 * It calls
 * autoware_sensing_msgs__msg__RadarObject__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
void
autoware_sensing_msgs__msg__RadarObject__Sequence__destroy(autoware_sensing_msgs__msg__RadarObject__Sequence * array);

/// Check for msg/RadarObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__Sequence__are_equal(const autoware_sensing_msgs__msg__RadarObject__Sequence * lhs, const autoware_sensing_msgs__msg__RadarObject__Sequence * rhs);

/// Copy an array of msg/RadarObject messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_autoware_sensing_msgs
bool
autoware_sensing_msgs__msg__RadarObject__Sequence__copy(
  const autoware_sensing_msgs__msg__RadarObject__Sequence * input,
  autoware_sensing_msgs__msg__RadarObject__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__FUNCTIONS_H_
