// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/vehicle_errcode2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleErrcode2_lv_battery_high_voltage_fault
{
public:
  explicit Init_VehicleErrcode2_lv_battery_high_voltage_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 lv_battery_high_voltage_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_lv_battery_high_voltage_fault_type arg)
  {
    msg_.lv_battery_high_voltage_fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_lv_battery_low_voltage_fault
{
public:
  explicit Init_VehicleErrcode2_lv_battery_low_voltage_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_lv_battery_high_voltage_fault lv_battery_low_voltage_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_lv_battery_low_voltage_fault_type arg)
  {
    msg_.lv_battery_low_voltage_fault = std::move(arg);
    return Init_VehicleErrcode2_lv_battery_high_voltage_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve32
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve32(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_lv_battery_low_voltage_fault vcu_reserve32(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve32_type arg)
  {
    msg_.vcu_reserve32 = std::move(arg);
    return Init_VehicleErrcode2_lv_battery_low_voltage_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_ac_network_fault
{
public:
  explicit Init_VehicleErrcode2_ac_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve32 ac_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_ac_network_fault_type arg)
  {
    msg_.ac_network_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve32(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_ac_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_ac_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_ac_network_fault ac_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_ac_hardware_fault_type arg)
  {
    msg_.ac_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_ac_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve26
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve26(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_ac_hardware_fault vcu_reserve26(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve26_type arg)
  {
    msg_.vcu_reserve26 = std::move(arg);
    return Init_VehicleErrcode2_ac_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve20
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve20(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve26 vcu_reserve20(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve20_type arg)
  {
    msg_.vcu_reserve20 = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve26(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_iis_network_fault
{
public:
  explicit Init_VehicleErrcode2_iis_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve20 iis_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_iis_network_fault_type arg)
  {
    msg_.iis_network_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve20(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_iis_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_iis_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_iis_network_fault iis_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_iis_hardware_fault_type arg)
  {
    msg_.iis_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_iis_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve19
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve19(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_iis_hardware_fault vcu_reserve19(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve19_type arg)
  {
    msg_.vcu_reserve19 = std::move(arg);
    return Init_VehicleErrcode2_iis_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve18
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve18(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve19 vcu_reserve18(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve18_type arg)
  {
    msg_.vcu_reserve18 = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve19(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_avas_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_avas_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve18 avas_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_avas_hardware_fault_type arg)
  {
    msg_.avas_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve18(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_avas_network_fault
{
public:
  explicit Init_VehicleErrcode2_avas_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_avas_hardware_fault avas_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_avas_network_fault_type arg)
  {
    msg_.avas_network_fault = std::move(arg);
    return Init_VehicleErrcode2_avas_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve17
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve17(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_avas_network_fault vcu_reserve17(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve17_type arg)
  {
    msg_.vcu_reserve17 = std::move(arg);
    return Init_VehicleErrcode2_avas_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_dcu_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_dcu_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve17 dcu_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_dcu_hardware_fault_type arg)
  {
    msg_.dcu_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve17(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_dcu_network_fault
{
public:
  explicit Init_VehicleErrcode2_dcu_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_dcu_hardware_fault dcu_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_dcu_network_fault_type arg)
  {
    msg_.dcu_network_fault = std::move(arg);
    return Init_VehicleErrcode2_dcu_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve11
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve11(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_dcu_network_fault vcu_reserve11(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve11_type arg)
  {
    msg_.vcu_reserve11 = std::move(arg);
    return Init_VehicleErrcode2_dcu_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_bcm_network_fault
{
public:
  explicit Init_VehicleErrcode2_bcm_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve11 bcm_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_bcm_network_fault_type arg)
  {
    msg_.bcm_network_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve11(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_bcm_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_bcm_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_bcm_network_fault bcm_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_bcm_hardware_fault_type arg)
  {
    msg_.bcm_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_bcm_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve5
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve5(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_bcm_hardware_fault vcu_reserve5(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve5_type arg)
  {
    msg_.vcu_reserve5 = std::move(arg);
    return Init_VehicleErrcode2_bcm_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_dp_network_fault
{
public:
  explicit Init_VehicleErrcode2_dp_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve5 dp_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_dp_network_fault_type arg)
  {
    msg_.dp_network_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve5(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_dp_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_dp_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_dp_network_fault dp_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_dp_hardware_fault_type arg)
  {
    msg_.dp_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_dp_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_vcu_reserve1
{
public:
  explicit Init_VehicleErrcode2_vcu_reserve1(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_dp_hardware_fault vcu_reserve1(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_vcu_reserve1_type arg)
  {
    msg_.vcu_reserve1 = std::move(arg);
    return Init_VehicleErrcode2_dp_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_obc_hardware_fault
{
public:
  explicit Init_VehicleErrcode2_obc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_vcu_reserve1 obc_hardware_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_obc_hardware_fault_type arg)
  {
    msg_.obc_hardware_fault = std::move(arg);
    return Init_VehicleErrcode2_vcu_reserve1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_obc_network_fault
{
public:
  explicit Init_VehicleErrcode2_obc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2 & msg)
  : msg_(msg)
  {}
  Init_VehicleErrcode2_obc_hardware_fault obc_network_fault(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_obc_network_fault_type arg)
  {
    msg_.obc_network_fault = std::move(arg);
    return Init_VehicleErrcode2_obc_hardware_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

class Init_VehicleErrcode2_header
{
public:
  Init_VehicleErrcode2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleErrcode2_obc_network_fault header(::pix_robobus_driver_msgs::msg::VehicleErrcode2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleErrcode2_obc_network_fault(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VehicleErrcode2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VehicleErrcode2>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VehicleErrcode2_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__BUILDER_HPP_
