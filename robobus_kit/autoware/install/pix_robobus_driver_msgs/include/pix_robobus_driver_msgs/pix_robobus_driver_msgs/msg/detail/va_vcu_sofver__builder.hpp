// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVcuSofver.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_vcu_sofver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaVcuSofver_version_patch
{
public:
  explicit Init_VaVcuSofver_version_patch(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaVcuSofver version_patch(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_patch_type arg)
  {
    msg_.version_patch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_version_sub
{
public:
  explicit Init_VaVcuSofver_version_sub(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  Init_VaVcuSofver_version_patch version_sub(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_sub_type arg)
  {
    msg_.version_sub = std::move(arg);
    return Init_VaVcuSofver_version_patch(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_version_main
{
public:
  explicit Init_VaVcuSofver_version_main(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  Init_VaVcuSofver_version_sub version_main(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_main_type arg)
  {
    msg_.version_main = std::move(arg);
    return Init_VaVcuSofver_version_sub(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_version_day
{
public:
  explicit Init_VaVcuSofver_version_day(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  Init_VaVcuSofver_version_main version_day(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_day_type arg)
  {
    msg_.version_day = std::move(arg);
    return Init_VaVcuSofver_version_main(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_version_month
{
public:
  explicit Init_VaVcuSofver_version_month(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  Init_VaVcuSofver_version_day version_month(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_month_type arg)
  {
    msg_.version_month = std::move(arg);
    return Init_VaVcuSofver_version_day(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_version_year
{
public:
  explicit Init_VaVcuSofver_version_year(::pix_robobus_driver_msgs::msg::VaVcuSofver & msg)
  : msg_(msg)
  {}
  Init_VaVcuSofver_version_month version_year(::pix_robobus_driver_msgs::msg::VaVcuSofver::_version_year_type arg)
  {
    msg_.version_year = std::move(arg);
    return Init_VaVcuSofver_version_month(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

class Init_VaVcuSofver_header
{
public:
  Init_VaVcuSofver_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaVcuSofver_version_year header(::pix_robobus_driver_msgs::msg::VaVcuSofver::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaVcuSofver_version_year(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaVcuSofver msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaVcuSofver>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaVcuSofver_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VCU_SOFVER__BUILDER_HPP_
