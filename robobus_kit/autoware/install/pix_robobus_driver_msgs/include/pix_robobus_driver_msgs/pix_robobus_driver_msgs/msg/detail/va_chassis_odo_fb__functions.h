// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pix_robobus_driver_msgs:msg/VaChassisOdoFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__FUNCTIONS_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pix_robobus_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_odo_fb__struct.h"

/// Initialize msg/VaChassisOdoFb message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb
 * )) before or use
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisOdoFb__init(pix_robobus_driver_msgs__msg__VaChassisOdoFb * msg);

/// Finalize msg/VaChassisOdoFb message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisOdoFb__fini(pix_robobus_driver_msgs__msg__VaChassisOdoFb * msg);

/// Create msg/VaChassisOdoFb message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaChassisOdoFb *
pix_robobus_driver_msgs__msg__VaChassisOdoFb__create();

/// Destroy msg/VaChassisOdoFb message.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisOdoFb__destroy(pix_robobus_driver_msgs__msg__VaChassisOdoFb * msg);

/// Check for msg/VaChassisOdoFb message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisOdoFb__are_equal(const pix_robobus_driver_msgs__msg__VaChassisOdoFb * lhs, const pix_robobus_driver_msgs__msg__VaChassisOdoFb * rhs);

/// Copy a msg/VaChassisOdoFb message.
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
pix_robobus_driver_msgs__msg__VaChassisOdoFb__copy(
  const pix_robobus_driver_msgs__msg__VaChassisOdoFb * input,
  pix_robobus_driver_msgs__msg__VaChassisOdoFb * output);

/// Initialize array of msg/VaChassisOdoFb messages.
/**
 * It allocates the memory for the number of elements and calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__init(pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * array, size_t size);

/// Finalize array of msg/VaChassisOdoFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * array);

/// Create array of msg/VaChassisOdoFb messages.
/**
 * It allocates the memory for the array and calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence *
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__create(size_t size);

/// Destroy array of msg/VaChassisOdoFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * array);

/// Check for msg/VaChassisOdoFb message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * rhs);

/// Copy an array of msg/VaChassisOdoFb messages.
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
pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__FUNCTIONS_H_
