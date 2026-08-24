// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pix_robobus_driver_msgs:msg/VaPowerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__FUNCTIONS_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pix_robobus_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pix_robobus_driver_msgs/msg/detail/va_power_sta_fb__struct.h"

/// Initialize msg/VaPowerStaFb message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pix_robobus_driver_msgs__msg__VaPowerStaFb
 * )) before or use
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__init(pix_robobus_driver_msgs__msg__VaPowerStaFb * msg);

/// Finalize msg/VaPowerStaFb message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaPowerStaFb__fini(pix_robobus_driver_msgs__msg__VaPowerStaFb * msg);

/// Create msg/VaPowerStaFb message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaPowerStaFb *
pix_robobus_driver_msgs__msg__VaPowerStaFb__create();

/// Destroy msg/VaPowerStaFb message.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaPowerStaFb__destroy(pix_robobus_driver_msgs__msg__VaPowerStaFb * msg);

/// Check for msg/VaPowerStaFb message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__are_equal(const pix_robobus_driver_msgs__msg__VaPowerStaFb * lhs, const pix_robobus_driver_msgs__msg__VaPowerStaFb * rhs);

/// Copy a msg/VaPowerStaFb message.
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
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__copy(
  const pix_robobus_driver_msgs__msg__VaPowerStaFb * input,
  pix_robobus_driver_msgs__msg__VaPowerStaFb * output);

/// Initialize array of msg/VaPowerStaFb messages.
/**
 * It allocates the memory for the number of elements and calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__init(pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * array, size_t size);

/// Finalize array of msg/VaPowerStaFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * array);

/// Create array of msg/VaPowerStaFb messages.
/**
 * It allocates the memory for the array and calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence *
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__create(size_t size);

/// Destroy array of msg/VaPowerStaFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * array);

/// Check for msg/VaPowerStaFb message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * rhs);

/// Copy an array of msg/VaPowerStaFb messages.
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
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__FUNCTIONS_H_
