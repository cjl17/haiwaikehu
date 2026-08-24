// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage5.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/bcm_message5__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_BcmMessage5_ad_v_vin2
{
public:
  explicit Init_BcmMessage5_ad_v_vin2(::pix_robobus_driver_msgs::msg::BcmMessage5 & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::BcmMessage5 ad_v_vin2(::pix_robobus_driver_msgs::msg::BcmMessage5::_ad_v_vin2_type arg)
  {
    msg_.ad_v_vin2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::BcmMessage5 msg_;
};

class Init_BcmMessage5_ad_v_vin1
{
public:
  explicit Init_BcmMessage5_ad_v_vin1(::pix_robobus_driver_msgs::msg::BcmMessage5 & msg)
  : msg_(msg)
  {}
  Init_BcmMessage5_ad_v_vin2 ad_v_vin1(::pix_robobus_driver_msgs::msg::BcmMessage5::_ad_v_vin1_type arg)
  {
    msg_.ad_v_vin1 = std::move(arg);
    return Init_BcmMessage5_ad_v_vin2(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::BcmMessage5 msg_;
};

class Init_BcmMessage5_header
{
public:
  Init_BcmMessage5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BcmMessage5_ad_v_vin1 header(::pix_robobus_driver_msgs::msg::BcmMessage5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BcmMessage5_ad_v_vin1(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::BcmMessage5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::BcmMessage5>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_BcmMessage5_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE5__BUILDER_HPP_
