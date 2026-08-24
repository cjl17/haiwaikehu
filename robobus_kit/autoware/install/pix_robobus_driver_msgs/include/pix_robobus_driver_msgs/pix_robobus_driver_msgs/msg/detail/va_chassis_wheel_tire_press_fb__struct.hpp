// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisWheelTirePressFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaChassisWheelTirePressFb_
{
  using Type = VaChassisWheelTirePressFb_<ContainerAllocator>;

  explicit VaChassisWheelTirePressFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_wheel_tire_press_lf = 0.0f;
      this->vcu_chassis_wheel_tire_press_rf = 0.0f;
      this->vcu_chassis_wheel_tire_press_lr = 0.0f;
      this->vcu_chassis_wheel_tire_press_rr = 0.0f;
    }
  }

  explicit VaChassisWheelTirePressFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_wheel_tire_press_lf = 0.0f;
      this->vcu_chassis_wheel_tire_press_rf = 0.0f;
      this->vcu_chassis_wheel_tire_press_lr = 0.0f;
      this->vcu_chassis_wheel_tire_press_rr = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_chassis_wheel_tire_press_lf_type =
    float;
  _vcu_chassis_wheel_tire_press_lf_type vcu_chassis_wheel_tire_press_lf;
  using _vcu_chassis_wheel_tire_press_rf_type =
    float;
  _vcu_chassis_wheel_tire_press_rf_type vcu_chassis_wheel_tire_press_rf;
  using _vcu_chassis_wheel_tire_press_lr_type =
    float;
  _vcu_chassis_wheel_tire_press_lr_type vcu_chassis_wheel_tire_press_lr;
  using _vcu_chassis_wheel_tire_press_rr_type =
    float;
  _vcu_chassis_wheel_tire_press_rr_type vcu_chassis_wheel_tire_press_rr;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_chassis_wheel_tire_press_lf(
    const float & _arg)
  {
    this->vcu_chassis_wheel_tire_press_lf = _arg;
    return *this;
  }
  Type & set__vcu_chassis_wheel_tire_press_rf(
    const float & _arg)
  {
    this->vcu_chassis_wheel_tire_press_rf = _arg;
    return *this;
  }
  Type & set__vcu_chassis_wheel_tire_press_lr(
    const float & _arg)
  {
    this->vcu_chassis_wheel_tire_press_lr = _arg;
    return *this;
  }
  Type & set__vcu_chassis_wheel_tire_press_rr(
    const float & _arg)
  {
    this->vcu_chassis_wheel_tire_press_rr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaChassisWheelTirePressFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_chassis_wheel_tire_press_lf != other.vcu_chassis_wheel_tire_press_lf) {
      return false;
    }
    if (this->vcu_chassis_wheel_tire_press_rf != other.vcu_chassis_wheel_tire_press_rf) {
      return false;
    }
    if (this->vcu_chassis_wheel_tire_press_lr != other.vcu_chassis_wheel_tire_press_lr) {
      return false;
    }
    if (this->vcu_chassis_wheel_tire_press_rr != other.vcu_chassis_wheel_tire_press_rr) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaChassisWheelTirePressFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaChassisWheelTirePressFb_

// alias to use template instance with default allocator
using VaChassisWheelTirePressFb =
  pix_robobus_driver_msgs::msg::VaChassisWheelTirePressFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_WHEEL_TIRE_PRESS_FB__STRUCT_HPP_
