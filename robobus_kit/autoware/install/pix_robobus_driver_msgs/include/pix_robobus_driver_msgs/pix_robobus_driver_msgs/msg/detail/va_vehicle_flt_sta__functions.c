// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_flt_sta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(pix_robobus_driver_msgs__msg__VaVehicleFltSta * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(msg);
    return false;
  }
  // vcu_sys_motor_over_temp_sta
  // vcu_sys_bms_over_temp_sta
  // vcu_sys_brake_over_temp_sta
  // vcu_sys_steer_over_temp_sta
  // vcu_sys_under_volt
  // vcu_sys_flt
  // vcu_sys_brake_flt
  // vcu_sys_parking_flt
  // vcu_sys_steer_front_flt
  // vcu_sys_steer_back_flt
  // vcu_sys_motor_lf_flt
  // vcu_sys_motor_rf_flt
  // vcu_sys_motor_lr_flt
  // vcu_sys_motor_rr_flt
  // vcu_sys_bms_flt
  // vcu_sys_dc_flt
  // vcu_sys_door_flt
  // vcu_sys_dpm_flt
  // vcu_sys_bcm_flt
  // vcu_vehicle_flt_level
  // vcu_sys_flt_reserve1
  return true;
}

void
pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(pix_robobus_driver_msgs__msg__VaVehicleFltSta * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vcu_sys_motor_over_temp_sta
  // vcu_sys_bms_over_temp_sta
  // vcu_sys_brake_over_temp_sta
  // vcu_sys_steer_over_temp_sta
  // vcu_sys_under_volt
  // vcu_sys_flt
  // vcu_sys_brake_flt
  // vcu_sys_parking_flt
  // vcu_sys_steer_front_flt
  // vcu_sys_steer_back_flt
  // vcu_sys_motor_lf_flt
  // vcu_sys_motor_rf_flt
  // vcu_sys_motor_lr_flt
  // vcu_sys_motor_rr_flt
  // vcu_sys_bms_flt
  // vcu_sys_dc_flt
  // vcu_sys_door_flt
  // vcu_sys_dpm_flt
  // vcu_sys_bcm_flt
  // vcu_vehicle_flt_level
  // vcu_sys_flt_reserve1
}

bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleFltSta * lhs, const pix_robobus_driver_msgs__msg__VaVehicleFltSta * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vcu_sys_motor_over_temp_sta
  if (lhs->vcu_sys_motor_over_temp_sta != rhs->vcu_sys_motor_over_temp_sta) {
    return false;
  }
  // vcu_sys_bms_over_temp_sta
  if (lhs->vcu_sys_bms_over_temp_sta != rhs->vcu_sys_bms_over_temp_sta) {
    return false;
  }
  // vcu_sys_brake_over_temp_sta
  if (lhs->vcu_sys_brake_over_temp_sta != rhs->vcu_sys_brake_over_temp_sta) {
    return false;
  }
  // vcu_sys_steer_over_temp_sta
  if (lhs->vcu_sys_steer_over_temp_sta != rhs->vcu_sys_steer_over_temp_sta) {
    return false;
  }
  // vcu_sys_under_volt
  if (lhs->vcu_sys_under_volt != rhs->vcu_sys_under_volt) {
    return false;
  }
  // vcu_sys_flt
  if (lhs->vcu_sys_flt != rhs->vcu_sys_flt) {
    return false;
  }
  // vcu_sys_brake_flt
  if (lhs->vcu_sys_brake_flt != rhs->vcu_sys_brake_flt) {
    return false;
  }
  // vcu_sys_parking_flt
  if (lhs->vcu_sys_parking_flt != rhs->vcu_sys_parking_flt) {
    return false;
  }
  // vcu_sys_steer_front_flt
  if (lhs->vcu_sys_steer_front_flt != rhs->vcu_sys_steer_front_flt) {
    return false;
  }
  // vcu_sys_steer_back_flt
  if (lhs->vcu_sys_steer_back_flt != rhs->vcu_sys_steer_back_flt) {
    return false;
  }
  // vcu_sys_motor_lf_flt
  if (lhs->vcu_sys_motor_lf_flt != rhs->vcu_sys_motor_lf_flt) {
    return false;
  }
  // vcu_sys_motor_rf_flt
  if (lhs->vcu_sys_motor_rf_flt != rhs->vcu_sys_motor_rf_flt) {
    return false;
  }
  // vcu_sys_motor_lr_flt
  if (lhs->vcu_sys_motor_lr_flt != rhs->vcu_sys_motor_lr_flt) {
    return false;
  }
  // vcu_sys_motor_rr_flt
  if (lhs->vcu_sys_motor_rr_flt != rhs->vcu_sys_motor_rr_flt) {
    return false;
  }
  // vcu_sys_bms_flt
  if (lhs->vcu_sys_bms_flt != rhs->vcu_sys_bms_flt) {
    return false;
  }
  // vcu_sys_dc_flt
  if (lhs->vcu_sys_dc_flt != rhs->vcu_sys_dc_flt) {
    return false;
  }
  // vcu_sys_door_flt
  if (lhs->vcu_sys_door_flt != rhs->vcu_sys_door_flt) {
    return false;
  }
  // vcu_sys_dpm_flt
  if (lhs->vcu_sys_dpm_flt != rhs->vcu_sys_dpm_flt) {
    return false;
  }
  // vcu_sys_bcm_flt
  if (lhs->vcu_sys_bcm_flt != rhs->vcu_sys_bcm_flt) {
    return false;
  }
  // vcu_vehicle_flt_level
  if (lhs->vcu_vehicle_flt_level != rhs->vcu_vehicle_flt_level) {
    return false;
  }
  // vcu_sys_flt_reserve1
  if (lhs->vcu_sys_flt_reserve1 != rhs->vcu_sys_flt_reserve1) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleFltSta * input,
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vcu_sys_motor_over_temp_sta
  output->vcu_sys_motor_over_temp_sta = input->vcu_sys_motor_over_temp_sta;
  // vcu_sys_bms_over_temp_sta
  output->vcu_sys_bms_over_temp_sta = input->vcu_sys_bms_over_temp_sta;
  // vcu_sys_brake_over_temp_sta
  output->vcu_sys_brake_over_temp_sta = input->vcu_sys_brake_over_temp_sta;
  // vcu_sys_steer_over_temp_sta
  output->vcu_sys_steer_over_temp_sta = input->vcu_sys_steer_over_temp_sta;
  // vcu_sys_under_volt
  output->vcu_sys_under_volt = input->vcu_sys_under_volt;
  // vcu_sys_flt
  output->vcu_sys_flt = input->vcu_sys_flt;
  // vcu_sys_brake_flt
  output->vcu_sys_brake_flt = input->vcu_sys_brake_flt;
  // vcu_sys_parking_flt
  output->vcu_sys_parking_flt = input->vcu_sys_parking_flt;
  // vcu_sys_steer_front_flt
  output->vcu_sys_steer_front_flt = input->vcu_sys_steer_front_flt;
  // vcu_sys_steer_back_flt
  output->vcu_sys_steer_back_flt = input->vcu_sys_steer_back_flt;
  // vcu_sys_motor_lf_flt
  output->vcu_sys_motor_lf_flt = input->vcu_sys_motor_lf_flt;
  // vcu_sys_motor_rf_flt
  output->vcu_sys_motor_rf_flt = input->vcu_sys_motor_rf_flt;
  // vcu_sys_motor_lr_flt
  output->vcu_sys_motor_lr_flt = input->vcu_sys_motor_lr_flt;
  // vcu_sys_motor_rr_flt
  output->vcu_sys_motor_rr_flt = input->vcu_sys_motor_rr_flt;
  // vcu_sys_bms_flt
  output->vcu_sys_bms_flt = input->vcu_sys_bms_flt;
  // vcu_sys_dc_flt
  output->vcu_sys_dc_flt = input->vcu_sys_dc_flt;
  // vcu_sys_door_flt
  output->vcu_sys_door_flt = input->vcu_sys_door_flt;
  // vcu_sys_dpm_flt
  output->vcu_sys_dpm_flt = input->vcu_sys_dpm_flt;
  // vcu_sys_bcm_flt
  output->vcu_sys_bcm_flt = input->vcu_sys_bcm_flt;
  // vcu_vehicle_flt_level
  output->vcu_vehicle_flt_level = input->vcu_vehicle_flt_level;
  // vcu_sys_flt_reserve1
  output->vcu_sys_flt_reserve1 = input->vcu_sys_flt_reserve1;
  return true;
}

pix_robobus_driver_msgs__msg__VaVehicleFltSta *
pix_robobus_driver_msgs__msg__VaVehicleFltSta__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * msg = (pix_robobus_driver_msgs__msg__VaVehicleFltSta *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleFltSta), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__VaVehicleFltSta));
  bool success = pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__VaVehicleFltSta__destroy(pix_robobus_driver_msgs__msg__VaVehicleFltSta * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__init(pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleFltSta * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__VaVehicleFltSta *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__VaVehicleFltSta), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__fini(pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence *
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * array = (pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__destroy(pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__are_equal(const pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * lhs, const pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleFltSta__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__copy(
  const pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * input,
  pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__VaVehicleFltSta);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__VaVehicleFltSta * data =
      (pix_robobus_driver_msgs__msg__VaVehicleFltSta *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__VaVehicleFltSta__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__VaVehicleFltSta__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
