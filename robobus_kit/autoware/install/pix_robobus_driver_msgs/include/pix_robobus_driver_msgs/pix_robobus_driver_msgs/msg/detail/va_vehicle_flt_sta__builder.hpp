// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_flt_sta__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaVehicleFltSta_vcu_sys_flt_reserve1
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_flt_reserve1(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta vcu_sys_flt_reserve1(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_flt_reserve1_type arg)
  {
    msg_.vcu_sys_flt_reserve1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_vehicle_flt_level
{
public:
  explicit Init_VaVehicleFltSta_vcu_vehicle_flt_level(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_flt_reserve1 vcu_vehicle_flt_level(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_vehicle_flt_level_type arg)
  {
    msg_.vcu_vehicle_flt_level = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_flt_reserve1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_bcm_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_bcm_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_vehicle_flt_level vcu_sys_bcm_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_bcm_flt_type arg)
  {
    msg_.vcu_sys_bcm_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_vehicle_flt_level(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_dpm_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_dpm_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_bcm_flt vcu_sys_dpm_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_dpm_flt_type arg)
  {
    msg_.vcu_sys_dpm_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_bcm_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_door_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_door_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_dpm_flt vcu_sys_door_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_door_flt_type arg)
  {
    msg_.vcu_sys_door_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_dpm_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_dc_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_dc_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_door_flt vcu_sys_dc_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_dc_flt_type arg)
  {
    msg_.vcu_sys_dc_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_door_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_bms_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_bms_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_dc_flt vcu_sys_bms_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_bms_flt_type arg)
  {
    msg_.vcu_sys_bms_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_dc_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_motor_rr_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_motor_rr_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_bms_flt vcu_sys_motor_rr_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_motor_rr_flt_type arg)
  {
    msg_.vcu_sys_motor_rr_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_bms_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_motor_lr_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_motor_lr_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_motor_rr_flt vcu_sys_motor_lr_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_motor_lr_flt_type arg)
  {
    msg_.vcu_sys_motor_lr_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_motor_rr_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_motor_rf_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_motor_rf_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_motor_lr_flt vcu_sys_motor_rf_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_motor_rf_flt_type arg)
  {
    msg_.vcu_sys_motor_rf_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_motor_lr_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_motor_lf_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_motor_lf_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_motor_rf_flt vcu_sys_motor_lf_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_motor_lf_flt_type arg)
  {
    msg_.vcu_sys_motor_lf_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_motor_rf_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_steer_back_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_steer_back_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_motor_lf_flt vcu_sys_steer_back_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_steer_back_flt_type arg)
  {
    msg_.vcu_sys_steer_back_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_motor_lf_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_steer_front_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_steer_front_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_steer_back_flt vcu_sys_steer_front_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_steer_front_flt_type arg)
  {
    msg_.vcu_sys_steer_front_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_steer_back_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_parking_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_parking_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_steer_front_flt vcu_sys_parking_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_parking_flt_type arg)
  {
    msg_.vcu_sys_parking_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_steer_front_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_brake_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_brake_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_parking_flt vcu_sys_brake_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_brake_flt_type arg)
  {
    msg_.vcu_sys_brake_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_parking_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_flt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_brake_flt vcu_sys_flt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_flt_type arg)
  {
    msg_.vcu_sys_flt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_brake_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_under_volt
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_under_volt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_flt vcu_sys_under_volt(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_under_volt_type arg)
  {
    msg_.vcu_sys_under_volt = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_flt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_steer_over_temp_sta
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_steer_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_under_volt vcu_sys_steer_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_steer_over_temp_sta_type arg)
  {
    msg_.vcu_sys_steer_over_temp_sta = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_under_volt(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_brake_over_temp_sta
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_brake_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_steer_over_temp_sta vcu_sys_brake_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_brake_over_temp_sta_type arg)
  {
    msg_.vcu_sys_brake_over_temp_sta = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_steer_over_temp_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_bms_over_temp_sta
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_bms_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_brake_over_temp_sta vcu_sys_bms_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_bms_over_temp_sta_type arg)
  {
    msg_.vcu_sys_bms_over_temp_sta = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_brake_over_temp_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_vcu_sys_motor_over_temp_sta
{
public:
  explicit Init_VaVehicleFltSta_vcu_sys_motor_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta & msg)
  : msg_(msg)
  {}
  Init_VaVehicleFltSta_vcu_sys_bms_over_temp_sta vcu_sys_motor_over_temp_sta(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_vcu_sys_motor_over_temp_sta_type arg)
  {
    msg_.vcu_sys_motor_over_temp_sta = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_bms_over_temp_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

class Init_VaVehicleFltSta_header
{
public:
  Init_VaVehicleFltSta_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaVehicleFltSta_vcu_sys_motor_over_temp_sta header(::pix_robobus_driver_msgs::msg::VaVehicleFltSta::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaVehicleFltSta_vcu_sys_motor_over_temp_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleFltSta msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaVehicleFltSta>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaVehicleFltSta_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__BUILDER_HPP_
