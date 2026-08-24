// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisOdoFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__BUILDER_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pix_robobus_driver_msgs/msg/detail/va_chassis_odo_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pix_robobus_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_VaChassisOdoFb_vcu_vehicle_remaining_range
{
public:
  explicit Init_VaChassisOdoFb_vcu_vehicle_remaining_range(::pix_robobus_driver_msgs::msg::VaChassisOdoFb & msg)
  : msg_(msg)
  {}
  ::pix_robobus_driver_msgs::msg::VaChassisOdoFb vcu_vehicle_remaining_range(::pix_robobus_driver_msgs::msg::VaChassisOdoFb::_vcu_vehicle_remaining_range_type arg)
  {
    msg_.vcu_vehicle_remaining_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisOdoFb msg_;
};

class Init_VaChassisOdoFb_vcu_vehicle_trip
{
public:
  explicit Init_VaChassisOdoFb_vcu_vehicle_trip(::pix_robobus_driver_msgs::msg::VaChassisOdoFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisOdoFb_vcu_vehicle_remaining_range vcu_vehicle_trip(::pix_robobus_driver_msgs::msg::VaChassisOdoFb::_vcu_vehicle_trip_type arg)
  {
    msg_.vcu_vehicle_trip = std::move(arg);
    return Init_VaChassisOdoFb_vcu_vehicle_remaining_range(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisOdoFb msg_;
};

class Init_VaChassisOdoFb_vcu_vehicle_odo
{
public:
  explicit Init_VaChassisOdoFb_vcu_vehicle_odo(::pix_robobus_driver_msgs::msg::VaChassisOdoFb & msg)
  : msg_(msg)
  {}
  Init_VaChassisOdoFb_vcu_vehicle_trip vcu_vehicle_odo(::pix_robobus_driver_msgs::msg::VaChassisOdoFb::_vcu_vehicle_odo_type arg)
  {
    msg_.vcu_vehicle_odo = std::move(arg);
    return Init_VaChassisOdoFb_vcu_vehicle_trip(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisOdoFb msg_;
};

class Init_VaChassisOdoFb_header
{
public:
  Init_VaChassisOdoFb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VaChassisOdoFb_vcu_vehicle_odo header(::pix_robobus_driver_msgs::msg::VaChassisOdoFb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VaChassisOdoFb_vcu_vehicle_odo(msg_);
  }

private:
  ::pix_robobus_driver_msgs::msg::VaChassisOdoFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pix_robobus_driver_msgs::msg::VaChassisOdoFb>()
{
  return pix_robobus_driver_msgs::msg::builder::Init_VaChassisOdoFb_header();
}

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__BUILDER_HPP_
