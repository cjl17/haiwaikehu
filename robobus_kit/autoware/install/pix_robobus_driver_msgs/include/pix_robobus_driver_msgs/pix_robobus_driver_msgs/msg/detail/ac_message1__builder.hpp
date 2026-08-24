// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcMessage1.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/ac_message1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AcMessage1_in_loop_mod_sta
{
public:
  explicit Init_AcMessage1_in_loop_mod_sta(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AcMessage1 in_loop_mod_sta(::pix_robobus_driver_msgs::msg::AcMessage1::_in_loop_mod_sta_type arg)
  {
    msg_.in_loop_mod_sta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_air_cod_temp_sta
{
public:
  explicit Init_AcMessage1_air_cod_temp_sta(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  Init_AcMessage1_in_loop_mod_sta air_cod_temp_sta(::pix_robobus_driver_msgs::msg::AcMessage1::_air_cod_temp_sta_type arg)
  {
    msg_.air_cod_temp_sta = std::move(arg);
    return Init_AcMessage1_in_loop_mod_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_air_cod_mod_sta
{
public:
  explicit Init_AcMessage1_air_cod_mod_sta(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  Init_AcMessage1_air_cod_temp_sta air_cod_mod_sta(::pix_robobus_driver_msgs::msg::AcMessage1::_air_cod_mod_sta_type arg)
  {
    msg_.air_cod_mod_sta = std::move(arg);
    return Init_AcMessage1_air_cod_temp_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_air_cod_gear_sta
{
public:
  explicit Init_AcMessage1_air_cod_gear_sta(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  Init_AcMessage1_air_cod_mod_sta air_cod_gear_sta(::pix_robobus_driver_msgs::msg::AcMessage1::_air_cod_gear_sta_type arg)
  {
    msg_.air_cod_gear_sta = std::move(arg);
    return Init_AcMessage1_air_cod_mod_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_air_cod_sta
{
public:
  explicit Init_AcMessage1_air_cod_sta(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  Init_AcMessage1_air_cod_gear_sta air_cod_sta(::pix_robobus_driver_msgs::msg::AcMessage1::_air_cod_sta_type arg)
  {
    msg_.air_cod_sta = std::move(arg);
    return Init_AcMessage1_air_cod_gear_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_defrost_fdk
{
public:
  explicit Init_AcMessage1_defrost_fdk(::pix_robobus_driver_msgs::msg::AcMessage1 & msg)
  : msg_(msg)
  {}
  Init_AcMessage1_air_cod_sta defrost_fdk(::pix_robobus_driver_msgs::msg::AcMessage1::_defrost_fdk_type arg)
  {
    msg_.defrost_fdk = std::move(arg);
    return Init_AcMessage1_air_cod_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

class Init_AcMessage1_header
{
public:
  Init_AcMessage1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcMessage1_defrost_fdk header(::pix_robobus_driver_msgs::msg::AcMessage1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcMessage1_defrost_fdk(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcMessage1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AcMessage1>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AcMessage1_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AC_MESSAGE1__BUILDER_HPP_
