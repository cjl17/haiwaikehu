// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvBrakeCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_brake_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvBrakeCtrl_acu_check_sum131
{
public:
  explicit Init_AvBrakeCtrl_acu_check_sum131(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl acu_check_sum131(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_check_sum131_type arg)
  {
    msg_.acu_check_sum131 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_brake_life_sig
{
public:
  explicit Init_AvBrakeCtrl_acu_brake_life_sig(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_check_sum131 acu_brake_life_sig(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_brake_life_sig_type arg)
  {
    msg_.acu_brake_life_sig = std::move(arg);
    return Init_AvBrakeCtrl_acu_check_sum131(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_chassis_epb_ctrl
{
public:
  explicit Init_AvBrakeCtrl_acu_chassis_epb_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_brake_life_sig acu_chassis_epb_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_chassis_epb_ctrl_type arg)
  {
    msg_.acu_chassis_epb_ctrl = std::move(arg);
    return Init_AvBrakeCtrl_acu_brake_life_sig(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_chassis_brake_pdl_target
{
public:
  explicit Init_AvBrakeCtrl_acu_chassis_brake_pdl_target(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_chassis_epb_ctrl acu_chassis_brake_pdl_target(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_chassis_brake_pdl_target_type arg)
  {
    msg_.acu_chassis_brake_pdl_target = std::move(arg);
    return Init_AvBrakeCtrl_acu_chassis_epb_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_chassis_aeb_ctrl
{
public:
  explicit Init_AvBrakeCtrl_acu_chassis_aeb_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_chassis_brake_pdl_target acu_chassis_aeb_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_chassis_aeb_ctrl_type arg)
  {
    msg_.acu_chassis_aeb_ctrl = std::move(arg);
    return Init_AvBrakeCtrl_acu_chassis_brake_pdl_target(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_chassis_brake_lamp_ctrl
{
public:
  explicit Init_AvBrakeCtrl_acu_chassis_brake_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_chassis_aeb_ctrl acu_chassis_brake_lamp_ctrl(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_chassis_brake_lamp_ctrl_type arg)
  {
    msg_.acu_chassis_brake_lamp_ctrl = std::move(arg);
    return Init_AvBrakeCtrl_acu_chassis_aeb_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_acu_chassis_brake_en
{
public:
  explicit Init_AvBrakeCtrl_acu_chassis_brake_en(::pix_robobus_driver_msgs::msg::AvBrakeCtrl & msg)
  : msg_(msg)
  {}
  Init_AvBrakeCtrl_acu_chassis_brake_lamp_ctrl acu_chassis_brake_en(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_acu_chassis_brake_en_type arg)
  {
    msg_.acu_chassis_brake_en = std::move(arg);
    return Init_AvBrakeCtrl_acu_chassis_brake_lamp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

class Init_AvBrakeCtrl_header
{
public:
  Init_AvBrakeCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvBrakeCtrl_acu_chassis_brake_en header(::pix_robobus_driver_msgs::msg::AvBrakeCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvBrakeCtrl_acu_chassis_brake_en(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvBrakeCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvBrakeCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvBrakeCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_BRAKE_CTRL__BUILDER_HPP_
