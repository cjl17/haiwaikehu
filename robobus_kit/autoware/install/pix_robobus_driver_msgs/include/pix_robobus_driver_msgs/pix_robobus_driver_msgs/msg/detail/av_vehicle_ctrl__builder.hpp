// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_vehicle_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvVehicleCtrl_acu_check_sum_en
{
public:
  explicit Init_AvVehicleCtrl_acu_check_sum_en(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl acu_check_sum_en(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_check_sum_en_type arg)
  {
    msg_.acu_check_sum_en = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_chassis_speed_limite_val
{
public:
  explicit Init_AvVehicleCtrl_acu_chassis_speed_limite_val(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_check_sum_en acu_chassis_speed_limite_val(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_chassis_speed_limite_val_type arg)
  {
    msg_.acu_chassis_speed_limite_val = std::move(arg);
    return Init_AvVehicleCtrl_acu_check_sum_en(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_spray_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_spray_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_chassis_speed_limite_val acu_vehicle_spray_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_spray_ctrl_type arg)
  {
    msg_.acu_vehicle_spray_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_chassis_speed_limite_val(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_horn_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_horn_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_spray_ctrl acu_vehicle_horn_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_horn_ctrl_type arg)
  {
    msg_.acu_vehicle_horn_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_spray_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_chassis_speed_limite_mode
{
public:
  explicit Init_AvVehicleCtrl_acu_chassis_speed_limite_mode(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_horn_ctrl acu_chassis_speed_limite_mode(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_chassis_speed_limite_mode_type arg)
  {
    msg_.acu_chassis_speed_limite_mode = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_horn_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_window_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_window_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_chassis_speed_limite_mode acu_vehicle_window_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_window_ctrl_type arg)
  {
    msg_.acu_vehicle_window_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_chassis_speed_limite_mode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_door_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_door_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_window_ctrl acu_vehicle_door_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_door_ctrl_type arg)
  {
    msg_.acu_vehicle_door_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_window_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_wipers_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_wipers_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_door_ctrl acu_vehicle_wipers_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_wipers_ctrl_type arg)
  {
    msg_.acu_vehicle_wipers_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_door_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_voice
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_voice(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_wipers_ctrl acu_vehicle_voice(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_voice_type arg)
  {
    msg_.acu_vehicle_voice = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_wipers_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_read_light_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_read_light_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_voice acu_vehicle_read_light_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_read_light_ctrl_type arg)
  {
    msg_.acu_vehicle_read_light_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_voice(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_body_light_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_body_light_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_read_light_ctrl acu_vehicle_body_light_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_body_light_ctrl_type arg)
  {
    msg_.acu_vehicle_body_light_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_read_light_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_fog_lamp_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_fog_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_body_light_ctrl acu_vehicle_fog_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_fog_lamp_ctrl_type arg)
  {
    msg_.acu_vehicle_fog_lamp_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_body_light_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_high_beam_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_high_beam_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_fog_lamp_ctrl acu_vehicle_high_beam_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_high_beam_ctrl_type arg)
  {
    msg_.acu_vehicle_high_beam_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_fog_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_right_lamp_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_right_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_high_beam_ctrl acu_vehicle_right_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_right_lamp_ctrl_type arg)
  {
    msg_.acu_vehicle_right_lamp_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_high_beam_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_left_lamp_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_left_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_right_lamp_ctrl acu_vehicle_left_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_left_lamp_ctrl_type arg)
  {
    msg_.acu_vehicle_left_lamp_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_right_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_head_lamp_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_head_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_left_lamp_ctrl acu_vehicle_head_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_head_lamp_ctrl_type arg)
  {
    msg_.acu_vehicle_head_lamp_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_left_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_acu_vehicle_pos_lamp_ctrl
{
public:
  explicit Init_AvVehicleCtrl_acu_vehicle_pos_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl & msg)
  : msg_(msg)
  {}
  Init_AvVehicleCtrl_acu_vehicle_head_lamp_ctrl acu_vehicle_pos_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_acu_vehicle_pos_lamp_ctrl_type arg)
  {
    msg_.acu_vehicle_pos_lamp_ctrl = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_head_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

class Init_AvVehicleCtrl_header
{
public:
  Init_AvVehicleCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvVehicleCtrl_acu_vehicle_pos_lamp_ctrl header(::pix_robobus_driver_msgs::msg::AvVehicleCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvVehicleCtrl_acu_vehicle_pos_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvVehicleCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvVehicleCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvVehicleCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__BUILDER_HPP_
