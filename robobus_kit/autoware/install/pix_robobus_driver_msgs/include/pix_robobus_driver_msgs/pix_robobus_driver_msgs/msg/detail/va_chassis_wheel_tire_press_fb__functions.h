// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTirePressFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__FUNCTIONS_H_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pix_robobus_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_wheel_tire_press_fb__struct.h"

/// Initialize msg/VaChassisWheelTirePressFb message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb
 * )) before or use
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * msg);

/// Finalize msg/VaChassisWheelTirePressFb message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__fini(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * msg);

/// Create msg/VaChassisWheelTirePressFb message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb *
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__create();

/// Destroy msg/VaChassisWheelTirePressFb message.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__destroy(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * msg);

/// Check for msg/VaChassisWheelTirePressFb message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__are_equal(const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * lhs, const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * rhs);

/// Copy a msg/VaChassisWheelTirePressFb message.
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
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__copy(
  const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * input,
  pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb * output);

/// Initialize array of msg/VaChassisWheelTirePressFb messages.
/**
 * It allocates the memory for the number of elements and calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__init(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * array, size_t size);

/// Finalize array of msg/VaChassisWheelTirePressFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__fini(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * array);

/// Create array of msg/VaChassisWheelTirePressFb messages.
/**
 * It allocates the memory for the array and calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence *
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__create(size_t size);

/// Destroy array of msg/VaChassisWheelTirePressFb messages.
/**
 * It calls
 * pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
void
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__destroy(pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * array);

/// Check for msg/VaChassisWheelTirePressFb message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pix_robobus_driver_msgs
bool
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * rhs);

/// Copy an array of msg/VaChassisWheelTirePressFb messages.
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
pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * input,
  pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__FUNCTIONS_H_
