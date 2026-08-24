// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AutoVcuMessage2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pix_robobus_driver_msgs__msg__AutoVcuMessage2 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AutoVcuMessage2 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AutoVcuMessage2_
{
  using Type = AutoVcuMessage2_<ContainerAllocator>;

  explicit AutoVcuMessage2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_red_ctrl = 0l;
      this->pwm_green_ctrl = 0l;
      this->pwm_blue_ctrl = 0l;
      this->atmospherelightbrightness = 0l;
    }
  }

  explicit AutoVcuMessage2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pwm_red_ctrl = 0l;
      this->pwm_green_ctrl = 0l;
      this->pwm_blue_ctrl = 0l;
      this->atmospherelightbrightness = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pwm_red_ctrl_type =
    int32_t;
  _pwm_red_ctrl_type pwm_red_ctrl;
  using _pwm_green_ctrl_type =
    int32_t;
  _pwm_green_ctrl_type pwm_green_ctrl;
  using _pwm_blue_ctrl_type =
    int32_t;
  _pwm_blue_ctrl_type pwm_blue_ctrl;
  using _atmospherelightbrightness_type =
    int32_t;
  _atmospherelightbrightness_type atmospherelightbrightness;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pwm_red_ctrl(
    const int32_t & _arg)
  {
    this->pwm_red_ctrl = _arg;
    return *this;
  }
  Type & set__pwm_green_ctrl(
    const int32_t & _arg)
  {
    this->pwm_green_ctrl = _arg;
    return *this;
  }
  Type & set__pwm_blue_ctrl(
    const int32_t & _arg)
  {
    this->pwm_blue_ctrl = _arg;
    return *this;
  }
  Type & set__atmospherelightbrightness(
    const int32_t & _arg)
  {
    this->atmospherelightbrightness = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AutoVcuMessage2
    std::shared_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AutoVcuMessage2
    std::shared_ptr<pix_robobus_driver_msgs::msg::AutoVcuMessage2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AutoVcuMessage2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pwm_red_ctrl != other.pwm_red_ctrl) {
      return false;
    }
    if (this->pwm_green_ctrl != other.pwm_green_ctrl) {
      return false;
    }
    if (this->pwm_blue_ctrl != other.pwm_blue_ctrl) {
      return false;
    }
    if (this->atmospherelightbrightness != other.atmospherelightbrightness) {
      return false;
    }
    return true;
  }
  bool operator!=(const AutoVcuMessage2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AutoVcuMessage2_

// alias to use template instance with default allocator
using AutoVcuMessage2 =
  pix_robobus_driver_msgs::msg::AutoVcuMessage2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AUTO_VCU_MESSAGE2__STRUCT_HPP_
