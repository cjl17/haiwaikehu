// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvAebCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/av_aeb_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AvAebCtrl_acu_check_sum121
{
public:
  explicit Init_AvAebCtrl_acu_check_sum121(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AvAebCtrl acu_check_sum121(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_check_sum121_type arg)
  {
    msg_.acu_check_sum121 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_aeb_brake_life_sig
{
public:
  explicit Init_AvAebCtrl_acu_aeb_brake_life_sig(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_check_sum121 acu_aeb_brake_life_sig(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_aeb_brake_life_sig_type arg)
  {
    msg_.acu_aeb_brake_life_sig = std::move(arg);
    return Init_AvAebCtrl_acu_check_sum121(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_aeb_brake_pedal_target
{
public:
  explicit Init_AvAebCtrl_acu_aeb_brake_pedal_target(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_aeb_brake_life_sig acu_aeb_brake_pedal_target(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_aeb_brake_pedal_target_type arg)
  {
    msg_.acu_aeb_brake_pedal_target = std::move(arg);
    return Init_AvAebCtrl_acu_aeb_brake_life_sig(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_aeb_brake_en
{
public:
  explicit Init_AvAebCtrl_acu_aeb_brake_en(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_aeb_brake_pedal_target acu_aeb_brake_en(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_aeb_brake_en_type arg)
  {
    msg_.acu_aeb_brake_en = std::move(arg);
    return Init_AvAebCtrl_acu_aeb_brake_pedal_target(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_fcw_active_request
{
public:
  explicit Init_AvAebCtrl_acu_fcw_active_request(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_aeb_brake_en acu_fcw_active_request(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_fcw_active_request_type arg)
  {
    msg_.acu_fcw_active_request = std::move(arg);
    return Init_AvAebCtrl_acu_aeb_brake_en(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_aeb_active_request
{
public:
  explicit Init_AvAebCtrl_acu_aeb_active_request(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_fcw_active_request acu_aeb_active_request(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_aeb_active_request_type arg)
  {
    msg_.acu_aeb_active_request = std::move(arg);
    return Init_AvAebCtrl_acu_fcw_active_request(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_acu_aeb_work_sta
{
public:
  explicit Init_AvAebCtrl_acu_aeb_work_sta(::pix_robobus_driver_msgs::msg::AvAebCtrl & msg)
  : msg_(msg)
  {}
  Init_AvAebCtrl_acu_aeb_active_request acu_aeb_work_sta(::pix_robobus_driver_msgs::msg::AvAebCtrl::_acu_aeb_work_sta_type arg)
  {
    msg_.acu_aeb_work_sta = std::move(arg);
    return Init_AvAebCtrl_acu_aeb_active_request(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

class Init_AvAebCtrl_header
{
public:
  Init_AvAebCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvAebCtrl_acu_aeb_work_sta header(::pix_robobus_driver_msgs::msg::AvAebCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AvAebCtrl_acu_aeb_work_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AvAebCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AvAebCtrl>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AvAebCtrl_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__BUILDER_HPP_
