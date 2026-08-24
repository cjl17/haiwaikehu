// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HistoricalVehiclefailures1_
{
  using Type = HistoricalVehiclefailures1_<ContainerAllocator>;

  explicit HistoricalVehiclefailures1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hflmc_hardware_fault = false;
      this->hflmc_tem_fault = false;
      this->hflm_tem_fault = false;
      this->hrlmc_hardware_fault = false;
      this->hrlmc_tem_fault = false;
      this->hrlm_tem_fault = false;
      this->hfrmc_hardware_fault = false;
      this->hfrmc_tem_fault = false;
      this->hfrm_tem_fault = false;
      this->hrrmc_hardware_fault = false;
      this->hrrmc_tem_fault = false;
      this->hrrm_tem_fault = false;
      this->hflmc_network_fault = false;
      this->hfrmc_network_fault = false;
      this->hrlmc_network_fault = false;
      this->hrrmc_network_fault = false;
      this->hfsteer_hardware_fault = false;
      this->hrsteer_hardware_fault = false;
      this->hfsteer_network_fault = false;
      this->hrsteer_network_fault = false;
      this->hbrake_hardware_fault = false;
      this->hbrake_high_tem_fault = false;
      this->hbrake_luid_level_low = false;
      this->hbrake_network_fault = false;
      this->hpark_hardware_fault = false;
      this->hpark_network_fault = false;
      this->hrcu_network_fault = false;
      this->hrcu_weak_signal = false;
      this->hrcu_elec_low_alarm = false;
      this->hbms_network_fault = false;
      this->hbms_insulationfault = false;
      this->hbms_ocv_cell = false;
      this->hbms_odv_cell = false;
      this->hbms_ocv_batt = false;
      this->hbms_odv_batt = false;
      this->hbms_cell_volt_diff = false;
      this->hbms_temph = false;
      this->hbms_temphl = false;
      this->hbms_temph_diff = false;
      this->hbms_warchg_overcurrent = false;
      this->hbms_soch = false;
      this->hbms_socl = false;
      this->hbms_time_of_heating_too_long = false;
      this->hbms_soc_break = false;
      this->hbms_dis_char_over_cur = false;
      this->hbms_char_over_cur_slow = false;
      this->hbmsfast_char_over_cur = false;
      this->hbms_alm_sense_cell = false;
      this->hbms_alm_sense_temp = false;
      this->hbms_alm_sense_curr = false;
      this->hbms_hvil = false;
      this->hbms_war_incan_fault = false;
      this->hbms_lst_com_withobc = false;
      this->hbms_lst_com_with_vcu = false;
      this->hbms_precharger_fault = false;
      this->hbmspos_relayconglutination = false;
      this->hbms_neg_relay_conglutination = false;
      this->hdcdc_high_tem_alarm = false;
      this->hdcdc_hardware_fault = false;
      this->hdcdc_network_fault = false;
    }
  }

  explicit HistoricalVehiclefailures1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hflmc_hardware_fault = false;
      this->hflmc_tem_fault = false;
      this->hflm_tem_fault = false;
      this->hrlmc_hardware_fault = false;
      this->hrlmc_tem_fault = false;
      this->hrlm_tem_fault = false;
      this->hfrmc_hardware_fault = false;
      this->hfrmc_tem_fault = false;
      this->hfrm_tem_fault = false;
      this->hrrmc_hardware_fault = false;
      this->hrrmc_tem_fault = false;
      this->hrrm_tem_fault = false;
      this->hflmc_network_fault = false;
      this->hfrmc_network_fault = false;
      this->hrlmc_network_fault = false;
      this->hrrmc_network_fault = false;
      this->hfsteer_hardware_fault = false;
      this->hrsteer_hardware_fault = false;
      this->hfsteer_network_fault = false;
      this->hrsteer_network_fault = false;
      this->hbrake_hardware_fault = false;
      this->hbrake_high_tem_fault = false;
      this->hbrake_luid_level_low = false;
      this->hbrake_network_fault = false;
      this->hpark_hardware_fault = false;
      this->hpark_network_fault = false;
      this->hrcu_network_fault = false;
      this->hrcu_weak_signal = false;
      this->hrcu_elec_low_alarm = false;
      this->hbms_network_fault = false;
      this->hbms_insulationfault = false;
      this->hbms_ocv_cell = false;
      this->hbms_odv_cell = false;
      this->hbms_ocv_batt = false;
      this->hbms_odv_batt = false;
      this->hbms_cell_volt_diff = false;
      this->hbms_temph = false;
      this->hbms_temphl = false;
      this->hbms_temph_diff = false;
      this->hbms_warchg_overcurrent = false;
      this->hbms_soch = false;
      this->hbms_socl = false;
      this->hbms_time_of_heating_too_long = false;
      this->hbms_soc_break = false;
      this->hbms_dis_char_over_cur = false;
      this->hbms_char_over_cur_slow = false;
      this->hbmsfast_char_over_cur = false;
      this->hbms_alm_sense_cell = false;
      this->hbms_alm_sense_temp = false;
      this->hbms_alm_sense_curr = false;
      this->hbms_hvil = false;
      this->hbms_war_incan_fault = false;
      this->hbms_lst_com_withobc = false;
      this->hbms_lst_com_with_vcu = false;
      this->hbms_precharger_fault = false;
      this->hbmspos_relayconglutination = false;
      this->hbms_neg_relay_conglutination = false;
      this->hdcdc_high_tem_alarm = false;
      this->hdcdc_hardware_fault = false;
      this->hdcdc_network_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hflmc_hardware_fault_type =
    bool;
  _hflmc_hardware_fault_type hflmc_hardware_fault;
  using _hflmc_tem_fault_type =
    bool;
  _hflmc_tem_fault_type hflmc_tem_fault;
  using _hflm_tem_fault_type =
    bool;
  _hflm_tem_fault_type hflm_tem_fault;
  using _hrlmc_hardware_fault_type =
    bool;
  _hrlmc_hardware_fault_type hrlmc_hardware_fault;
  using _hrlmc_tem_fault_type =
    bool;
  _hrlmc_tem_fault_type hrlmc_tem_fault;
  using _hrlm_tem_fault_type =
    bool;
  _hrlm_tem_fault_type hrlm_tem_fault;
  using _hfrmc_hardware_fault_type =
    bool;
  _hfrmc_hardware_fault_type hfrmc_hardware_fault;
  using _hfrmc_tem_fault_type =
    bool;
  _hfrmc_tem_fault_type hfrmc_tem_fault;
  using _hfrm_tem_fault_type =
    bool;
  _hfrm_tem_fault_type hfrm_tem_fault;
  using _hrrmc_hardware_fault_type =
    bool;
  _hrrmc_hardware_fault_type hrrmc_hardware_fault;
  using _hrrmc_tem_fault_type =
    bool;
  _hrrmc_tem_fault_type hrrmc_tem_fault;
  using _hrrm_tem_fault_type =
    bool;
  _hrrm_tem_fault_type hrrm_tem_fault;
  using _hflmc_network_fault_type =
    bool;
  _hflmc_network_fault_type hflmc_network_fault;
  using _hfrmc_network_fault_type =
    bool;
  _hfrmc_network_fault_type hfrmc_network_fault;
  using _hrlmc_network_fault_type =
    bool;
  _hrlmc_network_fault_type hrlmc_network_fault;
  using _hrrmc_network_fault_type =
    bool;
  _hrrmc_network_fault_type hrrmc_network_fault;
  using _hfsteer_hardware_fault_type =
    bool;
  _hfsteer_hardware_fault_type hfsteer_hardware_fault;
  using _hrsteer_hardware_fault_type =
    bool;
  _hrsteer_hardware_fault_type hrsteer_hardware_fault;
  using _hfsteer_network_fault_type =
    bool;
  _hfsteer_network_fault_type hfsteer_network_fault;
  using _hrsteer_network_fault_type =
    bool;
  _hrsteer_network_fault_type hrsteer_network_fault;
  using _hbrake_hardware_fault_type =
    bool;
  _hbrake_hardware_fault_type hbrake_hardware_fault;
  using _hbrake_high_tem_fault_type =
    bool;
  _hbrake_high_tem_fault_type hbrake_high_tem_fault;
  using _hbrake_luid_level_low_type =
    bool;
  _hbrake_luid_level_low_type hbrake_luid_level_low;
  using _hbrake_network_fault_type =
    bool;
  _hbrake_network_fault_type hbrake_network_fault;
  using _hpark_hardware_fault_type =
    bool;
  _hpark_hardware_fault_type hpark_hardware_fault;
  using _hpark_network_fault_type =
    bool;
  _hpark_network_fault_type hpark_network_fault;
  using _hrcu_network_fault_type =
    bool;
  _hrcu_network_fault_type hrcu_network_fault;
  using _hrcu_weak_signal_type =
    bool;
  _hrcu_weak_signal_type hrcu_weak_signal;
  using _hrcu_elec_low_alarm_type =
    bool;
  _hrcu_elec_low_alarm_type hrcu_elec_low_alarm;
  using _hbms_network_fault_type =
    bool;
  _hbms_network_fault_type hbms_network_fault;
  using _hbms_insulationfault_type =
    bool;
  _hbms_insulationfault_type hbms_insulationfault;
  using _hbms_ocv_cell_type =
    bool;
  _hbms_ocv_cell_type hbms_ocv_cell;
  using _hbms_odv_cell_type =
    bool;
  _hbms_odv_cell_type hbms_odv_cell;
  using _hbms_ocv_batt_type =
    bool;
  _hbms_ocv_batt_type hbms_ocv_batt;
  using _hbms_odv_batt_type =
    bool;
  _hbms_odv_batt_type hbms_odv_batt;
  using _hbms_cell_volt_diff_type =
    bool;
  _hbms_cell_volt_diff_type hbms_cell_volt_diff;
  using _hbms_temph_type =
    bool;
  _hbms_temph_type hbms_temph;
  using _hbms_temphl_type =
    bool;
  _hbms_temphl_type hbms_temphl;
  using _hbms_temph_diff_type =
    bool;
  _hbms_temph_diff_type hbms_temph_diff;
  using _hbms_warchg_overcurrent_type =
    bool;
  _hbms_warchg_overcurrent_type hbms_warchg_overcurrent;
  using _hbms_soch_type =
    bool;
  _hbms_soch_type hbms_soch;
  using _hbms_socl_type =
    bool;
  _hbms_socl_type hbms_socl;
  using _hbms_time_of_heating_too_long_type =
    bool;
  _hbms_time_of_heating_too_long_type hbms_time_of_heating_too_long;
  using _hbms_soc_break_type =
    bool;
  _hbms_soc_break_type hbms_soc_break;
  using _hbms_dis_char_over_cur_type =
    bool;
  _hbms_dis_char_over_cur_type hbms_dis_char_over_cur;
  using _hbms_char_over_cur_slow_type =
    bool;
  _hbms_char_over_cur_slow_type hbms_char_over_cur_slow;
  using _hbmsfast_char_over_cur_type =
    bool;
  _hbmsfast_char_over_cur_type hbmsfast_char_over_cur;
  using _hbms_alm_sense_cell_type =
    bool;
  _hbms_alm_sense_cell_type hbms_alm_sense_cell;
  using _hbms_alm_sense_temp_type =
    bool;
  _hbms_alm_sense_temp_type hbms_alm_sense_temp;
  using _hbms_alm_sense_curr_type =
    bool;
  _hbms_alm_sense_curr_type hbms_alm_sense_curr;
  using _hbms_hvil_type =
    bool;
  _hbms_hvil_type hbms_hvil;
  using _hbms_war_incan_fault_type =
    bool;
  _hbms_war_incan_fault_type hbms_war_incan_fault;
  using _hbms_lst_com_withobc_type =
    bool;
  _hbms_lst_com_withobc_type hbms_lst_com_withobc;
  using _hbms_lst_com_with_vcu_type =
    bool;
  _hbms_lst_com_with_vcu_type hbms_lst_com_with_vcu;
  using _hbms_precharger_fault_type =
    bool;
  _hbms_precharger_fault_type hbms_precharger_fault;
  using _hbmspos_relayconglutination_type =
    bool;
  _hbmspos_relayconglutination_type hbmspos_relayconglutination;
  using _hbms_neg_relay_conglutination_type =
    bool;
  _hbms_neg_relay_conglutination_type hbms_neg_relay_conglutination;
  using _hdcdc_high_tem_alarm_type =
    bool;
  _hdcdc_high_tem_alarm_type hdcdc_high_tem_alarm;
  using _hdcdc_hardware_fault_type =
    bool;
  _hdcdc_hardware_fault_type hdcdc_hardware_fault;
  using _hdcdc_network_fault_type =
    bool;
  _hdcdc_network_fault_type hdcdc_network_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hflmc_hardware_fault(
    const bool & _arg)
  {
    this->hflmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hflmc_tem_fault(
    const bool & _arg)
  {
    this->hflmc_tem_fault = _arg;
    return *this;
  }
  Type & set__hflm_tem_fault(
    const bool & _arg)
  {
    this->hflm_tem_fault = _arg;
    return *this;
  }
  Type & set__hrlmc_hardware_fault(
    const bool & _arg)
  {
    this->hrlmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hrlmc_tem_fault(
    const bool & _arg)
  {
    this->hrlmc_tem_fault = _arg;
    return *this;
  }
  Type & set__hrlm_tem_fault(
    const bool & _arg)
  {
    this->hrlm_tem_fault = _arg;
    return *this;
  }
  Type & set__hfrmc_hardware_fault(
    const bool & _arg)
  {
    this->hfrmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hfrmc_tem_fault(
    const bool & _arg)
  {
    this->hfrmc_tem_fault = _arg;
    return *this;
  }
  Type & set__hfrm_tem_fault(
    const bool & _arg)
  {
    this->hfrm_tem_fault = _arg;
    return *this;
  }
  Type & set__hrrmc_hardware_fault(
    const bool & _arg)
  {
    this->hrrmc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hrrmc_tem_fault(
    const bool & _arg)
  {
    this->hrrmc_tem_fault = _arg;
    return *this;
  }
  Type & set__hrrm_tem_fault(
    const bool & _arg)
  {
    this->hrrm_tem_fault = _arg;
    return *this;
  }
  Type & set__hflmc_network_fault(
    const bool & _arg)
  {
    this->hflmc_network_fault = _arg;
    return *this;
  }
  Type & set__hfrmc_network_fault(
    const bool & _arg)
  {
    this->hfrmc_network_fault = _arg;
    return *this;
  }
  Type & set__hrlmc_network_fault(
    const bool & _arg)
  {
    this->hrlmc_network_fault = _arg;
    return *this;
  }
  Type & set__hrrmc_network_fault(
    const bool & _arg)
  {
    this->hrrmc_network_fault = _arg;
    return *this;
  }
  Type & set__hfsteer_hardware_fault(
    const bool & _arg)
  {
    this->hfsteer_hardware_fault = _arg;
    return *this;
  }
  Type & set__hrsteer_hardware_fault(
    const bool & _arg)
  {
    this->hrsteer_hardware_fault = _arg;
    return *this;
  }
  Type & set__hfsteer_network_fault(
    const bool & _arg)
  {
    this->hfsteer_network_fault = _arg;
    return *this;
  }
  Type & set__hrsteer_network_fault(
    const bool & _arg)
  {
    this->hrsteer_network_fault = _arg;
    return *this;
  }
  Type & set__hbrake_hardware_fault(
    const bool & _arg)
  {
    this->hbrake_hardware_fault = _arg;
    return *this;
  }
  Type & set__hbrake_high_tem_fault(
    const bool & _arg)
  {
    this->hbrake_high_tem_fault = _arg;
    return *this;
  }
  Type & set__hbrake_luid_level_low(
    const bool & _arg)
  {
    this->hbrake_luid_level_low = _arg;
    return *this;
  }
  Type & set__hbrake_network_fault(
    const bool & _arg)
  {
    this->hbrake_network_fault = _arg;
    return *this;
  }
  Type & set__hpark_hardware_fault(
    const bool & _arg)
  {
    this->hpark_hardware_fault = _arg;
    return *this;
  }
  Type & set__hpark_network_fault(
    const bool & _arg)
  {
    this->hpark_network_fault = _arg;
    return *this;
  }
  Type & set__hrcu_network_fault(
    const bool & _arg)
  {
    this->hrcu_network_fault = _arg;
    return *this;
  }
  Type & set__hrcu_weak_signal(
    const bool & _arg)
  {
    this->hrcu_weak_signal = _arg;
    return *this;
  }
  Type & set__hrcu_elec_low_alarm(
    const bool & _arg)
  {
    this->hrcu_elec_low_alarm = _arg;
    return *this;
  }
  Type & set__hbms_network_fault(
    const bool & _arg)
  {
    this->hbms_network_fault = _arg;
    return *this;
  }
  Type & set__hbms_insulationfault(
    const bool & _arg)
  {
    this->hbms_insulationfault = _arg;
    return *this;
  }
  Type & set__hbms_ocv_cell(
    const bool & _arg)
  {
    this->hbms_ocv_cell = _arg;
    return *this;
  }
  Type & set__hbms_odv_cell(
    const bool & _arg)
  {
    this->hbms_odv_cell = _arg;
    return *this;
  }
  Type & set__hbms_ocv_batt(
    const bool & _arg)
  {
    this->hbms_ocv_batt = _arg;
    return *this;
  }
  Type & set__hbms_odv_batt(
    const bool & _arg)
  {
    this->hbms_odv_batt = _arg;
    return *this;
  }
  Type & set__hbms_cell_volt_diff(
    const bool & _arg)
  {
    this->hbms_cell_volt_diff = _arg;
    return *this;
  }
  Type & set__hbms_temph(
    const bool & _arg)
  {
    this->hbms_temph = _arg;
    return *this;
  }
  Type & set__hbms_temphl(
    const bool & _arg)
  {
    this->hbms_temphl = _arg;
    return *this;
  }
  Type & set__hbms_temph_diff(
    const bool & _arg)
  {
    this->hbms_temph_diff = _arg;
    return *this;
  }
  Type & set__hbms_warchg_overcurrent(
    const bool & _arg)
  {
    this->hbms_warchg_overcurrent = _arg;
    return *this;
  }
  Type & set__hbms_soch(
    const bool & _arg)
  {
    this->hbms_soch = _arg;
    return *this;
  }
  Type & set__hbms_socl(
    const bool & _arg)
  {
    this->hbms_socl = _arg;
    return *this;
  }
  Type & set__hbms_time_of_heating_too_long(
    const bool & _arg)
  {
    this->hbms_time_of_heating_too_long = _arg;
    return *this;
  }
  Type & set__hbms_soc_break(
    const bool & _arg)
  {
    this->hbms_soc_break = _arg;
    return *this;
  }
  Type & set__hbms_dis_char_over_cur(
    const bool & _arg)
  {
    this->hbms_dis_char_over_cur = _arg;
    return *this;
  }
  Type & set__hbms_char_over_cur_slow(
    const bool & _arg)
  {
    this->hbms_char_over_cur_slow = _arg;
    return *this;
  }
  Type & set__hbmsfast_char_over_cur(
    const bool & _arg)
  {
    this->hbmsfast_char_over_cur = _arg;
    return *this;
  }
  Type & set__hbms_alm_sense_cell(
    const bool & _arg)
  {
    this->hbms_alm_sense_cell = _arg;
    return *this;
  }
  Type & set__hbms_alm_sense_temp(
    const bool & _arg)
  {
    this->hbms_alm_sense_temp = _arg;
    return *this;
  }
  Type & set__hbms_alm_sense_curr(
    const bool & _arg)
  {
    this->hbms_alm_sense_curr = _arg;
    return *this;
  }
  Type & set__hbms_hvil(
    const bool & _arg)
  {
    this->hbms_hvil = _arg;
    return *this;
  }
  Type & set__hbms_war_incan_fault(
    const bool & _arg)
  {
    this->hbms_war_incan_fault = _arg;
    return *this;
  }
  Type & set__hbms_lst_com_withobc(
    const bool & _arg)
  {
    this->hbms_lst_com_withobc = _arg;
    return *this;
  }
  Type & set__hbms_lst_com_with_vcu(
    const bool & _arg)
  {
    this->hbms_lst_com_with_vcu = _arg;
    return *this;
  }
  Type & set__hbms_precharger_fault(
    const bool & _arg)
  {
    this->hbms_precharger_fault = _arg;
    return *this;
  }
  Type & set__hbmspos_relayconglutination(
    const bool & _arg)
  {
    this->hbmspos_relayconglutination = _arg;
    return *this;
  }
  Type & set__hbms_neg_relay_conglutination(
    const bool & _arg)
  {
    this->hbms_neg_relay_conglutination = _arg;
    return *this;
  }
  Type & set__hdcdc_high_tem_alarm(
    const bool & _arg)
  {
    this->hdcdc_high_tem_alarm = _arg;
    return *this;
  }
  Type & set__hdcdc_hardware_fault(
    const bool & _arg)
  {
    this->hdcdc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hdcdc_network_fault(
    const bool & _arg)
  {
    this->hdcdc_network_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HistoricalVehiclefailures1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hflmc_hardware_fault != other.hflmc_hardware_fault) {
      return false;
    }
    if (this->hflmc_tem_fault != other.hflmc_tem_fault) {
      return false;
    }
    if (this->hflm_tem_fault != other.hflm_tem_fault) {
      return false;
    }
    if (this->hrlmc_hardware_fault != other.hrlmc_hardware_fault) {
      return false;
    }
    if (this->hrlmc_tem_fault != other.hrlmc_tem_fault) {
      return false;
    }
    if (this->hrlm_tem_fault != other.hrlm_tem_fault) {
      return false;
    }
    if (this->hfrmc_hardware_fault != other.hfrmc_hardware_fault) {
      return false;
    }
    if (this->hfrmc_tem_fault != other.hfrmc_tem_fault) {
      return false;
    }
    if (this->hfrm_tem_fault != other.hfrm_tem_fault) {
      return false;
    }
    if (this->hrrmc_hardware_fault != other.hrrmc_hardware_fault) {
      return false;
    }
    if (this->hrrmc_tem_fault != other.hrrmc_tem_fault) {
      return false;
    }
    if (this->hrrm_tem_fault != other.hrrm_tem_fault) {
      return false;
    }
    if (this->hflmc_network_fault != other.hflmc_network_fault) {
      return false;
    }
    if (this->hfrmc_network_fault != other.hfrmc_network_fault) {
      return false;
    }
    if (this->hrlmc_network_fault != other.hrlmc_network_fault) {
      return false;
    }
    if (this->hrrmc_network_fault != other.hrrmc_network_fault) {
      return false;
    }
    if (this->hfsteer_hardware_fault != other.hfsteer_hardware_fault) {
      return false;
    }
    if (this->hrsteer_hardware_fault != other.hrsteer_hardware_fault) {
      return false;
    }
    if (this->hfsteer_network_fault != other.hfsteer_network_fault) {
      return false;
    }
    if (this->hrsteer_network_fault != other.hrsteer_network_fault) {
      return false;
    }
    if (this->hbrake_hardware_fault != other.hbrake_hardware_fault) {
      return false;
    }
    if (this->hbrake_high_tem_fault != other.hbrake_high_tem_fault) {
      return false;
    }
    if (this->hbrake_luid_level_low != other.hbrake_luid_level_low) {
      return false;
    }
    if (this->hbrake_network_fault != other.hbrake_network_fault) {
      return false;
    }
    if (this->hpark_hardware_fault != other.hpark_hardware_fault) {
      return false;
    }
    if (this->hpark_network_fault != other.hpark_network_fault) {
      return false;
    }
    if (this->hrcu_network_fault != other.hrcu_network_fault) {
      return false;
    }
    if (this->hrcu_weak_signal != other.hrcu_weak_signal) {
      return false;
    }
    if (this->hrcu_elec_low_alarm != other.hrcu_elec_low_alarm) {
      return false;
    }
    if (this->hbms_network_fault != other.hbms_network_fault) {
      return false;
    }
    if (this->hbms_insulationfault != other.hbms_insulationfault) {
      return false;
    }
    if (this->hbms_ocv_cell != other.hbms_ocv_cell) {
      return false;
    }
    if (this->hbms_odv_cell != other.hbms_odv_cell) {
      return false;
    }
    if (this->hbms_ocv_batt != other.hbms_ocv_batt) {
      return false;
    }
    if (this->hbms_odv_batt != other.hbms_odv_batt) {
      return false;
    }
    if (this->hbms_cell_volt_diff != other.hbms_cell_volt_diff) {
      return false;
    }
    if (this->hbms_temph != other.hbms_temph) {
      return false;
    }
    if (this->hbms_temphl != other.hbms_temphl) {
      return false;
    }
    if (this->hbms_temph_diff != other.hbms_temph_diff) {
      return false;
    }
    if (this->hbms_warchg_overcurrent != other.hbms_warchg_overcurrent) {
      return false;
    }
    if (this->hbms_soch != other.hbms_soch) {
      return false;
    }
    if (this->hbms_socl != other.hbms_socl) {
      return false;
    }
    if (this->hbms_time_of_heating_too_long != other.hbms_time_of_heating_too_long) {
      return false;
    }
    if (this->hbms_soc_break != other.hbms_soc_break) {
      return false;
    }
    if (this->hbms_dis_char_over_cur != other.hbms_dis_char_over_cur) {
      return false;
    }
    if (this->hbms_char_over_cur_slow != other.hbms_char_over_cur_slow) {
      return false;
    }
    if (this->hbmsfast_char_over_cur != other.hbmsfast_char_over_cur) {
      return false;
    }
    if (this->hbms_alm_sense_cell != other.hbms_alm_sense_cell) {
      return false;
    }
    if (this->hbms_alm_sense_temp != other.hbms_alm_sense_temp) {
      return false;
    }
    if (this->hbms_alm_sense_curr != other.hbms_alm_sense_curr) {
      return false;
    }
    if (this->hbms_hvil != other.hbms_hvil) {
      return false;
    }
    if (this->hbms_war_incan_fault != other.hbms_war_incan_fault) {
      return false;
    }
    if (this->hbms_lst_com_withobc != other.hbms_lst_com_withobc) {
      return false;
    }
    if (this->hbms_lst_com_with_vcu != other.hbms_lst_com_with_vcu) {
      return false;
    }
    if (this->hbms_precharger_fault != other.hbms_precharger_fault) {
      return false;
    }
    if (this->hbmspos_relayconglutination != other.hbmspos_relayconglutination) {
      return false;
    }
    if (this->hbms_neg_relay_conglutination != other.hbms_neg_relay_conglutination) {
      return false;
    }
    if (this->hdcdc_high_tem_alarm != other.hdcdc_high_tem_alarm) {
      return false;
    }
    if (this->hdcdc_hardware_fault != other.hdcdc_hardware_fault) {
      return false;
    }
    if (this->hdcdc_network_fault != other.hdcdc_network_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const HistoricalVehiclefailures1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HistoricalVehiclefailures1_

// alias to use template instance with default allocator
using HistoricalVehiclefailures1 =
  pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__STRUCT_HPP_
