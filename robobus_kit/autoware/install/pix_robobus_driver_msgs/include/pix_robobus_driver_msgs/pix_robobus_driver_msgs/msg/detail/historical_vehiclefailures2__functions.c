// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(msg);
    return false;
  }
  // hobc_network_fault
  // hobc_hardware_fault
  // hdp_hardware_fault
  // hdp_network_fault
  // hbcm_hardware_fault
  // hbcm_network_fault
  // hdcu_network_fault
  // hdcu_hardware_fault
  // havas_network_fault
  // havas_hardware_fault
  // hlis_hardware_fault
  // h_iis_network_fault
  // hac_hardware_fault
  // hac_network_fault
  // h_iv_battery_low_voltage_fault
  // h_iv_battery_high_voltage_fault
  return true;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hobc_network_fault
  // hobc_hardware_fault
  // hdp_hardware_fault
  // hdp_network_fault
  // hbcm_hardware_fault
  // hbcm_network_fault
  // hdcu_network_fault
  // hdcu_hardware_fault
  // havas_network_fault
  // havas_hardware_fault
  // hlis_hardware_fault
  // h_iis_network_fault
  // hac_hardware_fault
  // hac_network_fault
  // h_iv_battery_low_voltage_fault
  // h_iv_battery_high_voltage_fault
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__are_equal(const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * lhs, const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * rhs)
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
  // hobc_network_fault
  if (lhs->hobc_network_fault != rhs->hobc_network_fault) {
    return false;
  }
  // hobc_hardware_fault
  if (lhs->hobc_hardware_fault != rhs->hobc_hardware_fault) {
    return false;
  }
  // hdp_hardware_fault
  if (lhs->hdp_hardware_fault != rhs->hdp_hardware_fault) {
    return false;
  }
  // hdp_network_fault
  if (lhs->hdp_network_fault != rhs->hdp_network_fault) {
    return false;
  }
  // hbcm_hardware_fault
  if (lhs->hbcm_hardware_fault != rhs->hbcm_hardware_fault) {
    return false;
  }
  // hbcm_network_fault
  if (lhs->hbcm_network_fault != rhs->hbcm_network_fault) {
    return false;
  }
  // hdcu_network_fault
  if (lhs->hdcu_network_fault != rhs->hdcu_network_fault) {
    return false;
  }
  // hdcu_hardware_fault
  if (lhs->hdcu_hardware_fault != rhs->hdcu_hardware_fault) {
    return false;
  }
  // havas_network_fault
  if (lhs->havas_network_fault != rhs->havas_network_fault) {
    return false;
  }
  // havas_hardware_fault
  if (lhs->havas_hardware_fault != rhs->havas_hardware_fault) {
    return false;
  }
  // hlis_hardware_fault
  if (lhs->hlis_hardware_fault != rhs->hlis_hardware_fault) {
    return false;
  }
  // h_iis_network_fault
  if (lhs->h_iis_network_fault != rhs->h_iis_network_fault) {
    return false;
  }
  // hac_hardware_fault
  if (lhs->hac_hardware_fault != rhs->hac_hardware_fault) {
    return false;
  }
  // hac_network_fault
  if (lhs->hac_network_fault != rhs->hac_network_fault) {
    return false;
  }
  // h_iv_battery_low_voltage_fault
  if (lhs->h_iv_battery_low_voltage_fault != rhs->h_iv_battery_low_voltage_fault) {
    return false;
  }
  // h_iv_battery_high_voltage_fault
  if (lhs->h_iv_battery_high_voltage_fault != rhs->h_iv_battery_high_voltage_fault) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__copy(
  const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * input,
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * output)
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
  // hobc_network_fault
  output->hobc_network_fault = input->hobc_network_fault;
  // hobc_hardware_fault
  output->hobc_hardware_fault = input->hobc_hardware_fault;
  // hdp_hardware_fault
  output->hdp_hardware_fault = input->hdp_hardware_fault;
  // hdp_network_fault
  output->hdp_network_fault = input->hdp_network_fault;
  // hbcm_hardware_fault
  output->hbcm_hardware_fault = input->hbcm_hardware_fault;
  // hbcm_network_fault
  output->hbcm_network_fault = input->hbcm_network_fault;
  // hdcu_network_fault
  output->hdcu_network_fault = input->hdcu_network_fault;
  // hdcu_hardware_fault
  output->hdcu_hardware_fault = input->hdcu_hardware_fault;
  // havas_network_fault
  output->havas_network_fault = input->havas_network_fault;
  // havas_hardware_fault
  output->havas_hardware_fault = input->havas_hardware_fault;
  // hlis_hardware_fault
  output->hlis_hardware_fault = input->hlis_hardware_fault;
  // h_iis_network_fault
  output->h_iis_network_fault = input->h_iis_network_fault;
  // hac_hardware_fault
  output->hac_hardware_fault = input->hac_hardware_fault;
  // hac_network_fault
  output->hac_network_fault = input->hac_network_fault;
  // h_iv_battery_low_voltage_fault
  output->h_iv_battery_low_voltage_fault = input->h_iv_battery_low_voltage_fault;
  // h_iv_battery_high_voltage_fault
  output->h_iv_battery_high_voltage_fault = input->h_iv_battery_high_voltage_fault;
  return true;
}

pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 *
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * msg = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2));
  bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__destroy(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__init(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__fini(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * array)
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
      pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence *
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * array = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__destroy(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__are_equal(const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * lhs, const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__copy(
  const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * input,
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 * data =
      (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
