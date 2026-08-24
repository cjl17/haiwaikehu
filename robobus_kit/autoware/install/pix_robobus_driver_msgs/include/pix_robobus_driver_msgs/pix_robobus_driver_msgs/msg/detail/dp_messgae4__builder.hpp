// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/dp_messgae4__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_DpMessgae4_auto_current2
{
public:
  explicit Init_DpMessgae4_auto_current2(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::DpMessgae4 auto_current2(::pix_robobus_driver_msgs::msg::DpMessgae4::_auto_current2_type arg)
  {
    msg_.auto_current2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_on_sta
{
public:
  explicit Init_DpMessgae4_on_sta(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_auto_current2 on_sta(::pix_robobus_driver_msgs::msg::DpMessgae4::_on_sta_type arg)
  {
    msg_.on_sta = std::move(arg);
    return Init_DpMessgae4_auto_current2(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_dp_errorcode
{
public:
  explicit Init_DpMessgae4_dp_errorcode(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_on_sta dp_errorcode(::pix_robobus_driver_msgs::msg::DpMessgae4::_dp_errorcode_type arg)
  {
    msg_.dp_errorcode = std::move(arg);
    return Init_DpMessgae4_on_sta(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_auto_current1
{
public:
  explicit Init_DpMessgae4_auto_current1(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_dp_errorcode auto_current1(::pix_robobus_driver_msgs::msg::DpMessgae4::_auto_current1_type arg)
  {
    msg_.auto_current1 = std::move(arg);
    return Init_DpMessgae4_dp_errorcode(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_pd_temp
{
public:
  explicit Init_DpMessgae4_pd_temp(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_auto_current1 pd_temp(::pix_robobus_driver_msgs::msg::DpMessgae4::_pd_temp_type arg)
  {
    msg_.pd_temp = std::move(arg);
    return Init_DpMessgae4_auto_current1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_dp_lowbat_vol
{
public:
  explicit Init_DpMessgae4_dp_lowbat_vol(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_pd_temp dp_lowbat_vol(::pix_robobus_driver_msgs::msg::DpMessgae4::_dp_lowbat_vol_type arg)
  {
    msg_.dp_lowbat_vol = std::move(arg);
    return Init_DpMessgae4_pd_temp(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_pdu_total_cur
{
public:
  explicit Init_DpMessgae4_pdu_total_cur(::pix_robobus_driver_msgs::msg::DpMessgae4 & msg)
  : msg_(msg)
  {}
  Init_DpMessgae4_dp_lowbat_vol pdu_total_cur(::pix_robobus_driver_msgs::msg::DpMessgae4::_pdu_total_cur_type arg)
  {
    msg_.pdu_total_cur = std::move(arg);
    return Init_DpMessgae4_dp_lowbat_vol(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

class Init_DpMessgae4_header
{
public:
  Init_DpMessgae4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DpMessgae4_pdu_total_cur header(::pix_robobus_driver_msgs::msg::DpMessgae4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DpMessgae4_pdu_total_cur(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::DpMessgae4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::DpMessgae4>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_DpMessgae4_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__BUILDER_HPP_
