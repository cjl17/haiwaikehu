// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvSteerCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvSteerCtrl __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvSteerCtrl __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvSteerCtrl_
{
  using Type = AvSteerCtrl_<ContainerAllocator>;

  explicit AvSteerCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_chassis_steer_en_ctrl = false;
      this->acu_chassis_steer_mode_ctrl = 0l;
      this->acu_chassis_steer_angle_target = 0l;
      this->acu_chassis_steer_angle_rear_target = 0l;
      this->acu_chassis_steer_angle_speed_ctrl = 0.0f;
      this->acu_steer_life_sig = 0l;
      this->acu_check_sum132 = 0l;
    }
  }

  explicit AvSteerCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_chassis_steer_en_ctrl = false;
      this->acu_chassis_steer_mode_ctrl = 0l;
      this->acu_chassis_steer_angle_target = 0l;
      this->acu_chassis_steer_angle_rear_target = 0l;
      this->acu_chassis_steer_angle_speed_ctrl = 0.0f;
      this->acu_steer_life_sig = 0l;
      this->acu_check_sum132 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acu_chassis_steer_en_ctrl_type =
    bool;
  _acu_chassis_steer_en_ctrl_type acu_chassis_steer_en_ctrl;
  using _acu_chassis_steer_mode_ctrl_type =
    int32_t;
  _acu_chassis_steer_mode_ctrl_type acu_chassis_steer_mode_ctrl;
  using _acu_chassis_steer_angle_target_type =
    int32_t;
  _acu_chassis_steer_angle_target_type acu_chassis_steer_angle_target;
  using _acu_chassis_steer_angle_rear_target_type =
    int32_t;
  _acu_chassis_steer_angle_rear_target_type acu_chassis_steer_angle_rear_target;
  using _acu_chassis_steer_angle_speed_ctrl_type =
    float;
  _acu_chassis_steer_angle_speed_ctrl_type acu_chassis_steer_angle_speed_ctrl;
  using _acu_steer_life_sig_type =
    int32_t;
  _acu_steer_life_sig_type acu_steer_life_sig;
  using _acu_check_sum132_type =
    int32_t;
  _acu_check_sum132_type acu_check_sum132;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acu_chassis_steer_en_ctrl(
    const bool & _arg)
  {
    this->acu_chassis_steer_en_ctrl = _arg;
    return *this;
  }
  Type & set__acu_chassis_steer_mode_ctrl(
    const int32_t & _arg)
  {
    this->acu_chassis_steer_mode_ctrl = _arg;
    return *this;
  }
  Type & set__acu_chassis_steer_angle_target(
    const int32_t & _arg)
  {
    this->acu_chassis_steer_angle_target = _arg;
    return *this;
  }
  Type & set__acu_chassis_steer_angle_rear_target(
    const int32_t & _arg)
  {
    this->acu_chassis_steer_angle_rear_target = _arg;
    return *this;
  }
  Type & set__acu_chassis_steer_angle_speed_ctrl(
    const float & _arg)
  {
    this->acu_chassis_steer_angle_speed_ctrl = _arg;
    return *this;
  }
  Type & set__acu_steer_life_sig(
    const int32_t & _arg)
  {
    this->acu_steer_life_sig = _arg;
    return *this;
  }
  Type & set__acu_check_sum132(
    const int32_t & _arg)
  {
    this->acu_check_sum132 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvSteerCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvSteerCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvSteerCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvSteerCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acu_chassis_steer_en_ctrl != other.acu_chassis_steer_en_ctrl) {
      return false;
    }
    if (this->acu_chassis_steer_mode_ctrl != other.acu_chassis_steer_mode_ctrl) {
      return false;
    }
    if (this->acu_chassis_steer_angle_target != other.acu_chassis_steer_angle_target) {
      return false;
    }
    if (this->acu_chassis_steer_angle_rear_target != other.acu_chassis_steer_angle_rear_target) {
      return false;
    }
    if (this->acu_chassis_steer_angle_speed_ctrl != other.acu_chassis_steer_angle_speed_ctrl) {
      return false;
    }
    if (this->acu_steer_life_sig != other.acu_steer_life_sig) {
      return false;
    }
    if (this->acu_check_sum132 != other.acu_check_sum132) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvSteerCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvSteerCtrl_

// alias to use template instance with default allocator
using AvSteerCtrl =
  pix_robobus_driver_msgs::msg::AvSteerCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_STEER_CTRL__STRUCT_HPP_
