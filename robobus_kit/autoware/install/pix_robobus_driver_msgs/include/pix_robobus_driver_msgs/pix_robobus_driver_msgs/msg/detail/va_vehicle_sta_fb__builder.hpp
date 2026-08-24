// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_vehicle_sta_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaVehicleStaFb_vcu_vehicle_display_speed
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_display_speed(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb vcu_vehicle_display_speed(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_display_speed_type arg)
  {
    msg_.vcu_vehicle_display_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_reserve_warning
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_reserve_warning(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_display_speed vcu_vehicle_reserve_warning(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_reserve_warning_type arg)
  {
    msg_.vcu_vehicle_reserve_warning = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_display_speed(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt6
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt6(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_reserve_warning vcu_vehicle_safety_belt6(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt6_type arg)
  {
    msg_.vcu_vehicle_safety_belt6 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_reserve_warning(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt5
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt5(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt6 vcu_vehicle_safety_belt5(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt5_type arg)
  {
    msg_.vcu_vehicle_safety_belt5 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt6(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt4
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt4(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt5 vcu_vehicle_safety_belt4(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt4_type arg)
  {
    msg_.vcu_vehicle_safety_belt4 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt5(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt3
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt3(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt4 vcu_vehicle_safety_belt3(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt3_type arg)
  {
    msg_.vcu_vehicle_safety_belt3 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt4(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt2
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt2(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt3 vcu_vehicle_safety_belt2(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt2_type arg)
  {
    msg_.vcu_vehicle_safety_belt2 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt3(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_safety_belt1
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_safety_belt1(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt2 vcu_vehicle_safety_belt1(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_safety_belt1_type arg)
  {
    msg_.vcu_vehicle_safety_belt1 = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt2(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_wipers_sta_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_wipers_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_safety_belt1 vcu_vehicle_wipers_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_wipers_sta_fb_type arg)
  {
    msg_.vcu_vehicle_wipers_sta_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_safety_belt1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_door_sta_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_door_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_wipers_sta_fb vcu_vehicle_door_sta_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_door_sta_fb_type arg)
  {
    msg_.vcu_vehicle_door_sta_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_wipers_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_acu_vehicle_window_fb
{
public:
  explicit Init_VaVehicleStaFb_acu_vehicle_window_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_door_sta_fb acu_vehicle_window_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_acu_vehicle_window_fb_type arg)
  {
    msg_.acu_vehicle_window_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_door_sta_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_read_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_read_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_acu_vehicle_window_fb vcu_vehicle_read_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_read_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_read_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_acu_vehicle_window_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_body_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_body_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_read_lamp_fb vcu_vehicle_body_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_body_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_body_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_read_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_hazard_war_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_hazard_war_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_body_lamp_fb vcu_vehicle_hazard_war_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_hazard_war_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_hazard_war_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_body_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_fog_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_fog_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_hazard_war_lamp_fb vcu_vehicle_fog_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_fog_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_fog_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_hazard_war_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_high_beam_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_high_beam_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_fog_lamp_fb vcu_vehicle_high_beam_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_high_beam_fb_type arg)
  {
    msg_.vcu_vehicle_high_beam_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_fog_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_right_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_right_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_high_beam_fb vcu_vehicle_right_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_right_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_right_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_high_beam_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_left_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_left_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_right_lamp_fb vcu_vehicle_left_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_left_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_left_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_right_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_head_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_head_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_left_lamp_fb vcu_vehicle_head_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_head_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_head_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_left_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_vcu_vehicle_pos_lamp_fb
{
public:
  explicit Init_VaVehicleStaFb_vcu_vehicle_pos_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb & msg)
  : msg_(msg)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_head_lamp_fb vcu_vehicle_pos_lamp_fb(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_vcu_vehicle_pos_lamp_fb_type arg)
  {
    msg_.vcu_vehicle_pos_lamp_fb = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_head_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

class Init_VaVehicleStaFb_header
{
public:
  Init_VaVehicleStaFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaVehicleStaFb_vcu_vehicle_pos_lamp_fb header(::pix_robobus_driver_msgs::msg::VaVehicleStaFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaVehicleStaFb_vcu_vehicle_pos_lamp_fb(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVehicleStaFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaVehicleStaFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaVehicleStaFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__BUILDER_HPP_
