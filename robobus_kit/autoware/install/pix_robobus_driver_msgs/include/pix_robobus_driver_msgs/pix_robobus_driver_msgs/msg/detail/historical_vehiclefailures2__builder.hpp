// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/historical_vehiclefailures2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_HistoricalVehiclefailures2_h_iv_battery_high_voltage_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_h_iv_battery_high_voltage_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 h_iv_battery_high_voltage_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_h_iv_battery_high_voltage_fault_type arg)
  {
    msg_.h_iv_battery_high_voltage_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_h_iv_battery_low_voltage_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_h_iv_battery_low_voltage_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_h_iv_battery_high_voltage_fault h_iv_battery_low_voltage_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_h_iv_battery_low_voltage_fault_type arg)
  {
    msg_.h_iv_battery_low_voltage_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_h_iv_battery_high_voltage_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hac_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hac_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_h_iv_battery_low_voltage_fault hac_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hac_network_fault_type arg)
  {
    msg_.hac_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_h_iv_battery_low_voltage_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hac_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hac_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hac_network_fault hac_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hac_hardware_fault_type arg)
  {
    msg_.hac_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hac_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_h_iis_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_h_iis_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hac_hardware_fault h_iis_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_h_iis_network_fault_type arg)
  {
    msg_.h_iis_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hac_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hlis_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hlis_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_h_iis_network_fault hlis_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hlis_hardware_fault_type arg)
  {
    msg_.hlis_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_h_iis_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_havas_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_havas_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hlis_hardware_fault havas_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_havas_hardware_fault_type arg)
  {
    msg_.havas_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hlis_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_havas_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_havas_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_havas_hardware_fault havas_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_havas_network_fault_type arg)
  {
    msg_.havas_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_havas_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hdcu_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hdcu_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_havas_network_fault hdcu_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hdcu_hardware_fault_type arg)
  {
    msg_.hdcu_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_havas_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hdcu_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hdcu_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hdcu_hardware_fault hdcu_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hdcu_network_fault_type arg)
  {
    msg_.hdcu_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hdcu_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hbcm_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hbcm_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hdcu_network_fault hbcm_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hbcm_network_fault_type arg)
  {
    msg_.hbcm_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hdcu_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hbcm_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hbcm_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hbcm_network_fault hbcm_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hbcm_hardware_fault_type arg)
  {
    msg_.hbcm_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hbcm_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hdp_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hdp_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hbcm_hardware_fault hdp_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hdp_network_fault_type arg)
  {
    msg_.hdp_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hbcm_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hdp_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hdp_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hdp_network_fault hdp_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hdp_hardware_fault_type arg)
  {
    msg_.hdp_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hdp_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hobc_hardware_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hobc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hdp_hardware_fault hobc_hardware_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hobc_hardware_fault_type arg)
  {
    msg_.hobc_hardware_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hdp_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_hobc_network_fault
{
public:
  explicit Init_HistoricalVehiclefailures2_hobc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 & msg)
  : msg_(msg)
  {}
  Init_HistoricalVehiclefailures2_hobc_hardware_fault hobc_network_fault(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_hobc_network_fault_type arg)
  {
    msg_.hobc_network_fault = std::move(arg);
    return Init_HistoricalVehiclefailures2_hobc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

class Init_HistoricalVehiclefailures2_header
{
public:
  Init_HistoricalVehiclefailures2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HistoricalVehiclefailures2_hobc_network_fault header(::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HistoricalVehiclefailures2_hobc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_HistoricalVehiclefailures2_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__BUILDER_HPP_
