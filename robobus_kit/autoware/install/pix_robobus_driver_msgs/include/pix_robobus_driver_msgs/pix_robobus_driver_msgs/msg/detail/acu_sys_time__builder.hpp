// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/acu_sys_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_AcuSysTime_sys_time_second
{
public:
  explicit Init_AcuSysTime_sys_time_second(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::AcuSysTime sys_time_second(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_second_type arg)
  {
    msg_.sys_time_second = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_sys_time_minute
{
public:
  explicit Init_AcuSysTime_sys_time_minute(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  Init_AcuSysTime_sys_time_second sys_time_minute(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_minute_type arg)
  {
    msg_.sys_time_minute = std::move(arg);
    return Init_AcuSysTime_sys_time_second(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_sys_time_hour
{
public:
  explicit Init_AcuSysTime_sys_time_hour(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  Init_AcuSysTime_sys_time_minute sys_time_hour(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_hour_type arg)
  {
    msg_.sys_time_hour = std::move(arg);
    return Init_AcuSysTime_sys_time_minute(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_sys_time_day
{
public:
  explicit Init_AcuSysTime_sys_time_day(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  Init_AcuSysTime_sys_time_hour sys_time_day(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_day_type arg)
  {
    msg_.sys_time_day = std::move(arg);
    return Init_AcuSysTime_sys_time_hour(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_sys_time_month
{
public:
  explicit Init_AcuSysTime_sys_time_month(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  Init_AcuSysTime_sys_time_day sys_time_month(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_month_type arg)
  {
    msg_.sys_time_month = std::move(arg);
    return Init_AcuSysTime_sys_time_day(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_sys_time_year
{
public:
  explicit Init_AcuSysTime_sys_time_year(::pix_robobus_driver_msgs::msg::AcuSysTime & msg)
  : msg_(msg)
  {}
  Init_AcuSysTime_sys_time_month sys_time_year(::pix_robobus_driver_msgs::msg::AcuSysTime::_sys_time_year_type arg)
  {
    msg_.sys_time_year = std::move(arg);
    return Init_AcuSysTime_sys_time_month(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

class Init_AcuSysTime_header
{
public:
  Init_AcuSysTime_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcuSysTime_sys_time_year header(::pix_robobus_driver_msgs::msg::AcuSysTime::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcuSysTime_sys_time_year(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::AcuSysTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::AcuSysTime>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_AcuSysTime_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__ACU_SYS_TIME__BUILDER_HPP_
