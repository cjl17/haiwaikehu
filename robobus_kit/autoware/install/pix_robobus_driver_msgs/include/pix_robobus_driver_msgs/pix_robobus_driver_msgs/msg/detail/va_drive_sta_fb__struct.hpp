// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaDriveStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaDriveStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaDriveStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaDriveStaFb_
{
  using Type = VaDriveStaFb_<ContainerAllocator>;

  explicit VaDriveStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_driver_en_sta = false;
      this->vcu_chassis_diver_slopover = false;
      this->vcu_chassis_driver_mode_sta = 0l;
      this->vcu_chassis_gear_fb = 0l;
      this->vcu_chassis4_wd_mode_fb = 0l;
      this->vcu_chassis_speed_fb = 0.0f;
      this->vcu_chassis_throttle_pald_fb = 0.0f;
      this->vcu_chassis_throttle_pedal_req_fb = false;
      this->vcu_chassis_acceleration_fb = 0.0f;
      this->vcu_drive_life = 0l;
      this->vcu_drive_check_sta = false;
    }
  }

  explicit VaDriveStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_driver_en_sta = false;
      this->vcu_chassis_diver_slopover = false;
      this->vcu_chassis_driver_mode_sta = 0l;
      this->vcu_chassis_gear_fb = 0l;
      this->vcu_chassis4_wd_mode_fb = 0l;
      this->vcu_chassis_speed_fb = 0.0f;
      this->vcu_chassis_throttle_pald_fb = 0.0f;
      this->vcu_chassis_throttle_pedal_req_fb = false;
      this->vcu_chassis_acceleration_fb = 0.0f;
      this->vcu_drive_life = 0l;
      this->vcu_drive_check_sta = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_chassis_driver_en_sta_type =
    bool;
  _vcu_chassis_driver_en_sta_type vcu_chassis_driver_en_sta;
  using _vcu_chassis_diver_slopover_type =
    bool;
  _vcu_chassis_diver_slopover_type vcu_chassis_diver_slopover;
  using _vcu_chassis_driver_mode_sta_type =
    int32_t;
  _vcu_chassis_driver_mode_sta_type vcu_chassis_driver_mode_sta;
  using _vcu_chassis_gear_fb_type =
    int32_t;
  _vcu_chassis_gear_fb_type vcu_chassis_gear_fb;
  using _vcu_chassis4_wd_mode_fb_type =
    int32_t;
  _vcu_chassis4_wd_mode_fb_type vcu_chassis4_wd_mode_fb;
  using _vcu_chassis_speed_fb_type =
    float;
  _vcu_chassis_speed_fb_type vcu_chassis_speed_fb;
  using _vcu_chassis_throttle_pald_fb_type =
    float;
  _vcu_chassis_throttle_pald_fb_type vcu_chassis_throttle_pald_fb;
  using _vcu_chassis_throttle_pedal_req_fb_type =
    bool;
  _vcu_chassis_throttle_pedal_req_fb_type vcu_chassis_throttle_pedal_req_fb;
  using _vcu_chassis_acceleration_fb_type =
    float;
  _vcu_chassis_acceleration_fb_type vcu_chassis_acceleration_fb;
  using _vcu_drive_life_type =
    int32_t;
  _vcu_drive_life_type vcu_drive_life;
  using _vcu_drive_check_sta_type =
    bool;
  _vcu_drive_check_sta_type vcu_drive_check_sta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_chassis_driver_en_sta(
    const bool & _arg)
  {
    this->vcu_chassis_driver_en_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_diver_slopover(
    const bool & _arg)
  {
    this->vcu_chassis_diver_slopover = _arg;
    return *this;
  }
  Type & set__vcu_chassis_driver_mode_sta(
    const int32_t & _arg)
  {
    this->vcu_chassis_driver_mode_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_gear_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_gear_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis4_wd_mode_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis4_wd_mode_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_speed_fb(
    const float & _arg)
  {
    this->vcu_chassis_speed_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_throttle_pald_fb(
    const float & _arg)
  {
    this->vcu_chassis_throttle_pald_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_throttle_pedal_req_fb(
    const bool & _arg)
  {
    this->vcu_chassis_throttle_pedal_req_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_acceleration_fb(
    const float & _arg)
  {
    this->vcu_chassis_acceleration_fb = _arg;
    return *this;
  }
  Type & set__vcu_drive_life(
    const int32_t & _arg)
  {
    this->vcu_drive_life = _arg;
    return *this;
  }
  Type & set__vcu_drive_check_sta(
    const bool & _arg)
  {
    this->vcu_drive_check_sta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaDriveStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaDriveStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaDriveStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaDriveStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_chassis_driver_en_sta != other.vcu_chassis_driver_en_sta) {
      return false;
    }
    if (this->vcu_chassis_diver_slopover != other.vcu_chassis_diver_slopover) {
      return false;
    }
    if (this->vcu_chassis_driver_mode_sta != other.vcu_chassis_driver_mode_sta) {
      return false;
    }
    if (this->vcu_chassis_gear_fb != other.vcu_chassis_gear_fb) {
      return false;
    }
    if (this->vcu_chassis4_wd_mode_fb != other.vcu_chassis4_wd_mode_fb) {
      return false;
    }
    if (this->vcu_chassis_speed_fb != other.vcu_chassis_speed_fb) {
      return false;
    }
    if (this->vcu_chassis_throttle_pald_fb != other.vcu_chassis_throttle_pald_fb) {
      return false;
    }
    if (this->vcu_chassis_throttle_pedal_req_fb != other.vcu_chassis_throttle_pedal_req_fb) {
      return false;
    }
    if (this->vcu_chassis_acceleration_fb != other.vcu_chassis_acceleration_fb) {
      return false;
    }
    if (this->vcu_drive_life != other.vcu_drive_life) {
      return false;
    }
    if (this->vcu_drive_check_sta != other.vcu_drive_check_sta) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaDriveStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaDriveStaFb_

// alias to use template instance with default allocator
using VaDriveStaFb =
  pix_robobus_driver_msgs::msg::VaDriveStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_DRIVE_STA_FB__STRUCT_HPP_
