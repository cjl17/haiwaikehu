// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvWheelTorqueCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvWheelTorqueCtrl_
{
  using Type = AvWheelTorqueCtrl_<ContainerAllocator>;

  explicit AvWheelTorqueCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_motor_torque_lf_ctrl = 0.0f;
      this->acu_motor_torque_rf_ctrl = 0.0f;
      this->acu_motor_torque_lr_ctrl = 0.0f;
      this->acu_motor_torque_rr_ctrl = 0.0f;
    }
  }

  explicit AvWheelTorqueCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_motor_torque_lf_ctrl = 0.0f;
      this->acu_motor_torque_rf_ctrl = 0.0f;
      this->acu_motor_torque_lr_ctrl = 0.0f;
      this->acu_motor_torque_rr_ctrl = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acu_motor_torque_lf_ctrl_type =
    float;
  _acu_motor_torque_lf_ctrl_type acu_motor_torque_lf_ctrl;
  using _acu_motor_torque_rf_ctrl_type =
    float;
  _acu_motor_torque_rf_ctrl_type acu_motor_torque_rf_ctrl;
  using _acu_motor_torque_lr_ctrl_type =
    float;
  _acu_motor_torque_lr_ctrl_type acu_motor_torque_lr_ctrl;
  using _acu_motor_torque_rr_ctrl_type =
    float;
  _acu_motor_torque_rr_ctrl_type acu_motor_torque_rr_ctrl;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acu_motor_torque_lf_ctrl(
    const float & _arg)
  {
    this->acu_motor_torque_lf_ctrl = _arg;
    return *this;
  }
  Type & set__acu_motor_torque_rf_ctrl(
    const float & _arg)
  {
    this->acu_motor_torque_rf_ctrl = _arg;
    return *this;
  }
  Type & set__acu_motor_torque_lr_ctrl(
    const float & _arg)
  {
    this->acu_motor_torque_lr_ctrl = _arg;
    return *this;
  }
  Type & set__acu_motor_torque_rr_ctrl(
    const float & _arg)
  {
    this->acu_motor_torque_rr_ctrl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvWheelTorqueCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acu_motor_torque_lf_ctrl != other.acu_motor_torque_lf_ctrl) {
      return false;
    }
    if (this->acu_motor_torque_rf_ctrl != other.acu_motor_torque_rf_ctrl) {
      return false;
    }
    if (this->acu_motor_torque_lr_ctrl != other.acu_motor_torque_lr_ctrl) {
      return false;
    }
    if (this->acu_motor_torque_rr_ctrl != other.acu_motor_torque_rr_ctrl) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvWheelTorqueCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvWheelTorqueCtrl_

// alias to use template instance with default allocator
using AvWheelTorqueCtrl =
  pix_robobus_driver_msgs::msg::AvWheelTorqueCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_WHEEL_TORQUE_CTRL__STRUCT_HPP_
