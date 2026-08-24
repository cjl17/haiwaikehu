// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaVehicleStaFb_
{
  using Type = VaVehicleStaFb_<ContainerAllocator>;

  explicit VaVehicleStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_vehicle_pos_lamp_fb = false;
      this->vcu_vehicle_head_lamp_fb = false;
      this->vcu_vehicle_left_lamp_fb = false;
      this->vcu_vehicle_right_lamp_fb = false;
      this->vcu_vehicle_high_beam_fb = false;
      this->vcu_vehicle_fog_lamp_fb = false;
      this->vcu_vehicle_hazard_war_lamp_fb = false;
      this->vcu_vehicle_body_lamp_fb = false;
      this->vcu_vehicle_read_lamp_fb = false;
      this->acu_vehicle_window_fb = 0l;
      this->vcu_vehicle_door_sta_fb = 0l;
      this->vcu_vehicle_wipers_sta_fb = 0l;
      this->vcu_vehicle_safety_belt1 = 0l;
      this->vcu_vehicle_safety_belt2 = 0l;
      this->vcu_vehicle_safety_belt3 = 0l;
      this->vcu_vehicle_safety_belt4 = 0l;
      this->vcu_vehicle_safety_belt5 = 0l;
      this->vcu_vehicle_safety_belt6 = 0l;
      this->vcu_vehicle_reserve_warning = 0l;
      this->vcu_vehicle_display_speed = 0l;
    }
  }

  explicit VaVehicleStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_vehicle_pos_lamp_fb = false;
      this->vcu_vehicle_head_lamp_fb = false;
      this->vcu_vehicle_left_lamp_fb = false;
      this->vcu_vehicle_right_lamp_fb = false;
      this->vcu_vehicle_high_beam_fb = false;
      this->vcu_vehicle_fog_lamp_fb = false;
      this->vcu_vehicle_hazard_war_lamp_fb = false;
      this->vcu_vehicle_body_lamp_fb = false;
      this->vcu_vehicle_read_lamp_fb = false;
      this->acu_vehicle_window_fb = 0l;
      this->vcu_vehicle_door_sta_fb = 0l;
      this->vcu_vehicle_wipers_sta_fb = 0l;
      this->vcu_vehicle_safety_belt1 = 0l;
      this->vcu_vehicle_safety_belt2 = 0l;
      this->vcu_vehicle_safety_belt3 = 0l;
      this->vcu_vehicle_safety_belt4 = 0l;
      this->vcu_vehicle_safety_belt5 = 0l;
      this->vcu_vehicle_safety_belt6 = 0l;
      this->vcu_vehicle_reserve_warning = 0l;
      this->vcu_vehicle_display_speed = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_vehicle_pos_lamp_fb_type =
    bool;
  _vcu_vehicle_pos_lamp_fb_type vcu_vehicle_pos_lamp_fb;
  using _vcu_vehicle_head_lamp_fb_type =
    bool;
  _vcu_vehicle_head_lamp_fb_type vcu_vehicle_head_lamp_fb;
  using _vcu_vehicle_left_lamp_fb_type =
    bool;
  _vcu_vehicle_left_lamp_fb_type vcu_vehicle_left_lamp_fb;
  using _vcu_vehicle_right_lamp_fb_type =
    bool;
  _vcu_vehicle_right_lamp_fb_type vcu_vehicle_right_lamp_fb;
  using _vcu_vehicle_high_beam_fb_type =
    bool;
  _vcu_vehicle_high_beam_fb_type vcu_vehicle_high_beam_fb;
  using _vcu_vehicle_fog_lamp_fb_type =
    bool;
  _vcu_vehicle_fog_lamp_fb_type vcu_vehicle_fog_lamp_fb;
  using _vcu_vehicle_hazard_war_lamp_fb_type =
    bool;
  _vcu_vehicle_hazard_war_lamp_fb_type vcu_vehicle_hazard_war_lamp_fb;
  using _vcu_vehicle_body_lamp_fb_type =
    bool;
  _vcu_vehicle_body_lamp_fb_type vcu_vehicle_body_lamp_fb;
  using _vcu_vehicle_read_lamp_fb_type =
    bool;
  _vcu_vehicle_read_lamp_fb_type vcu_vehicle_read_lamp_fb;
  using _acu_vehicle_window_fb_type =
    int32_t;
  _acu_vehicle_window_fb_type acu_vehicle_window_fb;
  using _vcu_vehicle_door_sta_fb_type =
    int32_t;
  _vcu_vehicle_door_sta_fb_type vcu_vehicle_door_sta_fb;
  using _vcu_vehicle_wipers_sta_fb_type =
    int32_t;
  _vcu_vehicle_wipers_sta_fb_type vcu_vehicle_wipers_sta_fb;
  using _vcu_vehicle_safety_belt1_type =
    int32_t;
  _vcu_vehicle_safety_belt1_type vcu_vehicle_safety_belt1;
  using _vcu_vehicle_safety_belt2_type =
    int32_t;
  _vcu_vehicle_safety_belt2_type vcu_vehicle_safety_belt2;
  using _vcu_vehicle_safety_belt3_type =
    int32_t;
  _vcu_vehicle_safety_belt3_type vcu_vehicle_safety_belt3;
  using _vcu_vehicle_safety_belt4_type =
    int32_t;
  _vcu_vehicle_safety_belt4_type vcu_vehicle_safety_belt4;
  using _vcu_vehicle_safety_belt5_type =
    int32_t;
  _vcu_vehicle_safety_belt5_type vcu_vehicle_safety_belt5;
  using _vcu_vehicle_safety_belt6_type =
    int32_t;
  _vcu_vehicle_safety_belt6_type vcu_vehicle_safety_belt6;
  using _vcu_vehicle_reserve_warning_type =
    int32_t;
  _vcu_vehicle_reserve_warning_type vcu_vehicle_reserve_warning;
  using _vcu_vehicle_display_speed_type =
    int32_t;
  _vcu_vehicle_display_speed_type vcu_vehicle_display_speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_pos_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_pos_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_head_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_head_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_left_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_left_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_right_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_right_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_high_beam_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_high_beam_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_fog_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_fog_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_hazard_war_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_hazard_war_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_body_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_body_lamp_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_read_lamp_fb(
    const bool & _arg)
  {
    this->vcu_vehicle_read_lamp_fb = _arg;
    return *this;
  }
  Type & set__acu_vehicle_window_fb(
    const int32_t & _arg)
  {
    this->acu_vehicle_window_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_door_sta_fb(
    const int32_t & _arg)
  {
    this->vcu_vehicle_door_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_wipers_sta_fb(
    const int32_t & _arg)
  {
    this->vcu_vehicle_wipers_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt1(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt1 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt2(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt2 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt3(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt3 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt4(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt4 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt5(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt5 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_safety_belt6(
    const int32_t & _arg)
  {
    this->vcu_vehicle_safety_belt6 = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_reserve_warning(
    const int32_t & _arg)
  {
    this->vcu_vehicle_reserve_warning = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_display_speed(
    const int32_t & _arg)
  {
    this->vcu_vehicle_display_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaVehicleStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_vehicle_pos_lamp_fb != other.vcu_vehicle_pos_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_head_lamp_fb != other.vcu_vehicle_head_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_left_lamp_fb != other.vcu_vehicle_left_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_right_lamp_fb != other.vcu_vehicle_right_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_high_beam_fb != other.vcu_vehicle_high_beam_fb) {
      return false;
    }
    if (this->vcu_vehicle_fog_lamp_fb != other.vcu_vehicle_fog_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_hazard_war_lamp_fb != other.vcu_vehicle_hazard_war_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_body_lamp_fb != other.vcu_vehicle_body_lamp_fb) {
      return false;
    }
    if (this->vcu_vehicle_read_lamp_fb != other.vcu_vehicle_read_lamp_fb) {
      return false;
    }
    if (this->acu_vehicle_window_fb != other.acu_vehicle_window_fb) {
      return false;
    }
    if (this->vcu_vehicle_door_sta_fb != other.vcu_vehicle_door_sta_fb) {
      return false;
    }
    if (this->vcu_vehicle_wipers_sta_fb != other.vcu_vehicle_wipers_sta_fb) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt1 != other.vcu_vehicle_safety_belt1) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt2 != other.vcu_vehicle_safety_belt2) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt3 != other.vcu_vehicle_safety_belt3) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt4 != other.vcu_vehicle_safety_belt4) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt5 != other.vcu_vehicle_safety_belt5) {
      return false;
    }
    if (this->vcu_vehicle_safety_belt6 != other.vcu_vehicle_safety_belt6) {
      return false;
    }
    if (this->vcu_vehicle_reserve_warning != other.vcu_vehicle_reserve_warning) {
      return false;
    }
    if (this->vcu_vehicle_display_speed != other.vcu_vehicle_display_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaVehicleStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaVehicleStaFb_

// alias to use template instance with default allocator
using VaVehicleStaFb =
  pix_robobus_driver_msgs::msg::VaVehicleStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_STA_FB__STRUCT_HPP_
