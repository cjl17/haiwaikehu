// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode1 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode1 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleErrcode1_
{
  using Type = VehicleErrcode1_<ContainerAllocator>;

  explicit VehicleErrcode1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flmc_hardware_fault = false;
      this->flmc_tem_fault = false;
      this->flm_tem_fault = false;
      this->rlmc_hardware_fault = false;
      this->rlmc_tem_fault = false;
      this->rlm_tem_fault = false;
      this->frmc_hardware_fault = false;
      this->frmc_tem_fault = false;
      this->frm_tem_fault = false;
      this->rrmc_hardware_fault = false;
      this->rrmc_tem_fault = false;
      this->rrm_tem_fault = false;
      this->flmc_network_fault = false;
      this->frmc_network_fault = false;
      this->rlmc_network_fault = false;
      this->rrmc_network_fault = false;
      this->fsteer_hardware_fault = false;
      this->rsteer_hardware_fault = false;
      this->fsteer_network_fault = false;
      this->rsteer_network_fault = false;
      this->brake_hardware_fault = false;
      this->brake_high_tem_fault = false;
      this->brake_luid_level_low = false;
      this->brake_network_fault = false;
      this->park_hardware_fault = false;
      this->park_network_fault = false;
      this->rcu_network_fault = false;
      this->rcu_weak_signal = false;
      this->rcu_elec_low_alarm = false;
      this->reserve1 = false;
      this->reserve2 = false;
      this->bms_network_fault = false;
      this->bms_insulationfault = false;
      this->bms_ocv_cell = false;
      this->bms_odv_cell = false;
      this->bms_ocv_batt = false;
      this->bms_odv_batt = false;
      this->bms_cell_volt_diff = false;
      this->bms_temph = false;
      this->bms_temphl = false;
      this->bms_temph_diff = false;
      this->bms_warchg_overcurrent = false;
      this->bms_soch = false;
      this->bms_socl = false;
      this->bms_time_of_heating_too_long = false;
      this->bms_soc_break = false;
      this->bms_dis_char_over_cur = false;
      this->bms_char_over_cur_slow = false;
      this->bmsfast_char_over_cur = false;
      this->bms_alm_sense_cell = false;
      this->bms_alm_sense_temp = false;
      this->bms_alm_sense_curr = false;
      this->bms_hvil = false;
      this->bms_war_incan_fault = false;
      this->bms_lst_com_withobc = false;
      this->bms_lst_com_with_vcu = false;
      this->bms_precharger_fault = false;
      this->bmspos_relayconglutination = false;
      this->bms_neg_relay_conglutination = false;
      this->vcu_reserve3 = false;
      this->vcu_reserve4 = false;
      this->dcdc_high_tem_alarm = false;
      this->dcdc_hardware_fault = false;
      this->dcdc_network_fault = false;
    }
  }

  explicit VehicleErrcode1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flmc_hardware_fault = false;
      this->flmc_tem_fault = false;
      this->flm_tem_fault = false;
      this->rlmc_hardware_fault = false;
      this->rlmc_tem_fault = false;
      this->rlm_tem_fault = false;
      this->frmc_hardware_fault = false;
      this->frmc_tem_fault = false;
      this->frm_tem_fault = false;
      this->rrmc_hardware_fault = false;
      this->rrmc_tem_fault = false;
      this->rrm_tem_fault = false;
      this->flmc_network_fault = false;
      this->frmc_network_fault = false;
      this->rlmc_network_fault = false;
      this->rrmc_network_fault = false;
      this->fsteer_hardware_fault = false;
      this->rsteer_hardware_fault = false;
      this->fsteer_network_fault = false;
      this->rsteer_network_fault = false;
      this->brake_hardware_fault = false;
      this->brake_high_tem_fault = false;
      this->brake_luid_level_low = false;
      this->brake_network_fault = false;
      this->park_hardware_fault = false;
      this->park_network_fault = false;
      this->rcu_network_fault = false;
      this->rcu_weak_signal = false;
      this->rcu_elec_low_alarm = false;
      this->reserve1 = false;
      this->reserve2 = false;
      this->bms_network_fault = false;
      this->bms_insulationfault = false;
      this->bms_ocv_cell = false;
      this->bms_odv_cell = false;
      this->bms_ocv_batt = false;
      this->bms_odv_batt = false;
      this->bms_cell_volt_diff = false;
      this->bms_temph = false;
      this->bms_temphl = false;
      this->bms_temph_diff = false;
      this->bms_warchg_overcurrent = false;
      this->bms_soch = false;
      this->bms_socl = false;
      this->bms_time_of_heating_too_long = false;
      this->bms_soc_break = false;
      this->bms_dis_char_over_cur = false;
      this->bms_char_over_cur_slow = false;
      this->bmsfast_char_over_cur = false;
      this->bms_alm_sense_cell = false;
      this->bms_alm_sense_temp = false;
      this->bms_alm_sense_curr = false;
      this->bms_hvil = false;
      this->bms_war_incan_fault = false;
      this->bms_lst_com_withobc = false;
      this->bms_lst_com_with_vcu = false;
      this->bms_precharger_fault = false;
      this->bmspos_relayconglutination = false;
      this->bms_neg_relay_conglutination = false;
      this->vcu_reserve3 = false;
      this->vcu_reserve4 = false;
      this->dcdc_high_tem_alarm = false;
      this->dcdc_hardware_fault = false;
      this->dcdc_network_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _flmc_hardware_fault_type =
    bool;
  _flmc_hardware_fault_type flmc_hardware_fault;
  using _flmc_tem_fault_type =
    bool;
  _flmc_tem_fault_type flmc_tem_fault;
  using _flm_tem_fault_type =
    bool;
  _flm_tem_fault_type flm_tem_fault;
  using _rlmc_hardware_fault_type =
    bool;
  _rlmc_hardware_fault_type rlmc_hardware_fault;
  using _rlmc_tem_fault_type =
    bool;
  _rlmc_tem_fault_type rlmc_tem_fault;
  using _rlm_tem_fault_type =
    bool;
  _rlm_tem_fault_type rlm_tem_fault;
  using _frmc_hardware_fault_type =
    bool;
  _frmc_hardware_fault_type frmc_hardware_fault;
  using _frmc_tem_fault_type =
    bool;
  _frmc_tem_fault_type frmc_tem_fault;
  using _frm_tem_fault_type =
    bool;
  _frm_tem_fault_type frm_tem_fault;
  using _rrmc_hardware_fault_type =
    bool;
  _rrmc_hardware_fault_type rrmc_hardware_fault;
  using _rrmc_tem_fault_type =
    bool;
  _rrmc_tem_fault_type rrmc_tem_fault;
  using _rrm_tem_fault_type =
    bool;
  _rrm_tem_fault_type rrm_tem_fault;
  using _flmc_network_fault_type =
    bool;
  _flmc_network_fault_type flmc_network_fault;
  using _frmc_network_fault_type =
    bool;
  _frmc_network_fault_type frmc_network_fault;
  using _rlmc_network_fault_type =
    bool;
  _rlmc_network_fault_type rlmc_network_fault;
  using _rrmc_network_fault_type =
    bool;
  _rrmc_network_fault_type rrmc_network_fault;
  using _fsteer_hardware_fault_type =
    bool;
  _fsteer_hardware_fault_type fsteer_hardware_fault;
  using _rsteer_hardware_fault_type =
    bool;
  _rsteer_hardware_fault_type rsteer_hardware_fault;
  using _fsteer_network_fault_type =
    bool;
  _fsteer_network_fault_type fsteer_network_fault;
  using _rsteer_network_fault_type =
    bool;
  _rsteer_network_fault_type rsteer_network_fault;
  using _brake_hardware_fault_type =
    bool;
  _brake_hardware_fault_type brake_hardware_fault;
  using _brake_high_tem_fault_type =
    bool;
  _brake_high_tem_fault_type brake_high_tem_fault;
  using _brake_luid_level_low_type =
    bool;
  _brake_luid_level_low_type brake_luid_level_low;
  using _brake_network_fault_type =
    bool;
  _brake_network_fault_type brake_network_fault;
  using _park_hardware_fault_type =
    bool;
  _park_hardware_fault_type park_hardware_fault;
  using _park_network_fault_type =
    bool;
  _park_network_fault_type park_network_fault;
  using _rcu_network_fault_type =
    bool;
  _rcu_network_fault_type rcu_network_fault;
  using _rcu_weak_signal_type =
    bool;
  _rcu_weak_signal_type rcu_weak_signal;
  using _rcu_elec_low_alarm_type =
    bool;
  _rcu_elec_low_alarm_type rcu_elec_low_alarm;
  using _reserve1_type =
    bool;
  _reserve1_type reserve1;
  using _reserve2_type =
    bool;
  _reserve2_type reserve2;
  using _bms_network_fault_type =
    bool;
  _bms_network_fault_type bms_network_fault;
  using _bms_insulationfault_type =
    bool;
  _bms_insulationfault_type bms_insulationfault;
  using _bms_ocv_cell_type =
    bool;
  _bms_ocv_cell_type bms_ocv_cell;
  using _bms_odv_cell_type =
    bool;
  _bms_odv_cell_type bms_odv_cell;
  using _bms_ocv_batt_type =
    bool;
  _bms_ocv_batt_type bms_ocv_batt;
  using _bms_odv_batt_type =
    bool;
  _bms_odv_batt_type bms_odv_batt;
  using _bms_cell_volt_diff_type =
    bool;
  _bms_cell_volt_diff_type bms_cell_volt_diff;
  using _bms_temph_type =
    bool;
  _bms_temph_type bms_temph;
  using _bms_temphl_type =
    bool;
  _bms_temphl_type bms_temphl;
  using _bms_temph_diff_type =
    bool;
  _bms_temph_diff_type bms_temph_diff;
  using _bms_warchg_overcurrent_type =
    bool;
  _bms_warchg_overcurrent_type bms_warchg_overcurrent;
  using _bms_soch_type =
    bool;
  _bms_soch_type bms_soch;
  using _bms_socl_type =
    bool;
  _bms_socl_type bms_socl;
  using _bms_time_of_heating_too_long_type =
    bool;
  _bms_time_of_heating_too_long_type bms_time_of_heating_too_long;
  using _bms_soc_break_type =
    bool;
  _bms_soc_break_type bms_soc_break;
  using _bms_dis_char_over_cur_type =
    bool;
  _bms_dis_char_over_cur_type bms_dis_char_over_cur;
  using _bms_char_over_cur_slow_type =
    bool;
  _bms_char_over_cur_slow_type bms_char_over_cur_slow;
  using _bmsfast_char_over_cur_type =
    bool;
  _bmsfast_char_over_cur_type bmsfast_char_over_cur;
  using _bms_alm_sense_cell_type =
    bool;
  _bms_alm_sense_cell_type bms_alm_sense_cell;
  using _bms_alm_sense_temp_type =
    bool;
  _bms_alm_sense_temp_type bms_alm_sense_temp;
  using _bms_alm_sense_curr_type =
    bool;
  _bms_alm_sense_curr_type bms_alm_sense_curr;
  using _bms_hvil_type =
    bool;
  _bms_hvil_type bms_hvil;
  using _bms_war_incan_fault_type =
    bool;
  _bms_war_incan_fault_type bms_war_incan_fault;
  using _bms_lst_com_withobc_type =
    bool;
  _bms_lst_com_withobc_type bms_lst_com_withobc;
  using _bms_lst_com_with_vcu_type =
    bool;
  _bms_lst_com_with_vcu_type bms_lst_com_with_vcu;
  using _bms_precharger_fault_type =
    bool;
  _bms_precharger_fault_type bms_precharger_fault;
  using _bmspos_relayconglutination_type =
    bool;
  _bmspos_relayconglutination_type bmspos_relayconglutination;
  using _bms_neg_relay_conglutination_type =
    bool;
  _bms_neg_relay_conglutination_type bms_neg_relay_conglutination;
  using _vcu_reserve3_type =
    bool;
  _vcu_reserve3_type vcu_reserve3;
  using _vcu_reserve4_type =
    bool;
  _vcu_reserve4_type vcu_reserve4;
  using _dcdc_high_tem_alarm_type =
    bool;
  _dcdc_high_tem_alarm_type dcdc_high_tem_alarm;
  using _dcdc_hardware_fault_type =
    bool;
  _dcdc_hardware_fault_type dcdc_hardware_fault;
  using _dcdc_network_fault_type =
    bool;
  _dcdc_network_fault_type dcdc_network_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__flmc_hardware_fault(
    const bool & _arg)
  {
    this->flmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__flmc_tem_fault(
    const bool & _arg)
  {
    this->flmc_tem_fault = _arg;
    return *this;
  }
  Type & set__flm_tem_fault(
    const bool & _arg)
  {
    this->flm_tem_fault = _arg;
    return *this;
  }
  Type & set__rlmc_hardware_fault(
    const bool & _arg)
  {
    this->rlmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__rlmc_tem_fault(
    const bool & _arg)
  {
    this->rlmc_tem_fault = _arg;
    return *this;
  }
  Type & set__rlm_tem_fault(
    const bool & _arg)
  {
    this->rlm_tem_fault = _arg;
    return *this;
  }
  Type & set__frmc_hardware_fault(
    const bool & _arg)
  {
    this->frmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__frmc_tem_fault(
    const bool & _arg)
  {
    this->frmc_tem_fault = _arg;
    return *this;
  }
  Type & set__frm_tem_fault(
    const bool & _arg)
  {
    this->frm_tem_fault = _arg;
    return *this;
  }
  Type & set__rrmc_hardware_fault(
    const bool & _arg)
  {
    this->rrmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__rrmc_tem_fault(
    const bool & _arg)
  {
    this->rrmc_tem_fault = _arg;
    return *this;
  }
  Type & set__rrm_tem_fault(
    const bool & _arg)
  {
    this->rrm_tem_fault = _arg;
    return *this;
  }
  Type & set__flmc_network_fault(
    const bool & _arg)
  {
    this->flmc_network_fault = _arg;
    return *this;
  }
  Type & set__frmc_network_fault(
    const bool & _arg)
  {
    this->frmc_network_fault = _arg;
    return *this;
  }
  Type & set__rlmc_network_fault(
    const bool & _arg)
  {
    this->rlmc_network_fault = _arg;
    return *this;
  }
  Type & set__rrmc_network_fault(
    const bool & _arg)
  {
    this->rrmc_network_fault = _arg;
    return *this;
  }
  Type & set__fsteer_hardware_fault(
    const bool & _arg)
  {
    this->fsteer_hardware_fault = _arg;
    return *this;
  }
  Type & set__rsteer_hardware_fault(
    const bool & _arg)
  {
    this->rsteer_hardware_fault = _arg;
    return *this;
  }
  Type & set__fsteer_network_fault(
    const bool & _arg)
  {
    this->fsteer_network_fault = _arg;
    return *this;
  }
  Type & set__rsteer_network_fault(
    const bool & _arg)
  {
    this->rsteer_network_fault = _arg;
    return *this;
  }
  Type & set__brake_hardware_fault(
    const bool & _arg)
  {
    this->brake_hardware_fault = _arg;
    return *this;
  }
  Type & set__brake_high_tem_fault(
    const bool & _arg)
  {
    this->brake_high_tem_fault = _arg;
    return *this;
  }
  Type & set__brake_luid_level_low(
    const bool & _arg)
  {
    this->brake_luid_level_low = _arg;
    return *this;
  }
  Type & set__brake_network_fault(
    const bool & _arg)
  {
    this->brake_network_fault = _arg;
    return *this;
  }
  Type & set__park_hardware_fault(
    const bool & _arg)
  {
    this->park_hardware_fault = _arg;
    return *this;
  }
  Type & set__park_network_fault(
    const bool & _arg)
  {
    this->park_network_fault = _arg;
    return *this;
  }
  Type & set__rcu_network_fault(
    const bool & _arg)
  {
    this->rcu_network_fault = _arg;
    return *this;
  }
  Type & set__rcu_weak_signal(
    const bool & _arg)
  {
    this->rcu_weak_signal = _arg;
    return *this;
  }
  Type & set__rcu_elec_low_alarm(
    const bool & _arg)
  {
    this->rcu_elec_low_alarm = _arg;
    return *this;
  }
  Type & set__reserve1(
    const bool & _arg)
  {
    this->reserve1 = _arg;
    return *this;
  }
  Type & set__reserve2(
    const bool & _arg)
  {
    this->reserve2 = _arg;
    return *this;
  }
  Type & set__bms_network_fault(
    const bool & _arg)
  {
    this->bms_network_fault = _arg;
    return *this;
  }
  Type & set__bms_insulationfault(
    const bool & _arg)
  {
    this->bms_insulationfault = _arg;
    return *this;
  }
  Type & set__bms_ocv_cell(
    const bool & _arg)
  {
    this->bms_ocv_cell = _arg;
    return *this;
  }
  Type & set__bms_odv_cell(
    const bool & _arg)
  {
    this->bms_odv_cell = _arg;
    return *this;
  }
  Type & set__bms_ocv_batt(
    const bool & _arg)
  {
    this->bms_ocv_batt = _arg;
    return *this;
  }
  Type & set__bms_odv_batt(
    const bool & _arg)
  {
    this->bms_odv_batt = _arg;
    return *this;
  }
  Type & set__bms_cell_volt_diff(
    const bool & _arg)
  {
    this->bms_cell_volt_diff = _arg;
    return *this;
  }
  Type & set__bms_temph(
    const bool & _arg)
  {
    this->bms_temph = _arg;
    return *this;
  }
  Type & set__bms_temphl(
    const bool & _arg)
  {
    this->bms_temphl = _arg;
    return *this;
  }
  Type & set__bms_temph_diff(
    const bool & _arg)
  {
    this->bms_temph_diff = _arg;
    return *this;
  }
  Type & set__bms_warchg_overcurrent(
    const bool & _arg)
  {
    this->bms_warchg_overcurrent = _arg;
    return *this;
  }
  Type & set__bms_soch(
    const bool & _arg)
  {
    this->bms_soch = _arg;
    return *this;
  }
  Type & set__bms_socl(
    const bool & _arg)
  {
    this->bms_socl = _arg;
    return *this;
  }
  Type & set__bms_time_of_heating_too_long(
    const bool & _arg)
  {
    this->bms_time_of_heating_too_long = _arg;
    return *this;
  }
  Type & set__bms_soc_break(
    const bool & _arg)
  {
    this->bms_soc_break = _arg;
    return *this;
  }
  Type & set__bms_dis_char_over_cur(
    const bool & _arg)
  {
    this->bms_dis_char_over_cur = _arg;
    return *this;
  }
  Type & set__bms_char_over_cur_slow(
    const bool & _arg)
  {
    this->bms_char_over_cur_slow = _arg;
    return *this;
  }
  Type & set__bmsfast_char_over_cur(
    const bool & _arg)
  {
    this->bmsfast_char_over_cur = _arg;
    return *this;
  }
  Type & set__bms_alm_sense_cell(
    const bool & _arg)
  {
    this->bms_alm_sense_cell = _arg;
    return *this;
  }
  Type & set__bms_alm_sense_temp(
    const bool & _arg)
  {
    this->bms_alm_sense_temp = _arg;
    return *this;
  }
  Type & set__bms_alm_sense_curr(
    const bool & _arg)
  {
    this->bms_alm_sense_curr = _arg;
    return *this;
  }
  Type & set__bms_hvil(
    const bool & _arg)
  {
    this->bms_hvil = _arg;
    return *this;
  }
  Type & set__bms_war_incan_fault(
    const bool & _arg)
  {
    this->bms_war_incan_fault = _arg;
    return *this;
  }
  Type & set__bms_lst_com_withobc(
    const bool & _arg)
  {
    this->bms_lst_com_withobc = _arg;
    return *this;
  }
  Type & set__bms_lst_com_with_vcu(
    const bool & _arg)
  {
    this->bms_lst_com_with_vcu = _arg;
    return *this;
  }
  Type & set__bms_precharger_fault(
    const bool & _arg)
  {
    this->bms_precharger_fault = _arg;
    return *this;
  }
  Type & set__bmspos_relayconglutination(
    const bool & _arg)
  {
    this->bmspos_relayconglutination = _arg;
    return *this;
  }
  Type & set__bms_neg_relay_conglutination(
    const bool & _arg)
  {
    this->bms_neg_relay_conglutination = _arg;
    return *this;
  }
  Type & set__vcu_reserve3(
    const bool & _arg)
  {
    this->vcu_reserve3 = _arg;
    return *this;
  }
  Type & set__vcu_reserve4(
    const bool & _arg)
  {
    this->vcu_reserve4 = _arg;
    return *this;
  }
  Type & set__dcdc_high_tem_alarm(
    const bool & _arg)
  {
    this->dcdc_high_tem_alarm = _arg;
    return *this;
  }
  Type & set__dcdc_hardware_fault(
    const bool & _arg)
  {
    this->dcdc_hardware_fault = _arg;
    return *this;
  }
  Type & set__dcdc_network_fault(
    const bool & _arg)
  {
    this->dcdc_network_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode1
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode1
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleErrcode1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->flmc_hardware_fault != other.flmc_hardware_fault) {
      return false;
    }
    if (this->flmc_tem_fault != other.flmc_tem_fault) {
      return false;
    }
    if (this->flm_tem_fault != other.flm_tem_fault) {
      return false;
    }
    if (this->rlmc_hardware_fault != other.rlmc_hardware_fault) {
      return false;
    }
    if (this->rlmc_tem_fault != other.rlmc_tem_fault) {
      return false;
    }
    if (this->rlm_tem_fault != other.rlm_tem_fault) {
      return false;
    }
    if (this->frmc_hardware_fault != other.frmc_hardware_fault) {
      return false;
    }
    if (this->frmc_tem_fault != other.frmc_tem_fault) {
      return false;
    }
    if (this->frm_tem_fault != other.frm_tem_fault) {
      return false;
    }
    if (this->rrmc_hardware_fault != other.rrmc_hardware_fault) {
      return false;
    }
    if (this->rrmc_tem_fault != other.rrmc_tem_fault) {
      return false;
    }
    if (this->rrm_tem_fault != other.rrm_tem_fault) {
      return false;
    }
    if (this->flmc_network_fault != other.flmc_network_fault) {
      return false;
    }
    if (this->frmc_network_fault != other.frmc_network_fault) {
      return false;
    }
    if (this->rlmc_network_fault != other.rlmc_network_fault) {
      return false;
    }
    if (this->rrmc_network_fault != other.rrmc_network_fault) {
      return false;
    }
    if (this->fsteer_hardware_fault != other.fsteer_hardware_fault) {
      return false;
    }
    if (this->rsteer_hardware_fault != other.rsteer_hardware_fault) {
      return false;
    }
    if (this->fsteer_network_fault != other.fsteer_network_fault) {
      return false;
    }
    if (this->rsteer_network_fault != other.rsteer_network_fault) {
      return false;
    }
    if (this->brake_hardware_fault != other.brake_hardware_fault) {
      return false;
    }
    if (this->brake_high_tem_fault != other.brake_high_tem_fault) {
      return false;
    }
    if (this->brake_luid_level_low != other.brake_luid_level_low) {
      return false;
    }
    if (this->brake_network_fault != other.brake_network_fault) {
      return false;
    }
    if (this->park_hardware_fault != other.park_hardware_fault) {
      return false;
    }
    if (this->park_network_fault != other.park_network_fault) {
      return false;
    }
    if (this->rcu_network_fault != other.rcu_network_fault) {
      return false;
    }
    if (this->rcu_weak_signal != other.rcu_weak_signal) {
      return false;
    }
    if (this->rcu_elec_low_alarm != other.rcu_elec_low_alarm) {
      return false;
    }
    if (this->reserve1 != other.reserve1) {
      return false;
    }
    if (this->reserve2 != other.reserve2) {
      return false;
    }
    if (this->bms_network_fault != other.bms_network_fault) {
      return false;
    }
    if (this->bms_insulationfault != other.bms_insulationfault) {
      return false;
    }
    if (this->bms_ocv_cell != other.bms_ocv_cell) {
      return false;
    }
    if (this->bms_odv_cell != other.bms_odv_cell) {
      return false;
    }
    if (this->bms_ocv_batt != other.bms_ocv_batt) {
      return false;
    }
    if (this->bms_odv_batt != other.bms_odv_batt) {
      return false;
    }
    if (this->bms_cell_volt_diff != other.bms_cell_volt_diff) {
      return false;
    }
    if (this->bms_temph != other.bms_temph) {
      return false;
    }
    if (this->bms_temphl != other.bms_temphl) {
      return false;
    }
    if (this->bms_temph_diff != other.bms_temph_diff) {
      return false;
    }
    if (this->bms_warchg_overcurrent != other.bms_warchg_overcurrent) {
      return false;
    }
    if (this->bms_soch != other.bms_soch) {
      return false;
    }
    if (this->bms_socl != other.bms_socl) {
      return false;
    }
    if (this->bms_time_of_heating_too_long != other.bms_time_of_heating_too_long) {
      return false;
    }
    if (this->bms_soc_break != other.bms_soc_break) {
      return false;
    }
    if (this->bms_dis_char_over_cur != other.bms_dis_char_over_cur) {
      return false;
    }
    if (this->bms_char_over_cur_slow != other.bms_char_over_cur_slow) {
      return false;
    }
    if (this->bmsfast_char_over_cur != other.bmsfast_char_over_cur) {
      return false;
    }
    if (this->bms_alm_sense_cell != other.bms_alm_sense_cell) {
      return false;
    }
    if (this->bms_alm_sense_temp != other.bms_alm_sense_temp) {
      return false;
    }
    if (this->bms_alm_sense_curr != other.bms_alm_sense_curr) {
      return false;
    }
    if (this->bms_hvil != other.bms_hvil) {
      return false;
    }
    if (this->bms_war_incan_fault != other.bms_war_incan_fault) {
      return false;
    }
    if (this->bms_lst_com_withobc != other.bms_lst_com_withobc) {
      return false;
    }
    if (this->bms_lst_com_with_vcu != other.bms_lst_com_with_vcu) {
      return false;
    }
    if (this->bms_precharger_fault != other.bms_precharger_fault) {
      return false;
    }
    if (this->bmspos_relayconglutination != other.bmspos_relayconglutination) {
      return false;
    }
    if (this->bms_neg_relay_conglutination != other.bms_neg_relay_conglutination) {
      return false;
    }
    if (this->vcu_reserve3 != other.vcu_reserve3) {
      return false;
    }
    if (this->vcu_reserve4 != other.vcu_reserve4) {
      return false;
    }
    if (this->dcdc_high_tem_alarm != other.dcdc_high_tem_alarm) {
      return false;
    }
    if (this->dcdc_hardware_fault != other.dcdc_hardware_fault) {
      return false;
    }
    if (this->dcdc_network_fault != other.dcdc_network_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleErrcode1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleErrcode1_

// alias to use template instance with default allocator
using VehicleErrcode1 =
  pix_robobus_driver_msgs::msg::VehicleErrcode1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__STRUCT_HPP_
