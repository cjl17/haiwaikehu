// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_HistoricalVehiclefailures1_hdcdc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hdcdc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 hdcdc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hdcdc_network_fault_type arg)
  {
    msg_.hdcdc_network_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hdcdc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hdcdc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hdcdc_network_fault hdcdc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hdcdc_hardware_fault_type arg)
  {
    msg_.hdcdc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hdcdc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hdcdc_high_tem_alarm
{
public:
  explicit Init_HistoricalVehiclefailures1_hdcdc_high_tem_alarm(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hdcdc_hardware_fault hdcdc_high_tem_alarm(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hdcdc_high_tem_alarm_type arg)
  {
    msg_.hdcdc_high_tem_alarm = std::move(arg);
    return Init_HistoricalVehiclefailures1_hdcdc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_neg_relay_conglutination
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_neg_relay_conglutination(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hdcdc_high_tem_alarm hbms_neg_relay_conglutination(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_neg_relay_conglutination_type arg)
  {
    msg_.hbms_neg_relay_conglutination = std::move(arg);
    return Init_HistoricalVehiclefailures1_hdcdc_high_tem_alarm(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbmspos_relayconglutination
{
public:
  explicit Init_HistoricalVehiclefailures1_hbmspos_relayconglutination(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_neg_relay_conglutination hbmspos_relayconglutination(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbmspos_relayconglutination_type arg)
  {
    msg_.hbmspos_relayconglutination = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_neg_relay_conglutination(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_precharger_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_precharger_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbmspos_relayconglutination hbms_precharger_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_precharger_fault_type arg)
  {
    msg_.hbms_precharger_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbmspos_relayconglutination(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_lst_com_with_vcu
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_lst_com_with_vcu(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_precharger_fault hbms_lst_com_with_vcu(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_lst_com_with_vcu_type arg)
  {
    msg_.hbms_lst_com_with_vcu = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_precharger_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_lst_com_withobc
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_lst_com_withobc(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_lst_com_with_vcu hbms_lst_com_withobc(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_lst_com_withobc_type arg)
  {
    msg_.hbms_lst_com_withobc = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_lst_com_with_vcu(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_war_incan_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_war_incan_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_lst_com_withobc hbms_war_incan_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_war_incan_fault_type arg)
  {
    msg_.hbms_war_incan_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_lst_com_withobc(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_hvil
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_hvil(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_war_incan_fault hbms_hvil(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_hvil_type arg)
  {
    msg_.hbms_hvil = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_war_incan_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_alm_sense_curr
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_alm_sense_curr(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_hvil hbms_alm_sense_curr(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_alm_sense_curr_type arg)
  {
    msg_.hbms_alm_sense_curr = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_hvil(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_alm_sense_temp
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_alm_sense_temp(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_alm_sense_curr hbms_alm_sense_temp(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_alm_sense_temp_type arg)
  {
    msg_.hbms_alm_sense_temp = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_alm_sense_curr(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_alm_sense_cell
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_alm_sense_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_alm_sense_temp hbms_alm_sense_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_alm_sense_cell_type arg)
  {
    msg_.hbms_alm_sense_cell = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_alm_sense_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbmsfast_char_over_cur
{
public:
  explicit Init_HistoricalVehiclefailures1_hbmsfast_char_over_cur(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_alm_sense_cell hbmsfast_char_over_cur(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbmsfast_char_over_cur_type arg)
  {
    msg_.hbmsfast_char_over_cur = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_alm_sense_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_char_over_cur_slow
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_char_over_cur_slow(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbmsfast_char_over_cur hbms_char_over_cur_slow(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_char_over_cur_slow_type arg)
  {
    msg_.hbms_char_over_cur_slow = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbmsfast_char_over_cur(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_dis_char_over_cur
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_dis_char_over_cur(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_char_over_cur_slow hbms_dis_char_over_cur(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_dis_char_over_cur_type arg)
  {
    msg_.hbms_dis_char_over_cur = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_char_over_cur_slow(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_soc_break
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_soc_break(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_dis_char_over_cur hbms_soc_break(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_soc_break_type arg)
  {
    msg_.hbms_soc_break = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_dis_char_over_cur(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_time_of_heating_too_long
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_time_of_heating_too_long(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_soc_break hbms_time_of_heating_too_long(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_time_of_heating_too_long_type arg)
  {
    msg_.hbms_time_of_heating_too_long = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_soc_break(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_socl
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_socl(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_time_of_heating_too_long hbms_socl(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_socl_type arg)
  {
    msg_.hbms_socl = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_time_of_heating_too_long(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_soch
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_soch(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_socl hbms_soch(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_soch_type arg)
  {
    msg_.hbms_soch = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_socl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_warchg_overcurrent
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_warchg_overcurrent(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_soch hbms_warchg_overcurrent(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_warchg_overcurrent_type arg)
  {
    msg_.hbms_warchg_overcurrent = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_soch(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_temph_diff
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_temph_diff(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_warchg_overcurrent hbms_temph_diff(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_temph_diff_type arg)
  {
    msg_.hbms_temph_diff = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_warchg_overcurrent(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_temphl
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_temphl(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_temph_diff hbms_temphl(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_temphl_type arg)
  {
    msg_.hbms_temphl = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_temph_diff(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_temph
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_temph(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_temphl hbms_temph(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_temph_type arg)
  {
    msg_.hbms_temph = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_temphl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_cell_volt_diff
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_cell_volt_diff(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_temph hbms_cell_volt_diff(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_cell_volt_diff_type arg)
  {
    msg_.hbms_cell_volt_diff = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_temph(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_odv_batt
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_odv_batt(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_cell_volt_diff hbms_odv_batt(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_odv_batt_type arg)
  {
    msg_.hbms_odv_batt = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_cell_volt_diff(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_ocv_batt
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_ocv_batt(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_odv_batt hbms_ocv_batt(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_ocv_batt_type arg)
  {
    msg_.hbms_ocv_batt = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_odv_batt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_odv_cell
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_odv_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_ocv_batt hbms_odv_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_odv_cell_type arg)
  {
    msg_.hbms_odv_cell = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_ocv_batt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_ocv_cell
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_ocv_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_odv_cell hbms_ocv_cell(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_ocv_cell_type arg)
  {
    msg_.hbms_ocv_cell = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_odv_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_insulationfault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_insulationfault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_ocv_cell hbms_insulationfault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_insulationfault_type arg)
  {
    msg_.hbms_insulationfault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_ocv_cell(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbms_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbms_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_insulationfault hbms_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbms_network_fault_type arg)
  {
    msg_.hbms_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_insulationfault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrcu_elec_low_alarm
{
public:
  explicit Init_HistoricalVehiclefailures1_hrcu_elec_low_alarm(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbms_network_fault hrcu_elec_low_alarm(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrcu_elec_low_alarm_type arg)
  {
    msg_.hrcu_elec_low_alarm = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbms_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrcu_weak_signal
{
public:
  explicit Init_HistoricalVehiclefailures1_hrcu_weak_signal(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrcu_elec_low_alarm hrcu_weak_signal(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrcu_weak_signal_type arg)
  {
    msg_.hrcu_weak_signal = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrcu_elec_low_alarm(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrcu_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrcu_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrcu_weak_signal hrcu_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrcu_network_fault_type arg)
  {
    msg_.hrcu_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrcu_weak_signal(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hpark_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hpark_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrcu_network_fault hpark_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hpark_network_fault_type arg)
  {
    msg_.hpark_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrcu_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hpark_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hpark_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hpark_network_fault hpark_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hpark_hardware_fault_type arg)
  {
    msg_.hpark_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hpark_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbrake_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbrake_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hpark_hardware_fault hbrake_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbrake_network_fault_type arg)
  {
    msg_.hbrake_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hpark_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbrake_luid_level_low
{
public:
  explicit Init_HistoricalVehiclefailures1_hbrake_luid_level_low(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbrake_network_fault hbrake_luid_level_low(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbrake_luid_level_low_type arg)
  {
    msg_.hbrake_luid_level_low = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbrake_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbrake_high_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbrake_high_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbrake_luid_level_low hbrake_high_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbrake_high_tem_fault_type arg)
  {
    msg_.hbrake_high_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbrake_luid_level_low(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hbrake_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hbrake_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbrake_high_tem_fault hbrake_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hbrake_hardware_fault_type arg)
  {
    msg_.hbrake_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbrake_high_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrsteer_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrsteer_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hbrake_hardware_fault hrsteer_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrsteer_network_fault_type arg)
  {
    msg_.hrsteer_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hbrake_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfsteer_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfsteer_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrsteer_network_fault hfsteer_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfsteer_network_fault_type arg)
  {
    msg_.hfsteer_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrsteer_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrsteer_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrsteer_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfsteer_network_fault hrsteer_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrsteer_hardware_fault_type arg)
  {
    msg_.hrsteer_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfsteer_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfsteer_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfsteer_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrsteer_hardware_fault hfsteer_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfsteer_hardware_fault_type arg)
  {
    msg_.hfsteer_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrsteer_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrrmc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrrmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfsteer_hardware_fault hrrmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrrmc_network_fault_type arg)
  {
    msg_.hrrmc_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfsteer_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrlmc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrlmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrrmc_network_fault hrlmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrlmc_network_fault_type arg)
  {
    msg_.hrlmc_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrrmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfrmc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfrmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrlmc_network_fault hfrmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfrmc_network_fault_type arg)
  {
    msg_.hfrmc_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrlmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hflmc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hflmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfrmc_network_fault hflmc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hflmc_network_fault_type arg)
  {
    msg_.hflmc_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfrmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrrm_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrrm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hflmc_network_fault hrrm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrrm_tem_fault_type arg)
  {
    msg_.hrrm_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hflmc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrrmc_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrrmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrrm_tem_fault hrrmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrrmc_tem_fault_type arg)
  {
    msg_.hrrmc_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrrm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrrmc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrrmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrrmc_tem_fault hrrmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrrmc_hardware_fault_type arg)
  {
    msg_.hrrmc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrrmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfrm_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfrm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrrmc_hardware_fault hfrm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfrm_tem_fault_type arg)
  {
    msg_.hfrm_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrrmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfrmc_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfrmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfrm_tem_fault hfrmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfrmc_tem_fault_type arg)
  {
    msg_.hfrmc_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfrm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hfrmc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hfrmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfrmc_tem_fault hfrmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hfrmc_hardware_fault_type arg)
  {
    msg_.hfrmc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfrmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrlm_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrlm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hfrmc_hardware_fault hrlm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrlm_tem_fault_type arg)
  {
    msg_.hrlm_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hfrmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrlmc_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrlmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrlm_tem_fault hrlmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrlmc_tem_fault_type arg)
  {
    msg_.hrlmc_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrlm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hrlmc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hrlmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrlmc_tem_fault hrlmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hrlmc_hardware_fault_type arg)
  {
    msg_.hrlmc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrlmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hflm_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hflm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hrlmc_hardware_fault hflm_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hflm_tem_fault_type arg)
  {
    msg_.hflm_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hrlmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hflmc_tem_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hflmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hflm_tem_fault hflmc_tem_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hflmc_tem_fault_type arg)
  {
    msg_.hflmc_tem_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hflm_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_hflmc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures1_hflmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures1_hflmc_tem_fault hflmc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_hflmc_hardware_fault_type arg)
  {
    msg_.hflmc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures1_hflmc_tem_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

class Init_HistoricalVehiclefailures1_header
{
public:
  Init_HistoricalVehiclefailures1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HistoricalVehiclefailures1_hflmc_hardware_fault header(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HistoricalVehiclefailures1_hflmc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures1>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_HistoricalVehiclefailures1_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES1__BUILDER_HPP_
