// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "autoware_sensing_msgs/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace autoware_sensing_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarObject_classifications
{
public:
  explicit Init_RadarObject_classifications(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  ::autoware_sensing_msgs::msg::RadarObject classifications(::autoware_sensing_msgs::msg::RadarObject::_classifications_type arg)
  {
    msg_.classifications = std::move(arg);
    return std::move(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_existence_probability
{
public:
  explicit Init_RadarObject_existence_probability(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_classifications existence_probability(::autoware_sensing_msgs::msg::RadarObject::_existence_probability_type arg)
  {
    msg_.existence_probability = std::move(arg);
    return Init_RadarObject_classifications(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_orientation_rate_std
{
public:
  explicit Init_RadarObject_orientation_rate_std(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_existence_probability orientation_rate_std(::autoware_sensing_msgs::msg::RadarObject::_orientation_rate_std_type arg)
  {
    msg_.orientation_rate_std = std::move(arg);
    return Init_RadarObject_existence_probability(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_orientation_rate
{
public:
  explicit Init_RadarObject_orientation_rate(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_orientation_rate_std orientation_rate(::autoware_sensing_msgs::msg::RadarObject::_orientation_rate_type arg)
  {
    msg_.orientation_rate = std::move(arg);
    return Init_RadarObject_orientation_rate_std(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_orientation_std
{
public:
  explicit Init_RadarObject_orientation_std(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_orientation_rate orientation_std(::autoware_sensing_msgs::msg::RadarObject::_orientation_std_type arg)
  {
    msg_.orientation_std = std::move(arg);
    return Init_RadarObject_orientation_rate(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_orientation
{
public:
  explicit Init_RadarObject_orientation(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_orientation_std orientation(::autoware_sensing_msgs::msg::RadarObject::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_RadarObject_orientation_std(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_size_covariance
{
public:
  explicit Init_RadarObject_size_covariance(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_orientation size_covariance(::autoware_sensing_msgs::msg::RadarObject::_size_covariance_type arg)
  {
    msg_.size_covariance = std::move(arg);
    return Init_RadarObject_orientation(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_acceleration_covariance
{
public:
  explicit Init_RadarObject_acceleration_covariance(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_size_covariance acceleration_covariance(::autoware_sensing_msgs::msg::RadarObject::_acceleration_covariance_type arg)
  {
    msg_.acceleration_covariance = std::move(arg);
    return Init_RadarObject_size_covariance(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_velocity_covariance
{
public:
  explicit Init_RadarObject_velocity_covariance(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_acceleration_covariance velocity_covariance(::autoware_sensing_msgs::msg::RadarObject::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_RadarObject_acceleration_covariance(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_position_covariance
{
public:
  explicit Init_RadarObject_position_covariance(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_velocity_covariance position_covariance(::autoware_sensing_msgs::msg::RadarObject::_position_covariance_type arg)
  {
    msg_.position_covariance = std::move(arg);
    return Init_RadarObject_velocity_covariance(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_size
{
public:
  explicit Init_RadarObject_size(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_position_covariance size(::autoware_sensing_msgs::msg::RadarObject::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_RadarObject_position_covariance(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_acceleration
{
public:
  explicit Init_RadarObject_acceleration(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_size acceleration(::autoware_sensing_msgs::msg::RadarObject::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RadarObject_size(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_velocity
{
public:
  explicit Init_RadarObject_velocity(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_acceleration velocity(::autoware_sensing_msgs::msg::RadarObject::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_RadarObject_acceleration(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_position
{
public:
  explicit Init_RadarObject_position(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_velocity position(::autoware_sensing_msgs::msg::RadarObject::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_RadarObject_velocity(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_movement_status
{
public:
  explicit Init_RadarObject_movement_status(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_position movement_status(::autoware_sensing_msgs::msg::RadarObject::_movement_status_type arg)
  {
    msg_.movement_status = std::move(arg);
    return Init_RadarObject_position(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_measurement_status
{
public:
  explicit Init_RadarObject_measurement_status(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_movement_status measurement_status(::autoware_sensing_msgs::msg::RadarObject::_measurement_status_type arg)
  {
    msg_.measurement_status = std::move(arg);
    return Init_RadarObject_movement_status(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_age
{
public:
  explicit Init_RadarObject_age(::autoware_sensing_msgs::msg::RadarObject & msg)
  : msg_(msg)
  {}
  Init_RadarObject_measurement_status age(::autoware_sensing_msgs::msg::RadarObject::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_RadarObject_measurement_status(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

class Init_RadarObject_object_id
{
public:
  Init_RadarObject_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarObject_age object_id(::autoware_sensing_msgs::msg::RadarObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_RadarObject_age(msg_);
  }

private:
  ::autoware_sensing_msgs::msg::RadarObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::autoware_sensing_msgs::msg::RadarObject>()
{
  return autoware_sensing_msgs::msg::builder::Init_RadarObject_object_id();
}

}  // namespace autoware_sensing_msgs

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__BUILDER_HPP_
