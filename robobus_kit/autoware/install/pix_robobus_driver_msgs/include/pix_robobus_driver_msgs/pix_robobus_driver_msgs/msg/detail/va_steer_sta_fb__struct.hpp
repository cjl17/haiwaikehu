// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaSteerStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaSteerStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaSteerStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaSteerStaFb_
{
  using Type = VaSteerStaFb_<ContainerAllocator>;

  explicit VaSteerStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_steer_en_sta = false;
      this->vcu_chassis_steer_slopover = false;
      this->vcu_chassis_steer_work_mode = 0l;
      this->vcu_chassis_steer_mode_fb = 0l;
      this->vcu_chassis_steer_communication_lost = false;
      this->vcu_chassis_steer_angle_fb = 0l;
      this->vcu_chassis_steer_angle_rear_fb = 0l;
      this->vcu_chassis_steer_angle_speed_fb = 0.0f;
      this->vcu_steer_life = 0l;
      this->vcu_steer_check_sta = false;
    }
  }

  explicit VaSteerStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_steer_en_sta = false;
      this->vcu_chassis_steer_slopover = false;
      this->vcu_chassis_steer_work_mode = 0l;
      this->vcu_chassis_steer_mode_fb = 0l;
      this->vcu_chassis_steer_communication_lost = false;
      this->vcu_chassis_steer_angle_fb = 0l;
      this->vcu_chassis_steer_angle_rear_fb = 0l;
      this->vcu_chassis_steer_angle_speed_fb = 0.0f;
      this->vcu_steer_life = 0l;
      this->vcu_steer_check_sta = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_chassis_steer_en_sta_type =
    bool;
  _vcu_chassis_steer_en_sta_type vcu_chassis_steer_en_sta;
  using _vcu_chassis_steer_slopover_type =
    bool;
  _vcu_chassis_steer_slopover_type vcu_chassis_steer_slopover;
  using _vcu_chassis_steer_work_mode_type =
    int32_t;
  _vcu_chassis_steer_work_mode_type vcu_chassis_steer_work_mode;
  using _vcu_chassis_steer_mode_fb_type =
    int32_t;
  _vcu_chassis_steer_mode_fb_type vcu_chassis_steer_mode_fb;
  using _vcu_chassis_steer_communication_lost_type =
    bool;
  _vcu_chassis_steer_communication_lost_type vcu_chassis_steer_communication_lost;
  using _vcu_chassis_steer_angle_fb_type =
    int32_t;
  _vcu_chassis_steer_angle_fb_type vcu_chassis_steer_angle_fb;
  using _vcu_chassis_steer_angle_rear_fb_type =
    int32_t;
  _vcu_chassis_steer_angle_rear_fb_type vcu_chassis_steer_angle_rear_fb;
  using _vcu_chassis_steer_angle_speed_fb_type =
    float;
  _vcu_chassis_steer_angle_speed_fb_type vcu_chassis_steer_angle_speed_fb;
  using _vcu_steer_life_type =
    int32_t;
  _vcu_steer_life_type vcu_steer_life;
  using _vcu_steer_check_sta_type =
    bool;
  _vcu_steer_check_sta_type vcu_steer_check_sta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_en_sta(
    const bool & _arg)
  {
    this->vcu_chassis_steer_en_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_slopover(
    const bool & _arg)
  {
    this->vcu_chassis_steer_slopover = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_work_mode(
    const int32_t & _arg)
  {
    this->vcu_chassis_steer_work_mode = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_mode_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_steer_mode_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_communication_lost(
    const bool & _arg)
  {
    this->vcu_chassis_steer_communication_lost = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_angle_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_steer_angle_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_angle_rear_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_steer_angle_rear_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_steer_angle_speed_fb(
    const float & _arg)
  {
    this->vcu_chassis_steer_angle_speed_fb = _arg;
    return *this;
  }
  Type & set__vcu_steer_life(
    const int32_t & _arg)
  {
    this->vcu_steer_life = _arg;
    return *this;
  }
  Type & set__vcu_steer_check_sta(
    const bool & _arg)
  {
    this->vcu_steer_check_sta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaSteerStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaSteerStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaSteerStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaSteerStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_chassis_steer_en_sta != other.vcu_chassis_steer_en_sta) {
      return false;
    }
    if (this->vcu_chassis_steer_slopover != other.vcu_chassis_steer_slopover) {
      return false;
    }
    if (this->vcu_chassis_steer_work_mode != other.vcu_chassis_steer_work_mode) {
      return false;
    }
    if (this->vcu_chassis_steer_mode_fb != other.vcu_chassis_steer_mode_fb) {
      return false;
    }
    if (this->vcu_chassis_steer_communication_lost != other.vcu_chassis_steer_communication_lost) {
      return false;
    }
    if (this->vcu_chassis_steer_angle_fb != other.vcu_chassis_steer_angle_fb) {
      return false;
    }
    if (this->vcu_chassis_steer_angle_rear_fb != other.vcu_chassis_steer_angle_rear_fb) {
      return false;
    }
    if (this->vcu_chassis_steer_angle_speed_fb != other.vcu_chassis_steer_angle_speed_fb) {
      return false;
    }
    if (this->vcu_steer_life != other.vcu_steer_life) {
      return false;
    }
    if (this->vcu_steer_check_sta != other.vcu_steer_check_sta) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaSteerStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaSteerStaFb_

// alias to use template instance with default allocator
using VaSteerStaFb =
  pix_robobus_driver_msgs::msg::VaSteerStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_STEER_STA_FB__STRUCT_HPP_
