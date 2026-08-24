// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
// generated code does not contain a copyright notice
#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(msg);
    return false;
  }
  // hflmc_hardware_fault
  // hflmc_tem_fault
  // hflm_tem_fault
  // hrlmc_hardware_fault
  // hrlmc_tem_fault
  // hrlm_tem_fault
  // hfrmc_hardware_fault
  // hfrmc_tem_fault
  // hfrm_tem_fault
  // hrrmc_hardware_fault
  // hrrmc_tem_fault
  // hrrm_tem_fault
  // hflmc_network_fault
  // hfrmc_network_fault
  // hrlmc_network_fault
  // hrrmc_network_fault
  // hfsteer_hardware_fault
  // hrsteer_hardware_fault
  // hfsteer_network_fault
  // hrsteer_network_fault
  // hbrake_hardware_fault
  // hbrake_high_tem_fault
  // hbrake_luid_level_low
  // hbrake_network_fault
  // hpark_hardware_fault
  // hpark_network_fault
  // hrcu_network_fault
  // hrcu_weak_signal
  // hrcu_elec_low_alarm
  // hbms_network_fault
  // hbms_insulationfault
  // hbms_ocv_cell
  // hbms_odv_cell
  // hbms_ocv_batt
  // hbms_odv_batt
  // hbms_cell_volt_diff
  // hbms_temph
  // hbms_temphl
  // hbms_temph_diff
  // hbms_warchg_overcurrent
  // hbms_soch
  // hbms_socl
  // hbms_time_of_heating_too_long
  // hbms_soc_break
  // hbms_dis_char_over_cur
  // hbms_char_over_cur_slow
  // hbmsfast_char_over_cur
  // hbms_alm_sense_cell
  // hbms_alm_sense_temp
  // hbms_alm_sense_curr
  // hbms_hvil
  // hbms_war_incan_fault
  // hbms_lst_com_withobc
  // hbms_lst_com_with_vcu
  // hbms_precharger_fault
  // hbmspos_relayconglutination
  // hbms_neg_relay_conglutination
  // hdcdc_high_tem_alarm
  // hdcdc_hardware_fault
  // hdcdc_network_fault
  return true;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // hflmc_hardware_fault
  // hflmc_tem_fault
  // hflm_tem_fault
  // hrlmc_hardware_fault
  // hrlmc_tem_fault
  // hrlm_tem_fault
  // hfrmc_hardware_fault
  // hfrmc_tem_fault
  // hfrm_tem_fault
  // hrrmc_hardware_fault
  // hrrmc_tem_fault
  // hrrm_tem_fault
  // hflmc_network_fault
  // hfrmc_network_fault
  // hrlmc_network_fault
  // hrrmc_network_fault
  // hfsteer_hardware_fault
  // hrsteer_hardware_fault
  // hfsteer_network_fault
  // hrsteer_network_fault
  // hbrake_hardware_fault
  // hbrake_high_tem_fault
  // hbrake_luid_level_low
  // hbrake_network_fault
  // hpark_hardware_fault
  // hpark_network_fault
  // hrcu_network_fault
  // hrcu_weak_signal
  // hrcu_elec_low_alarm
  // hbms_network_fault
  // hbms_insulationfault
  // hbms_ocv_cell
  // hbms_odv_cell
  // hbms_ocv_batt
  // hbms_odv_batt
  // hbms_cell_volt_diff
  // hbms_temph
  // hbms_temphl
  // hbms_temph_diff
  // hbms_warchg_overcurrent
  // hbms_soch
  // hbms_socl
  // hbms_time_of_heating_too_long
  // hbms_soc_break
  // hbms_dis_char_over_cur
  // hbms_char_over_cur_slow
  // hbmsfast_char_over_cur
  // hbms_alm_sense_cell
  // hbms_alm_sense_temp
  // hbms_alm_sense_curr
  // hbms_hvil
  // hbms_war_incan_fault
  // hbms_lst_com_withobc
  // hbms_lst_com_with_vcu
  // hbms_precharger_fault
  // hbmspos_relayconglutination
  // hbms_neg_relay_conglutination
  // hdcdc_high_tem_alarm
  // hdcdc_hardware_fault
  // hdcdc_network_fault
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__are_equal(const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * lhs, const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * rhs)
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
  // hflmc_hardware_fault
  if (lhs->hflmc_hardware_fault != rhs->hflmc_hardware_fault) {
    return false;
  }
  // hflmc_tem_fault
  if (lhs->hflmc_tem_fault != rhs->hflmc_tem_fault) {
    return false;
  }
  // hflm_tem_fault
  if (lhs->hflm_tem_fault != rhs->hflm_tem_fault) {
    return false;
  }
  // hrlmc_hardware_fault
  if (lhs->hrlmc_hardware_fault != rhs->hrlmc_hardware_fault) {
    return false;
  }
  // hrlmc_tem_fault
  if (lhs->hrlmc_tem_fault != rhs->hrlmc_tem_fault) {
    return false;
  }
  // hrlm_tem_fault
  if (lhs->hrlm_tem_fault != rhs->hrlm_tem_fault) {
    return false;
  }
  // hfrmc_hardware_fault
  if (lhs->hfrmc_hardware_fault != rhs->hfrmc_hardware_fault) {
    return false;
  }
  // hfrmc_tem_fault
  if (lhs->hfrmc_tem_fault != rhs->hfrmc_tem_fault) {
    return false;
  }
  // hfrm_tem_fault
  if (lhs->hfrm_tem_fault != rhs->hfrm_tem_fault) {
    return false;
  }
  // hrrmc_hardware_fault
  if (lhs->hrrmc_hardware_fault != rhs->hrrmc_hardware_fault) {
    return false;
  }
  // hrrmc_tem_fault
  if (lhs->hrrmc_tem_fault != rhs->hrrmc_tem_fault) {
    return false;
  }
  // hrrm_tem_fault
  if (lhs->hrrm_tem_fault != rhs->hrrm_tem_fault) {
    return false;
  }
  // hflmc_network_fault
  if (lhs->hflmc_network_fault != rhs->hflmc_network_fault) {
    return false;
  }
  // hfrmc_network_fault
  if (lhs->hfrmc_network_fault != rhs->hfrmc_network_fault) {
    return false;
  }
  // hrlmc_network_fault
  if (lhs->hrlmc_network_fault != rhs->hrlmc_network_fault) {
    return false;
  }
  // hrrmc_network_fault
  if (lhs->hrrmc_network_fault != rhs->hrrmc_network_fault) {
    return false;
  }
  // hfsteer_hardware_fault
  if (lhs->hfsteer_hardware_fault != rhs->hfsteer_hardware_fault) {
    return false;
  }
  // hrsteer_hardware_fault
  if (lhs->hrsteer_hardware_fault != rhs->hrsteer_hardware_fault) {
    return false;
  }
  // hfsteer_network_fault
  if (lhs->hfsteer_network_fault != rhs->hfsteer_network_fault) {
    return false;
  }
  // hrsteer_network_fault
  if (lhs->hrsteer_network_fault != rhs->hrsteer_network_fault) {
    return false;
  }
  // hbrake_hardware_fault
  if (lhs->hbrake_hardware_fault != rhs->hbrake_hardware_fault) {
    return false;
  }
  // hbrake_high_tem_fault
  if (lhs->hbrake_high_tem_fault != rhs->hbrake_high_tem_fault) {
    return false;
  }
  // hbrake_luid_level_low
  if (lhs->hbrake_luid_level_low != rhs->hbrake_luid_level_low) {
    return false;
  }
  // hbrake_network_fault
  if (lhs->hbrake_network_fault != rhs->hbrake_network_fault) {
    return false;
  }
  // hpark_hardware_fault
  if (lhs->hpark_hardware_fault != rhs->hpark_hardware_fault) {
    return false;
  }
  // hpark_network_fault
  if (lhs->hpark_network_fault != rhs->hpark_network_fault) {
    return false;
  }
  // hrcu_network_fault
  if (lhs->hrcu_network_fault != rhs->hrcu_network_fault) {
    return false;
  }
  // hrcu_weak_signal
  if (lhs->hrcu_weak_signal != rhs->hrcu_weak_signal) {
    return false;
  }
  // hrcu_elec_low_alarm
  if (lhs->hrcu_elec_low_alarm != rhs->hrcu_elec_low_alarm) {
    return false;
  }
  // hbms_network_fault
  if (lhs->hbms_network_fault != rhs->hbms_network_fault) {
    return false;
  }
  // hbms_insulationfault
  if (lhs->hbms_insulationfault != rhs->hbms_insulationfault) {
    return false;
  }
  // hbms_ocv_cell
  if (lhs->hbms_ocv_cell != rhs->hbms_ocv_cell) {
    return false;
  }
  // hbms_odv_cell
  if (lhs->hbms_odv_cell != rhs->hbms_odv_cell) {
    return false;
  }
  // hbms_ocv_batt
  if (lhs->hbms_ocv_batt != rhs->hbms_ocv_batt) {
    return false;
  }
  // hbms_odv_batt
  if (lhs->hbms_odv_batt != rhs->hbms_odv_batt) {
    return false;
  }
  // hbms_cell_volt_diff
  if (lhs->hbms_cell_volt_diff != rhs->hbms_cell_volt_diff) {
    return false;
  }
  // hbms_temph
  if (lhs->hbms_temph != rhs->hbms_temph) {
    return false;
  }
  // hbms_temphl
  if (lhs->hbms_temphl != rhs->hbms_temphl) {
    return false;
  }
  // hbms_temph_diff
  if (lhs->hbms_temph_diff != rhs->hbms_temph_diff) {
    return false;
  }
  // hbms_warchg_overcurrent
  if (lhs->hbms_warchg_overcurrent != rhs->hbms_warchg_overcurrent) {
    return false;
  }
  // hbms_soch
  if (lhs->hbms_soch != rhs->hbms_soch) {
    return false;
  }
  // hbms_socl
  if (lhs->hbms_socl != rhs->hbms_socl) {
    return false;
  }
  // hbms_time_of_heating_too_long
  if (lhs->hbms_time_of_heating_too_long != rhs->hbms_time_of_heating_too_long) {
    return false;
  }
  // hbms_soc_break
  if (lhs->hbms_soc_break != rhs->hbms_soc_break) {
    return false;
  }
  // hbms_dis_char_over_cur
  if (lhs->hbms_dis_char_over_cur != rhs->hbms_dis_char_over_cur) {
    return false;
  }
  // hbms_char_over_cur_slow
  if (lhs->hbms_char_over_cur_slow != rhs->hbms_char_over_cur_slow) {
    return false;
  }
  // hbmsfast_char_over_cur
  if (lhs->hbmsfast_char_over_cur != rhs->hbmsfast_char_over_cur) {
    return false;
  }
  // hbms_alm_sense_cell
  if (lhs->hbms_alm_sense_cell != rhs->hbms_alm_sense_cell) {
    return false;
  }
  // hbms_alm_sense_temp
  if (lhs->hbms_alm_sense_temp != rhs->hbms_alm_sense_temp) {
    return false;
  }
  // hbms_alm_sense_curr
  if (lhs->hbms_alm_sense_curr != rhs->hbms_alm_sense_curr) {
    return false;
  }
  // hbms_hvil
  if (lhs->hbms_hvil != rhs->hbms_hvil) {
    return false;
  }
  // hbms_war_incan_fault
  if (lhs->hbms_war_incan_fault != rhs->hbms_war_incan_fault) {
    return false;
  }
  // hbms_lst_com_withobc
  if (lhs->hbms_lst_com_withobc != rhs->hbms_lst_com_withobc) {
    return false;
  }
  // hbms_lst_com_with_vcu
  if (lhs->hbms_lst_com_with_vcu != rhs->hbms_lst_com_with_vcu) {
    return false;
  }
  // hbms_precharger_fault
  if (lhs->hbms_precharger_fault != rhs->hbms_precharger_fault) {
    return false;
  }
  // hbmspos_relayconglutination
  if (lhs->hbmspos_relayconglutination != rhs->hbmspos_relayconglutination) {
    return false;
  }
  // hbms_neg_relay_conglutination
  if (lhs->hbms_neg_relay_conglutination != rhs->hbms_neg_relay_conglutination) {
    return false;
  }
  // hdcdc_high_tem_alarm
  if (lhs->hdcdc_high_tem_alarm != rhs->hdcdc_high_tem_alarm) {
    return false;
  }
  // hdcdc_hardware_fault
  if (lhs->hdcdc_hardware_fault != rhs->hdcdc_hardware_fault) {
    return false;
  }
  // hdcdc_network_fault
  if (lhs->hdcdc_network_fault != rhs->hdcdc_network_fault) {
    return false;
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__copy(
  const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * input,
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * output)
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
  // hflmc_hardware_fault
  output->hflmc_hardware_fault = input->hflmc_hardware_fault;
  // hflmc_tem_fault
  output->hflmc_tem_fault = input->hflmc_tem_fault;
  // hflm_tem_fault
  output->hflm_tem_fault = input->hflm_tem_fault;
  // hrlmc_hardware_fault
  output->hrlmc_hardware_fault = input->hrlmc_hardware_fault;
  // hrlmc_tem_fault
  output->hrlmc_tem_fault = input->hrlmc_tem_fault;
  // hrlm_tem_fault
  output->hrlm_tem_fault = input->hrlm_tem_fault;
  // hfrmc_hardware_fault
  output->hfrmc_hardware_fault = input->hfrmc_hardware_fault;
  // hfrmc_tem_fault
  output->hfrmc_tem_fault = input->hfrmc_tem_fault;
  // hfrm_tem_fault
  output->hfrm_tem_fault = input->hfrm_tem_fault;
  // hrrmc_hardware_fault
  output->hrrmc_hardware_fault = input->hrrmc_hardware_fault;
  // hrrmc_tem_fault
  output->hrrmc_tem_fault = input->hrrmc_tem_fault;
  // hrrm_tem_fault
  output->hrrm_tem_fault = input->hrrm_tem_fault;
  // hflmc_network_fault
  output->hflmc_network_fault = input->hflmc_network_fault;
  // hfrmc_network_fault
  output->hfrmc_network_fault = input->hfrmc_network_fault;
  // hrlmc_network_fault
  output->hrlmc_network_fault = input->hrlmc_network_fault;
  // hrrmc_network_fault
  output->hrrmc_network_fault = input->hrrmc_network_fault;
  // hfsteer_hardware_fault
  output->hfsteer_hardware_fault = input->hfsteer_hardware_fault;
  // hrsteer_hardware_fault
  output->hrsteer_hardware_fault = input->hrsteer_hardware_fault;
  // hfsteer_network_fault
  output->hfsteer_network_fault = input->hfsteer_network_fault;
  // hrsteer_network_fault
  output->hrsteer_network_fault = input->hrsteer_network_fault;
  // hbrake_hardware_fault
  output->hbrake_hardware_fault = input->hbrake_hardware_fault;
  // hbrake_high_tem_fault
  output->hbrake_high_tem_fault = input->hbrake_high_tem_fault;
  // hbrake_luid_level_low
  output->hbrake_luid_level_low = input->hbrake_luid_level_low;
  // hbrake_network_fault
  output->hbrake_network_fault = input->hbrake_network_fault;
  // hpark_hardware_fault
  output->hpark_hardware_fault = input->hpark_hardware_fault;
  // hpark_network_fault
  output->hpark_network_fault = input->hpark_network_fault;
  // hrcu_network_fault
  output->hrcu_network_fault = input->hrcu_network_fault;
  // hrcu_weak_signal
  output->hrcu_weak_signal = input->hrcu_weak_signal;
  // hrcu_elec_low_alarm
  output->hrcu_elec_low_alarm = input->hrcu_elec_low_alarm;
  // hbms_network_fault
  output->hbms_network_fault = input->hbms_network_fault;
  // hbms_insulationfault
  output->hbms_insulationfault = input->hbms_insulationfault;
  // hbms_ocv_cell
  output->hbms_ocv_cell = input->hbms_ocv_cell;
  // hbms_odv_cell
  output->hbms_odv_cell = input->hbms_odv_cell;
  // hbms_ocv_batt
  output->hbms_ocv_batt = input->hbms_ocv_batt;
  // hbms_odv_batt
  output->hbms_odv_batt = input->hbms_odv_batt;
  // hbms_cell_volt_diff
  output->hbms_cell_volt_diff = input->hbms_cell_volt_diff;
  // hbms_temph
  output->hbms_temph = input->hbms_temph;
  // hbms_temphl
  output->hbms_temphl = input->hbms_temphl;
  // hbms_temph_diff
  output->hbms_temph_diff = input->hbms_temph_diff;
  // hbms_warchg_overcurrent
  output->hbms_warchg_overcurrent = input->hbms_warchg_overcurrent;
  // hbms_soch
  output->hbms_soch = input->hbms_soch;
  // hbms_socl
  output->hbms_socl = input->hbms_socl;
  // hbms_time_of_heating_too_long
  output->hbms_time_of_heating_too_long = input->hbms_time_of_heating_too_long;
  // hbms_soc_break
  output->hbms_soc_break = input->hbms_soc_break;
  // hbms_dis_char_over_cur
  output->hbms_dis_char_over_cur = input->hbms_dis_char_over_cur;
  // hbms_char_over_cur_slow
  output->hbms_char_over_cur_slow = input->hbms_char_over_cur_slow;
  // hbmsfast_char_over_cur
  output->hbmsfast_char_over_cur = input->hbmsfast_char_over_cur;
  // hbms_alm_sense_cell
  output->hbms_alm_sense_cell = input->hbms_alm_sense_cell;
  // hbms_alm_sense_temp
  output->hbms_alm_sense_temp = input->hbms_alm_sense_temp;
  // hbms_alm_sense_curr
  output->hbms_alm_sense_curr = input->hbms_alm_sense_curr;
  // hbms_hvil
  output->hbms_hvil = input->hbms_hvil;
  // hbms_war_incan_fault
  output->hbms_war_incan_fault = input->hbms_war_incan_fault;
  // hbms_lst_com_withobc
  output->hbms_lst_com_withobc = input->hbms_lst_com_withobc;
  // hbms_lst_com_with_vcu
  output->hbms_lst_com_with_vcu = input->hbms_lst_com_with_vcu;
  // hbms_precharger_fault
  output->hbms_precharger_fault = input->hbms_precharger_fault;
  // hbmspos_relayconglutination
  output->hbmspos_relayconglutination = input->hbmspos_relayconglutination;
  // hbms_neg_relay_conglutination
  output->hbms_neg_relay_conglutination = input->hbms_neg_relay_conglutination;
  // hdcdc_high_tem_alarm
  output->hdcdc_high_tem_alarm = input->hdcdc_high_tem_alarm;
  // hdcdc_hardware_fault
  output->hdcdc_hardware_fault = input->hdcdc_hardware_fault;
  // hdcdc_network_fault
  output->hdcdc_network_fault = input->hdcdc_network_fault;
  return true;
}

pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 *
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * msg = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1));
  bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__destroy(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__init(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * data = NULL;

  if (size) {
    data = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 *)allocator.zero_allocate(size, sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(&data[i - 1]);
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
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__fini(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * array)
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
      pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(&array->data[i]);
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

pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence *
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * array = (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence *)allocator.allocate(sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__destroy(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__are_equal(const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * lhs, const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__copy(
  const pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * input,
  pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 * data =
      (pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
