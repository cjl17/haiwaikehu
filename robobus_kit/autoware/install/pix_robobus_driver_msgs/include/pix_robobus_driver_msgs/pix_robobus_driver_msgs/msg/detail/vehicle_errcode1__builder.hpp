// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleErrcode1_dcdc_network_fault
{
public:
  explicit Init_VehicleErrcode1_dcdc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 dcdc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_dcdc_network_fault_type arg)
  {
    msg_.dcdc_network_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_dcdc_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_dcdc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_dcdc_network_fault dcdc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_dcdc_hardware_fault_type arg)
  {
    msg_.dcdc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_dcdc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_dcdc_high_tem_alarm
{
public:
  explicit Init_VehicleErrcode1_dcdc_high_tem_alarm(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_dcdc_hardware_fault dcdc_high_tem_alarm(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_dcdc_high_tem_alarm_type arg)
  {
    msg_.dcdc_high_tem_alarm = std::move(arg);
    return Init_VehicleErrcode1_dcdc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_vcu_reserve4
{
public:
  explicit Init_VehicleErrcode1_vcu_reserve4(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_dcdc_high_tem_alarm vcu_reserve4(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_vcu_reserve4_type arg)
  {
    msg_.vcu_reserve4 = std::move(arg);
    return Init_VehicleErrcode1_dcdc_high_tem_alarm(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_vcu_reserve3
{
public:
  explicit Init_VehicleErrcode1_vcu_reserve3(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_vcu_reserve4 vcu_reserve3(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_vcu_reserve3_type arg)
  {
    msg_.vcu_reserve3 = std::move(arg);
    return Init_VehicleErrcode1_vcu_reserve4(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_neg_relay_conglutination
{
public:
  explicit Init_VehicleErrcode1_bms_neg_relay_conglutination(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_vcu_reserve3 bms_neg_relay_conglutination(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_neg_relay_conglutination_type arg)
  {
    msg_.bms_neg_relay_conglutination = std::move(arg);
    return Init_VehicleErrcode1_vcu_reserve3(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bmspos_relayconglutination
{
public:
  explicit Init_VehicleErrcode1_bmspos_relayconglutination(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_neg_relay_conglutination bmspos_relayconglutination(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bmspos_relayconglutination_type arg)
  {
    msg_.bmspos_relayconglutination = std::move(arg);
    return Init_VehicleErrcode1_bms_neg_relay_conglutination(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_precharger_fault
{
public:
  explicit Init_VehicleErrcode1_bms_precharger_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bmspos_relayconglutination bms_precharger_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_precharger_fault_type arg)
  {
    msg_.bms_precharger_fault = std::move(arg);
    return Init_VehicleErrcode1_bmspos_relayconglutination(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_lst_com_with_vcu
{
public:
  explicit Init_VehicleErrcode1_bms_lst_com_with_vcu(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_precharger_fault bms_lst_com_with_vcu(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_lst_com_with_vcu_type arg)
  {
    msg_.bms_lst_com_with_vcu = std::move(arg);
    return Init_VehicleErrcode1_bms_precharger_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_lst_com_withobc
{
public:
  explicit Init_VehicleErrcode1_bms_lst_com_withobc(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_lst_com_with_vcu bms_lst_com_withobc(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_lst_com_withobc_type arg)
  {
    msg_.bms_lst_com_withobc = std::move(arg);
    return Init_VehicleErrcode1_bms_lst_com_with_vcu(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_war_incan_fault
{
public:
  explicit Init_VehicleErrcode1_bms_war_incan_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_lst_com_withobc bms_war_incan_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_war_incan_fault_type arg)
  {
    msg_.bms_war_incan_fault = std::move(arg);
    return Init_VehicleErrcode1_bms_lst_com_withobc(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_hvil
{
public:
  explicit Init_VehicleErrcode1_bms_hvil(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_war_incan_fault bms_hvil(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_hvil_type arg)
  {
    msg_.bms_hvil = std::move(arg);
    return Init_VehicleErrcode1_bms_war_incan_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_alm_sense_curr
{
public:
  explicit Init_VehicleErrcode1_bms_alm_sense_curr(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_hvil bms_alm_sense_curr(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_alm_sense_curr_type arg)
  {
    msg_.bms_alm_sense_curr = std::move(arg);
    return Init_VehicleErrcode1_bms_hvil(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_alm_sense_temp
{
public:
  explicit Init_VehicleErrcode1_bms_alm_sense_temp(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_alm_sense_curr bms_alm_sense_temp(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_alm_sense_temp_type arg)
  {
    msg_.bms_alm_sense_temp = std::move(arg);
    return Init_VehicleErrcode1_bms_alm_sense_curr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_alm_sense_cell
{
public:
  explicit Init_VehicleErrcode1_bms_alm_sense_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_alm_sense_temp bms_alm_sense_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_alm_sense_cell_type arg)
  {
    msg_.bms_alm_sense_cell = std::move(arg);
    return Init_VehicleErrcode1_bms_alm_sense_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bmsfast_char_over_cur
{
public:
  explicit Init_VehicleErrcode1_bmsfast_char_over_cur(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_alm_sense_cell bmsfast_char_over_cur(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bmsfast_char_over_cur_type arg)
  {
    msg_.bmsfast_char_over_cur = std::move(arg);
    return Init_VehicleErrcode1_bms_alm_sense_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_char_over_cur_slow
{
public:
  explicit Init_VehicleErrcode1_bms_char_over_cur_slow(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bmsfast_char_over_cur bms_char_over_cur_slow(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_char_over_cur_slow_type arg)
  {
    msg_.bms_char_over_cur_slow = std::move(arg);
    return Init_VehicleErrcode1_bmsfast_char_over_cur(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_dis_char_over_cur
{
public:
  explicit Init_VehicleErrcode1_bms_dis_char_over_cur(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_char_over_cur_slow bms_dis_char_over_cur(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_dis_char_over_cur_type arg)
  {
    msg_.bms_dis_char_over_cur = std::move(arg);
    return Init_VehicleErrcode1_bms_char_over_cur_slow(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_soc_break
{
public:
  explicit Init_VehicleErrcode1_bms_soc_break(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_dis_char_over_cur bms_soc_break(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_soc_break_type arg)
  {
    msg_.bms_soc_break = std::move(arg);
    return Init_VehicleErrcode1_bms_dis_char_over_cur(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_time_of_heating_too_long
{
public:
  explicit Init_VehicleErrcode1_bms_time_of_heating_too_long(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_soc_break bms_time_of_heating_too_long(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_time_of_heating_too_long_type arg)
  {
    msg_.bms_time_of_heating_too_long = std::move(arg);
    return Init_VehicleErrcode1_bms_soc_break(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_socl
{
public:
  explicit Init_VehicleErrcode1_bms_socl(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_time_of_heating_too_long bms_socl(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_socl_type arg)
  {
    msg_.bms_socl = std::move(arg);
    return Init_VehicleErrcode1_bms_time_of_heating_too_long(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_soch
{
public:
  explicit Init_VehicleErrcode1_bms_soch(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_socl bms_soch(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_soch_type arg)
  {
    msg_.bms_soch = std::move(arg);
    return Init_VehicleErrcode1_bms_socl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_warchg_overcurrent
{
public:
  explicit Init_VehicleErrcode1_bms_warchg_overcurrent(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_soch bms_warchg_overcurrent(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_warchg_overcurrent_type arg)
  {
    msg_.bms_warchg_overcurrent = std::move(arg);
    return Init_VehicleErrcode1_bms_soch(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_temph_diff
{
public:
  explicit Init_VehicleErrcode1_bms_temph_diff(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_warchg_overcurrent bms_temph_diff(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_temph_diff_type arg)
  {
    msg_.bms_temph_diff = std::move(arg);
    return Init_VehicleErrcode1_bms_warchg_overcurrent(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_temphl
{
public:
  explicit Init_VehicleErrcode1_bms_temphl(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_temph_diff bms_temphl(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_temphl_type arg)
  {
    msg_.bms_temphl = std::move(arg);
    return Init_VehicleErrcode1_bms_temph_diff(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_temph
{
public:
  explicit Init_VehicleErrcode1_bms_temph(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_temphl bms_temph(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_temph_type arg)
  {
    msg_.bms_temph = std::move(arg);
    return Init_VehicleErrcode1_bms_temphl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_cell_volt_diff
{
public:
  explicit Init_VehicleErrcode1_bms_cell_volt_diff(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_temph bms_cell_volt_diff(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_cell_volt_diff_type arg)
  {
    msg_.bms_cell_volt_diff = std::move(arg);
    return Init_VehicleErrcode1_bms_temph(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_odv_batt
{
public:
  explicit Init_VehicleErrcode1_bms_odv_batt(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_cell_volt_diff bms_odv_batt(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_odv_batt_type arg)
  {
    msg_.bms_odv_batt = std::move(arg);
    return Init_VehicleErrcode1_bms_cell_volt_diff(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_ocv_batt
{
public:
  explicit Init_VehicleErrcode1_bms_ocv_batt(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_odv_batt bms_ocv_batt(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_ocv_batt_type arg)
  {
    msg_.bms_ocv_batt = std::move(arg);
    return Init_VehicleErrcode1_bms_odv_batt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_odv_cell
{
public:
  explicit Init_VehicleErrcode1_bms_odv_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_ocv_batt bms_odv_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_odv_cell_type arg)
  {
    msg_.bms_odv_cell = std::move(arg);
    return Init_VehicleErrcode1_bms_ocv_batt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_ocv_cell
{
public:
  explicit Init_VehicleErrcode1_bms_ocv_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_odv_cell bms_ocv_cell(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_ocv_cell_type arg)
  {
    msg_.bms_ocv_cell = std::move(arg);
    return Init_VehicleErrcode1_bms_odv_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_insulationfault
{
public:
  explicit Init_VehicleErrcode1_bms_insulationfault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_ocv_cell bms_insulationfault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_insulationfault_type arg)
  {
    msg_.bms_insulationfault = std::move(arg);
    return Init_VehicleErrcode1_bms_ocv_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_bms_network_fault
{
public:
  explicit Init_VehicleErrcode1_bms_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_insulationfault bms_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_bms_network_fault_type arg)
  {
    msg_.bms_network_fault = std::move(arg);
    return Init_VehicleErrcode1_bms_insulationfault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_reserve2
{
public:
  explicit Init_VehicleErrcode1_reserve2(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_bms_network_fault reserve2(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_reserve2_type arg)
  {
    msg_.reserve2 = std::move(arg);
    return Init_VehicleErrcode1_bms_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_reserve1
{
public:
  explicit Init_VehicleErrcode1_reserve1(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_reserve2 reserve1(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_reserve1_type arg)
  {
    msg_.reserve1 = std::move(arg);
    return Init_VehicleErrcode1_reserve2(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rcu_elec_low_alarm
{
public:
  explicit Init_VehicleErrcode1_rcu_elec_low_alarm(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_reserve1 rcu_elec_low_alarm(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rcu_elec_low_alarm_type arg)
  {
    msg_.rcu_elec_low_alarm = std::move(arg);
    return Init_VehicleErrcode1_reserve1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rcu_weak_signal
{
public:
  explicit Init_VehicleErrcode1_rcu_weak_signal(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rcu_elec_low_alarm rcu_weak_signal(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rcu_weak_signal_type arg)
  {
    msg_.rcu_weak_signal = std::move(arg);
    return Init_VehicleErrcode1_rcu_elec_low_alarm(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rcu_network_fault
{
public:
  explicit Init_VehicleErrcode1_rcu_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rcu_weak_signal rcu_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rcu_network_fault_type arg)
  {
    msg_.rcu_network_fault = std::move(arg);
    return Init_VehicleErrcode1_rcu_weak_signal(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_park_network_fault
{
public:
  explicit Init_VehicleErrcode1_park_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rcu_network_fault park_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_park_network_fault_type arg)
  {
    msg_.park_network_fault = std::move(arg);
    return Init_VehicleErrcode1_rcu_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_park_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_park_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_park_network_fault park_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_park_hardware_fault_type arg)
  {
    msg_.park_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_park_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_brake_network_fault
{
public:
  explicit Init_VehicleErrcode1_brake_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_park_hardware_fault brake_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_brake_network_fault_type arg)
  {
    msg_.brake_network_fault = std::move(arg);
    return Init_VehicleErrcode1_park_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_brake_luid_level_low
{
public:
  explicit Init_VehicleErrcode1_brake_luid_level_low(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_brake_network_fault brake_luid_level_low(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_brake_luid_level_low_type arg)
  {
    msg_.brake_luid_level_low = std::move(arg);
    return Init_VehicleErrcode1_brake_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_brake_high_tem_fault
{
public:
  explicit Init_VehicleErrcode1_brake_high_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_brake_luid_level_low brake_high_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_brake_high_tem_fault_type arg)
  {
    msg_.brake_high_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_brake_luid_level_low(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_brake_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_brake_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_brake_high_tem_fault brake_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_brake_hardware_fault_type arg)
  {
    msg_.brake_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_brake_high_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rsteer_network_fault
{
public:
  explicit Init_VehicleErrcode1_rsteer_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_brake_hardware_fault rsteer_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rsteer_network_fault_type arg)
  {
    msg_.rsteer_network_fault = std::move(arg);
    return Init_VehicleErrcode1_brake_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_fsteer_network_fault
{
public:
  explicit Init_VehicleErrcode1_fsteer_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rsteer_network_fault fsteer_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_fsteer_network_fault_type arg)
  {
    msg_.fsteer_network_fault = std::move(arg);
    return Init_VehicleErrcode1_rsteer_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rsteer_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_rsteer_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_fsteer_network_fault rsteer_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rsteer_hardware_fault_type arg)
  {
    msg_.rsteer_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_fsteer_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_fsteer_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_fsteer_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rsteer_hardware_fault fsteer_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_fsteer_hardware_fault_type arg)
  {
    msg_.fsteer_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_rsteer_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rrmc_network_fault
{
public:
  explicit Init_VehicleErrcode1_rrmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_fsteer_hardware_fault rrmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rrmc_network_fault_type arg)
  {
    msg_.rrmc_network_fault = std::move(arg);
    return Init_VehicleErrcode1_fsteer_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rlmc_network_fault
{
public:
  explicit Init_VehicleErrcode1_rlmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rrmc_network_fault rlmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rlmc_network_fault_type arg)
  {
    msg_.rlmc_network_fault = std::move(arg);
    return Init_VehicleErrcode1_rrmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_frmc_network_fault
{
public:
  explicit Init_VehicleErrcode1_frmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rlmc_network_fault frmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_frmc_network_fault_type arg)
  {
    msg_.frmc_network_fault = std::move(arg);
    return Init_VehicleErrcode1_rlmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_flmc_network_fault
{
public:
  explicit Init_VehicleErrcode1_flmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_frmc_network_fault flmc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_flmc_network_fault_type arg)
  {
    msg_.flmc_network_fault = std::move(arg);
    return Init_VehicleErrcode1_frmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rrm_tem_fault
{
public:
  explicit Init_VehicleErrcode1_rrm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_flmc_network_fault rrm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rrm_tem_fault_type arg)
  {
    msg_.rrm_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_flmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rrmc_tem_fault
{
public:
  explicit Init_VehicleErrcode1_rrmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rrm_tem_fault rrmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rrmc_tem_fault_type arg)
  {
    msg_.rrmc_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_rrm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rrmc_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_rrmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rrmc_tem_fault rrmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rrmc_hardware_fault_type arg)
  {
    msg_.rrmc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_rrmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_frm_tem_fault
{
public:
  explicit Init_VehicleErrcode1_frm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rrmc_hardware_fault frm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_frm_tem_fault_type arg)
  {
    msg_.frm_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_rrmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_frmc_tem_fault
{
public:
  explicit Init_VehicleErrcode1_frmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_frm_tem_fault frmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_frmc_tem_fault_type arg)
  {
    msg_.frmc_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_frm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_frmc_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_frmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_frmc_tem_fault frmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_frmc_hardware_fault_type arg)
  {
    msg_.frmc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_frmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rlm_tem_fault
{
public:
  explicit Init_VehicleErrcode1_rlm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_frmc_hardware_fault rlm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rlm_tem_fault_type arg)
  {
    msg_.rlm_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_frmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rlmc_tem_fault
{
public:
  explicit Init_VehicleErrcode1_rlmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rlm_tem_fault rlmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rlmc_tem_fault_type arg)
  {
    msg_.rlmc_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_rlm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_rlmc_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_rlmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rlmc_tem_fault rlmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_rlmc_hardware_fault_type arg)
  {
    msg_.rlmc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_rlmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_flm_tem_fault
{
public:
  explicit Init_VehicleErrcode1_flm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_rlmc_hardware_fault flm_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_flm_tem_fault_type arg)
  {
    msg_.flm_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_rlmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_flmc_tem_fault
{
public:
  explicit Init_VehicleErrcode1_flmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_flm_tem_fault flmc_tem_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_flmc_tem_fault_type arg)
  {
    msg_.flmc_tem_fault = std::move(arg);
    return Init_VehicleErrcode1_flm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_flmc_hardware_fault
{
public:
  explicit Init_VehicleErrcode1_flmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode1_flmc_tem_fault flmc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_flmc_hardware_fault_type arg)
  {
    msg_.flmc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode1_flmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

class Init_VehicleErrcode1_header
{
public:
  Init_VehicleErrcode1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleErrcode1_flmc_hardware_fault header(::pix_robobus_driver_msgs::msg::VehicleErrcode1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleErrcode1_flmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VehicleErrcode1>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VehicleErrcode1_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE1__BUILDER_HPP_
