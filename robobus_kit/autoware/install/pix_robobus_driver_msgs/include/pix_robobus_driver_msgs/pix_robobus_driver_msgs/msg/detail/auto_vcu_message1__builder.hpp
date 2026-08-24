// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/auto_vcu_message1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoVcuMessage1_in_loop_mod_ctrl
{
public:
  explicit Init_AutoVcuMessage1_in_loop_mod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 in_loop_mod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_in_loop_mod_ctrl_type arg)
  {
    msg_.in_loop_mod_ctrl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_air_cod_temp_ctrl
{
public:
  explicit Init_AutoVcuMessage1_air_cod_temp_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage1_in_loop_mod_ctrl air_cod_temp_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_air_cod_temp_ctrl_type arg)
  {
    msg_.air_cod_temp_ctrl = std::move(arg);
    return Init_AutoVcuMessage1_in_loop_mod_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_air_cod_mod_ctrl
{
public:
  explicit Init_AutoVcuMessage1_air_cod_mod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage1_air_cod_temp_ctrl air_cod_mod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_air_cod_mod_ctrl_type arg)
  {
    msg_.air_cod_mod_ctrl = std::move(arg);
    return Init_AutoVcuMessage1_air_cod_temp_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_air_cod_gear_ctrl
{
public:
  explicit Init_AutoVcuMessage1_air_cod_gear_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage1_air_cod_mod_ctrl air_cod_gear_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_air_cod_gear_ctrl_type arg)
  {
    msg_.air_cod_gear_ctrl = std::move(arg);
    return Init_AutoVcuMessage1_air_cod_mod_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_air_cod_ctrl
{
public:
  explicit Init_AutoVcuMessage1_air_cod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage1_air_cod_gear_ctrl air_cod_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_air_cod_ctrl_type arg)
  {
    msg_.air_cod_ctrl = std::move(arg);
    return Init_AutoVcuMessage1_air_cod_gear_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_defrost_ctrl
{
public:
  explicit Init_AutoVcuMessage1_defrost_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1 & msg)
  : msg_(msg)
  {}
  Init_AutoVcuMessage1_air_cod_ctrl defrost_ctrl(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_defrost_ctrl_type arg)
  {
    msg_.defrost_ctrl = std::move(arg);
    return Init_AutoVcuMessage1_air_cod_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

class Init_AutoVcuMessage1_header
{
public:
  Init_AutoVcuMessage1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoVcuMessage1_defrost_ctrl header(::pix_robobus_driver_msgs::msg::AutoVcuMessage1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoVcuMessage1_defrost_ctrl(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AutoVcuMessage1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AutoVcuMessage1>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AutoVcuMessage1_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE1__BUILDER_HPP_
