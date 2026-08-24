// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaBrakeStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaBrakeStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaBrakeStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaBrakeStaFb_
{
  using Type = VaBrakeStaFb_<ContainerAllocator>;

  explicit VaBrakeStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_brake_en_sta = false;
      this->vcu_vehicle_brake_lamp_fb = false;
      this->vcu_chassis_epb_fb = 0l;
      this->vcu_chassis_brake_communication_lost = false;
      this->vcu_chassis_brake_padl_fb = 0.0f;
      this->vcu_brake_pedal_req_fb = false;
      this->vcu_aeb_en_sta_fb = false;
      this->vcu_aeb_trigger_sta_fb = false;
      this->vcu_chassis_brake_pressure_fb = 0l;
      this->vcu_brake_life = 0l;
      this->vcu_brake_check_sta = false;
    }
  }

  explicit VaBrakeStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_chassis_brake_en_sta = false;
      this->vcu_vehicle_brake_lamp_fb = false;
      this->vcu_chassis_epb_fb = 0l;
      this->vcu_chassis_brake_communication_lost = false;
      this->vcu_chassis_brake_padl_fb = 0.0f;
      this->vcu_brake_pedal_req_fb = false;
      this->vcu_aeb_en_sta_fb = false;
      this->vcu_aeb_trigger_sta_fb = false;
      this->vcu_chassis_brake_pressure_fb = 0l;
      this->vcu_brake_life = 0l;
      this->vcu_brake_check_sta = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_chassis_brake_en_sta_type =
    bool;
  _vcu_chassis_brake_en_sta_type vcu_chassis_brake_en_sta;
  using _vcu_vehicle_brake_lamp_fb_type =
    bool;
  _vcu_vehicle_brake_lamp_fb_type vcu_vehicle_brake_lamp_fb;
  using _vcu_chassis_epb_fb_type =
    int32_t;
  _vcu_chassis_epb_fb_type vcu_chassis_epb_fb;
  using _vcu_chassis_brake_communication_lost_type =
    bool;
  _vcu_chassis_brake_communication_lost_type vcu_chassis_brake_communication_lost;
  using _vcu_chassis_brake_padl_fb_type =
    float;
  _vcu_chassis_brake_padl_fb_type vcu_chassis_brake_padl_fb;
  using _vcu_brake_pedal_req_fb_type =
    bool;
  _vcu_brake_pedal_req_fb_type vcu_brake_pedal_req_fb;
  using _vcu_aeb_en_sta_fb_type =
    bool;
  _vcu_aeb_en_sta_fb_type vcu_aeb_en_sta_fb;
  using _vcu_aeb_trigger_sta_fb_type =
    bool;
  _vcu_aeb_trigger_sta_fb_type vcu_aeb_trigger_sta_fb;
  using _vcu_chassis_brake_pressure_fb_type =
    int32_t;
  _vcu_chassis_brake_pressure_fb_type vcu_chassis_brake_pressure_fb;
  using _vcu_brake_life_type =
    int32_t;
  _vcu_brake_life_type vcu_brake_life;
  using _vcu_brake_check_sta_type =
    bool;
  _vcu_brake_check_sta_type vcu_brake_check_sta;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_chassis_brake_en_sta(
    const bool & _arg)
  {
    this->vcu_chassis_brake_en_sta = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_brake_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_brake_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_epb_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_epb_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_brake_communication_lost(
    const bool & _arg)
  {
    this->vcu_chassis_brake_communication_lost = _arg;
    return *this;
  }
  Type & set__vcu_chassis_brake_padl_fb(
    const float & _arg)
  {
    this->vcu_chassis_brake_padl_fb = _arg;
    return *this;
  }
  Type & set__vcu_brake_pedal_req_fb(
    const bool & _arg)
  {
    this->vcu_brake_pedal_req_fb = _arg;
    return *this;
  }
  Type & set__vcu_aeb_en_sta_fb(
    const bool & _arg)
  {
    this->vcu_aeb_en_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_aeb_trigger_sta_fb(
    const bool & _arg)
  {
    this->vcu_aeb_trigger_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_brake_pressure_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_brake_pressure_fb = _arg;
    return *this;
  }
  Type & set__vcu_brake_life(
    const int32_t & _arg)
  {
    this->vcu_brake_life = _arg;
    return *this;
  }
  Type & set__vcu_brake_check_sta(
    const bool & _arg)
  {
    this->vcu_brake_check_sta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaBrakeStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaBrakeStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaBrakeStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaBrakeStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_chassis_brake_en_sta != other.vcu_chassis_brake_en_sta) {
      return false;
    }
    if (this->vcu_vehicle_brake_lamp_fb != other.vcu_vehicle_brake_lamp_fb) {
      return false;
    }
    if (this->vcu_chassis_epb_fb != other.vcu_chassis_epb_fb) {
      return false;
    }
    if (this->vcu_chassis_brake_communication_lost != other.vcu_chassis_brake_communication_lost) {
      return false;
    }
    if (this->vcu_chassis_brake_padl_fb != other.vcu_chassis_brake_padl_fb) {
      return false;
    }
    if (this->vcu_brake_pedal_req_fb != other.vcu_brake_pedal_req_fb) {
      return false;
    }
    if (this->vcu_aeb_en_sta_fb != other.vcu_aeb_en_sta_fb) {
      return false;
    }
    if (this->vcu_aeb_trigger_sta_fb != other.vcu_aeb_trigger_sta_fb) {
      return false;
    }
    if (this->vcu_chassis_brake_pressure_fb != other.vcu_chassis_brake_pressure_fb) {
      return false;
    }
    if (this->vcu_brake_life != other.vcu_brake_life) {
      return false;
    }
    if (this->vcu_brake_check_sta != other.vcu_brake_check_sta) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaBrakeStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaBrakeStaFb_

// alias to use template instance with default allocator
using VaBrakeStaFb =
  pix_robobus_driver_msgs::msg::VaBrakeStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_BRAKE_STA_FB__STRUCT_HPP_
