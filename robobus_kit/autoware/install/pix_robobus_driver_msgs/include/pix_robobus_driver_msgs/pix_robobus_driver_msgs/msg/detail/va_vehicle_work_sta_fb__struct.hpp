// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleWorkStaFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaVehicleWorkStaFb_
{
  using Type = VaVehicleWorkStaFb_<ContainerAllocator>;

  explicit VaVehicleWorkStaFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_driving_mode_fb = 0l;
      this->vcu_chassis_power_sta_fb = 0l;
      this->vcu_chassis_power_dc_sta = 0l;
      this->vcu_remote_connecte_sta = false;
      this->vcu_acu_connect_sta = false;
      this->vcu_chassis_speed_limited_mode_fb = false;
      this->vcu_chassis_power_limite_sta = false;
      this->vcu_sys_eco_mode = 0l;
      this->vcu_chassis_speed_limited_val_fb = 0.0f;
      this->vcu_chassis_low_power_volt_sta = 0.0f;
      this->vcu_chassis_e_stop_sta_fb = 0l;
      this->vcu_crash_front_sta = false;
      this->vcu_crash_rear_sta = false;
      this->vcu_crash_left_sta = false;
      this->vcu_crash_right_sta = false;
      this->vcu_life = 0l;
      this->vcu_check_sum = 0l;
    }
  }

  explicit VaVehicleWorkStaFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_driving_mode_fb = 0l;
      this->vcu_chassis_power_sta_fb = 0l;
      this->vcu_chassis_power_dc_sta = 0l;
      this->vcu_remote_connecte_sta = false;
      this->vcu_acu_connect_sta = false;
      this->vcu_chassis_speed_limited_mode_fb = false;
      this->vcu_chassis_power_limite_sta = false;
      this->vcu_sys_eco_mode = 0l;
      this->vcu_chassis_speed_limited_val_fb = 0.0f;
      this->vcu_chassis_low_power_volt_sta = 0.0f;
      this->vcu_chassis_e_stop_sta_fb = 0l;
      this->vcu_crash_front_sta = false;
      this->vcu_crash_rear_sta = false;
      this->vcu_crash_left_sta = false;
      this->vcu_crash_right_sta = false;
      this->vcu_life = 0l;
      this->vcu_check_sum = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_driving_mode_fb_type =
    int32_t;
  _vcu_driving_mode_fb_type vcu_driving_mode_fb;
  using _vcu_chassis_power_sta_fb_type =
    int32_t;
  _vcu_chassis_power_sta_fb_type vcu_chassis_power_sta_fb;
  using _vcu_chassis_power_dc_sta_type =
    int32_t;
  _vcu_chassis_power_dc_sta_type vcu_chassis_power_dc_sta;
  using _vcu_remote_connecte_sta_type =
    bool;
  _vcu_remote_connecte_sta_type vcu_remote_connecte_sta;
  using _vcu_acu_connect_sta_type =
    bool;
  _vcu_acu_connect_sta_type vcu_acu_connect_sta;
  using _vcu_chassis_speed_limited_mode_fb_type =
    bool;
  _vcu_chassis_speed_limited_mode_fb_type vcu_chassis_speed_limited_mode_fb;
  using _vcu_chassis_power_limite_sta_type =
    bool;
  _vcu_chassis_power_limite_sta_type vcu_chassis_power_limite_sta;
  using _vcu_sys_eco_mode_type =
    int32_t;
  _vcu_sys_eco_mode_type vcu_sys_eco_mode;
  using _vcu_chassis_speed_limited_val_fb_type =
    float;
  _vcu_chassis_speed_limited_val_fb_type vcu_chassis_speed_limited_val_fb;
  using _vcu_chassis_low_power_volt_sta_type =
    float;
  _vcu_chassis_low_power_volt_sta_type vcu_chassis_low_power_volt_sta;
  using _vcu_chassis_e_stop_sta_fb_type =
    int32_t;
  _vcu_chassis_e_stop_sta_fb_type vcu_chassis_e_stop_sta_fb;
  using _vcu_crash_front_sta_type =
    bool;
  _vcu_crash_front_sta_type vcu_crash_front_sta;
  using _vcu_crash_rear_sta_type =
    bool;
  _vcu_crash_rear_sta_type vcu_crash_rear_sta;
  using _vcu_crash_left_sta_type =
    bool;
  _vcu_crash_left_sta_type vcu_crash_left_sta;
  using _vcu_crash_right_sta_type =
    bool;
  _vcu_crash_right_sta_type vcu_crash_right_sta;
  using _vcu_life_type =
    int32_t;
  _vcu_life_type vcu_life;
  using _vcu_check_sum_type =
    int32_t;
  _vcu_check_sum_type vcu_check_sum;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_driving_mode_fb(
    const int32_t & _arg)
  {
    this->vcu_driving_mode_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_sta_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_power_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_dc_sta(
    const int32_t & _arg)
  {
    this->vcu_chassis_power_dc_sta = _arg;
    return *this;
  }
  Type & set__vcu_remote_connecte_sta(
    const bool & _arg)
  {
    this->vcu_remote_connecte_sta = _arg;
    return *this;
  }
  Type & set__vcu_acu_connect_sta(
    const bool & _arg)
  {
    this->vcu_acu_connect_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_speed_limited_mode_fb(
    const bool & _arg)
  {
    this->vcu_chassis_speed_limited_mode_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_power_limite_sta(
    const bool & _arg)
  {
    this->vcu_chassis_power_limite_sta = _arg;
    return *this;
  }
  Type & set__vcu_sys_eco_mode(
    const int32_t & _arg)
  {
    this->vcu_sys_eco_mode = _arg;
    return *this;
  }
  Type & set__vcu_chassis_speed_limited_val_fb(
    const float & _arg)
  {
    this->vcu_chassis_speed_limited_val_fb = _arg;
    return *this;
  }
  Type & set__vcu_chassis_low_power_volt_sta(
    const float & _arg)
  {
    this->vcu_chassis_low_power_volt_sta = _arg;
    return *this;
  }
  Type & set__vcu_chassis_e_stop_sta_fb(
    const int32_t & _arg)
  {
    this->vcu_chassis_e_stop_sta_fb = _arg;
    return *this;
  }
  Type & set__vcu_crash_front_sta(
    const bool & _arg)
  {
    this->vcu_crash_front_sta = _arg;
    return *this;
  }
  Type & set__vcu_crash_rear_sta(
    const bool & _arg)
  {
    this->vcu_crash_rear_sta = _arg;
    return *this;
  }
  Type & set__vcu_crash_left_sta(
    const bool & _arg)
  {
    this->vcu_crash_left_sta = _arg;
    return *this;
  }
  Type & set__vcu_crash_right_sta(
    const bool & _arg)
  {
    this->vcu_crash_right_sta = _arg;
    return *this;
  }
  Type & set__vcu_life(
    const int32_t & _arg)
  {
    this->vcu_life = _arg;
    return *this;
  }
  Type & set__vcu_check_sum(
    const int32_t & _arg)
  {
    this->vcu_check_sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaVehicleWorkStaFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_driving_mode_fb != other.vcu_driving_mode_fb) {
      return false;
    }
    if (this->vcu_chassis_power_sta_fb != other.vcu_chassis_power_sta_fb) {
      return false;
    }
    if (this->vcu_chassis_power_dc_sta != other.vcu_chassis_power_dc_sta) {
      return false;
    }
    if (this->vcu_remote_connecte_sta != other.vcu_remote_connecte_sta) {
      return false;
    }
    if (this->vcu_acu_connect_sta != other.vcu_acu_connect_sta) {
      return false;
    }
    if (this->vcu_chassis_speed_limited_mode_fb != other.vcu_chassis_speed_limited_mode_fb) {
      return false;
    }
    if (this->vcu_chassis_power_limite_sta != other.vcu_chassis_power_limite_sta) {
      return false;
    }
    if (this->vcu_sys_eco_mode != other.vcu_sys_eco_mode) {
      return false;
    }
    if (this->vcu_chassis_speed_limited_val_fb != other.vcu_chassis_speed_limited_val_fb) {
      return false;
    }
    if (this->vcu_chassis_low_power_volt_sta != other.vcu_chassis_low_power_volt_sta) {
      return false;
    }
    if (this->vcu_chassis_e_stop_sta_fb != other.vcu_chassis_e_stop_sta_fb) {
      return false;
    }
    if (this->vcu_crash_front_sta != other.vcu_crash_front_sta) {
      return false;
    }
    if (this->vcu_crash_rear_sta != other.vcu_crash_rear_sta) {
      return false;
    }
    if (this->vcu_crash_left_sta != other.vcu_crash_left_sta) {
      return false;
    }
    if (this->vcu_crash_right_sta != other.vcu_crash_right_sta) {
      return false;
    }
    if (this->vcu_life != other.vcu_life) {
      return false;
    }
    if (this->vcu_check_sum != other.vcu_check_sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaVehicleWorkStaFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaVehicleWorkStaFb_

// alias to use template instance with default allocator
using VaVehicleWorkStaFb =
  pix_robobus_driver_msgs::msg::VaVehicleWorkStaFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_WORK_STA_FB__STRUCT_HPP_
