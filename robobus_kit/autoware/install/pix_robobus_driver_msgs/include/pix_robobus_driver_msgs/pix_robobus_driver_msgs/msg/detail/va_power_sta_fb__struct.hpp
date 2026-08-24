// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaPowerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaPowerStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaPowerStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaPowerStaFb_
{
  using Type = VaPowerStaFb_<ContainerAllocator>;

  explicit VaPowerStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_bms_reserved1 = 0l;
      this->vcu_chassis_power_charge_sta = 0l;
      this->vcu_chassis_power_charge_sock_sta = false;
      this->vcu_chassis_power_soc_fb = 0l;
      this->vcu_chassis_power_volt_fb = 0.0f;
      this->vcu_chassis_power_curr_fb = 0.0f;
      this->vcu_chassis_bms_max_temp = 0l;
      this->vcu_chassis_bms_reserved2 = 0l;
    }
  }

  explicit VaPowerStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_bms_reserved1 = 0l;
      this->vcu_chassis_power_charge_sta = 0l;
      this->vcu_chassis_power_charge_sock_sta = false;
      this->vcu_chassis_power_soc_fb = 0l;
      this->vcu_chassis_power_volt_fb = 0.0f;
      this->vcu_chassis_power_curr_fb = 0.0f;
      this->vcu_chassis_bms_max_temp = 0l;
      this->vcu_chassis_bms_reserved2 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_chassis_bms_reserved1_type =
    int32_t;
  _vcu_chassis_bms_reserved1_type vcu_chassis_bms_reserved1;
  using _vcu_chassis_power_charge_sta_type =
    int32_t;
  _vcu_chassis_power_charge_sta_type vcu_chassis_power_charge_sta;
  using _vcu_chassis_power_charge_sock_sta_type =
    bool;
  _vcu_chassis_power_charge_sock_sta_type vcu_chassis_power_charge_sock_sta;
  using _vcu_chassis_power_soc_fb_type =
    int32_t;
  _vcu_chassis_power_soc_fb_type vcu_chassis_power_soc_fb;
  using _vcu_chassis_power_volt_fb_type =
    float;
  _vcu_chassis_power_volt_fb_type vcu_chassis_power_volt_fb;
  using _vcu_chassis_power_curr_fb_type =
    float;
  _vcu_chassis_power_curr_fb_type vcu_chassis_power_curr_fb;
  using _vcu_chassis_bms_max_temp_type =
    int32_t;
  _vcu_chassis_bms_max_temp_type vcu_chassis_bms_max_temp;
  using _vcu_chassis_bms_reserved2_type =
    int32_t;
  _vcu_chassis_bms_reserved2_type vcu_chassis_bms_reserved2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_chassis_bms_reserved1(
    const int32_t & _arg)
  {
    this->vcu_chassis_bms_reserved1 = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_charge_sta(
    const int32_t & _arg)
  {
    this->vcu_chassis_power_charge_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_charge_sock_sta(
    const bool & _arg)
  {
    this->vcu_chassis_power_charge_sock_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_soc_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_power_soc_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_volt_fb(
    const float & _arg)
  {
    this->vcu_chassis_power_volt_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_curr_fb(
    const float & _arg)
  {
    this->vcu_chassis_power_curr_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_bms_max_temp(
    const int32_t & _arg)
  {
    this->vcu_chassis_bms_max_temp = _arg;
    return *this;
  }
  Type & set__vcu_chassis_bms_reserved2(
    const int32_t & _arg)
  {
    this->vcu_chassis_bms_reserved2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaPowerStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaPowerStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaPowerStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaPowerStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_chassis_bms_reserved1 != other.vcu_chassis_bms_reserved1) {
      return false;
    }
    if (this->vcu_chassis_power_charge_sta != other.vcu_chassis_power_charge_sta) {
      return false;
    }
    if (this->vcu_chassis_power_charge_sock_sta != other.vcu_chassis_power_charge_sock_sta) {
      return false;
    }
    if (this->vcu_chassis_power_soc_fb != other.vcu_chassis_power_soc_fb) {
      return false;
    }
    if (this->vcu_chassis_power_volt_fb != other.vcu_chassis_power_volt_fb) {
      return false;
    }
    if (this->vcu_chassis_power_curr_fb != other.vcu_chassis_power_curr_fb) {
      return false;
    }
    if (this->vcu_chassis_bms_max_temp != other.vcu_chassis_bms_max_temp) {
      return false;
    }
    if (this->vcu_chassis_bms_reserved2 != other.vcu_chassis_bms_reserved2) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaPowerStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaPowerStaFb_

// alias to use template instance with default allocator
using VaPowerStaFb =
  pix_robobus_driver_msgs::msg::VaPowerStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_POWER_STA_FB__STRUCT_HPP_
