// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_work_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaVehicleWorkStaFb_vcu_check_sum
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_check_sum(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb vcu_check_sum(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_check_sum_type arg)
  {
    msg_.vcu_check_sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_life
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_life(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_check_sum vcu_life(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_life_type arg)
  {
    msg_.vcu_life = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_check_sum(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_crash_right_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_crash_right_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_life vcu_crash_right_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_crash_right_sta_type arg)
  {
    msg_.vcu_crash_right_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_life(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_crash_left_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_crash_left_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_crash_right_sta vcu_crash_left_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_crash_left_sta_type arg)
  {
    msg_.vcu_crash_left_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_crash_right_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_crash_rear_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_crash_rear_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_crash_left_sta vcu_crash_rear_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_crash_rear_sta_type arg)
  {
    msg_.vcu_crash_rear_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_crash_left_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_crash_front_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_crash_front_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_crash_rear_sta vcu_crash_front_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_crash_front_sta_type arg)
  {
    msg_.vcu_crash_front_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_crash_rear_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_e_stop_sta_fb
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_e_stop_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_crash_front_sta vcu_chassis_e_stop_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_e_stop_sta_fb_type arg)
  {
    msg_.vcu_chassis_e_stop_sta_fb = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_crash_front_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_low_power_volt_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_low_power_volt_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_e_stop_sta_fb vcu_chassis_low_power_volt_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_low_power_volt_sta_type arg)
  {
    msg_.vcu_chassis_low_power_volt_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_e_stop_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_val_fb
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_val_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_low_power_volt_sta vcu_chassis_speed_limited_val_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_speed_limited_val_fb_type arg)
  {
    msg_.vcu_chassis_speed_limited_val_fb = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_low_power_volt_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_sys_eco_mode
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_sys_eco_mode(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_val_fb vcu_sys_eco_mode(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_sys_eco_mode_type arg)
  {
    msg_.vcu_sys_eco_mode = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_val_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_power_limite_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_power_limite_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_sys_eco_mode vcu_chassis_power_limite_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_power_limite_sta_type arg)
  {
    msg_.vcu_chassis_power_limite_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_sys_eco_mode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_mode_fb
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_mode_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_power_limite_sta vcu_chassis_speed_limited_mode_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_speed_limited_mode_fb_type arg)
  {
    msg_.vcu_chassis_speed_limited_mode_fb = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_power_limite_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_acu_connect_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_acu_connect_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_mode_fb vcu_acu_connect_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_acu_connect_sta_type arg)
  {
    msg_.vcu_acu_connect_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_speed_limited_mode_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_remote_connecte_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_remote_connecte_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_acu_connect_sta vcu_remote_connecte_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_remote_connecte_sta_type arg)
  {
    msg_.vcu_remote_connecte_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_acu_connect_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_power_dc_sta
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_power_dc_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_remote_connecte_sta vcu_chassis_power_dc_sta(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_power_dc_sta_type arg)
  {
    msg_.vcu_chassis_power_dc_sta = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_remote_connecte_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_chassis_power_sta_fb
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_chassis_power_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_power_dc_sta vcu_chassis_power_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_chassis_power_sta_fb_type arg)
  {
    msg_.vcu_chassis_power_sta_fb = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_power_dc_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_vcu_driving_mode_fb
{
public:
  explicit Init_VaVehicleWorkStaFb_vcu_driving_mode_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleWorkStaFb_vcu_chassis_power_sta_fb vcu_driving_mode_fb(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_vcu_driving_mode_fb_type arg)
  {
    msg_.vcu_driving_mode_fb = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_chassis_power_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

class Init_VaVehicleWorkStaFb_header
{
public:
  Init_VaVehicleWorkStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaVehicleWorkStaFb_vcu_driving_mode_fb header(::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaVehicleWorkStaFb_vcu_driving_mode_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaVehicleWorkStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__BUILDER_HPP_
