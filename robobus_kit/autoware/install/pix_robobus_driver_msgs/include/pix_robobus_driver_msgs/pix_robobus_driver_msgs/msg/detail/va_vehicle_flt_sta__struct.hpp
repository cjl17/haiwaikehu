// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleFltSta __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleFltSta __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaVehicleFltSta_
{
  using Type = VaVehicleFltSta_<ContainerAllocator>;

  explicit VaVehicleFltSta_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_sys_motor_over_temp_sta = false;
      this->vcu_sys_bms_over_temp_sta = false;
      this->vcu_sys_brake_over_temp_sta = false;
      this->vcu_sys_steer_over_temp_sta = false;
      this->vcu_sys_under_volt = false;
      this->vcu_sys_flt = 0l;
      this->vcu_sys_brake_flt = 0l;
      this->vcu_sys_parking_flt = 0l;
      this->vcu_sys_steer_front_flt = 0l;
      this->vcu_sys_steer_back_flt = 0l;
      this->vcu_sys_motor_lf_flt = 0l;
      this->vcu_sys_motor_rf_flt = 0l;
      this->vcu_sys_motor_lr_flt = 0l;
      this->vcu_sys_motor_rr_flt = 0l;
      this->vcu_sys_bms_flt = 0l;
      this->vcu_sys_dc_flt = 0l;
      this->vcu_sys_door_flt = 0l;
      this->vcu_sys_dpm_flt = 0l;
      this->vcu_sys_bcm_flt = 0l;
      this->vcu_vehicle_flt_level = 0l;
      this->vcu_sys_flt_reserve1 = 0l;
    }
  }

  explicit VaVehicleFltSta_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_sys_motor_over_temp_sta = false;
      this->vcu_sys_bms_over_temp_sta = false;
      this->vcu_sys_brake_over_temp_sta = false;
      this->vcu_sys_steer_over_temp_sta = false;
      this->vcu_sys_under_volt = false;
      this->vcu_sys_flt = 0l;
      this->vcu_sys_brake_flt = 0l;
      this->vcu_sys_parking_flt = 0l;
      this->vcu_sys_steer_front_flt = 0l;
      this->vcu_sys_steer_back_flt = 0l;
      this->vcu_sys_motor_lf_flt = 0l;
      this->vcu_sys_motor_rf_flt = 0l;
      this->vcu_sys_motor_lr_flt = 0l;
      this->vcu_sys_motor_rr_flt = 0l;
      this->vcu_sys_bms_flt = 0l;
      this->vcu_sys_dc_flt = 0l;
      this->vcu_sys_door_flt = 0l;
      this->vcu_sys_dpm_flt = 0l;
      this->vcu_sys_bcm_flt = 0l;
      this->vcu_vehicle_flt_level = 0l;
      this->vcu_sys_flt_reserve1 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_sys_motor_over_temp_sta_type =
    bool;
  _vcu_sys_motor_over_temp_sta_type vcu_sys_motor_over_temp_sta;
  using _vcu_sys_bms_over_temp_sta_type =
    bool;
  _vcu_sys_bms_over_temp_sta_type vcu_sys_bms_over_temp_sta;
  using _vcu_sys_brake_over_temp_sta_type =
    bool;
  _vcu_sys_brake_over_temp_sta_type vcu_sys_brake_over_temp_sta;
  using _vcu_sys_steer_over_temp_sta_type =
    bool;
  _vcu_sys_steer_over_temp_sta_type vcu_sys_steer_over_temp_sta;
  using _vcu_sys_under_volt_type =
    bool;
  _vcu_sys_under_volt_type vcu_sys_under_volt;
  using _vcu_sys_flt_type =
    int32_t;
  _vcu_sys_flt_type vcu_sys_flt;
  using _vcu_sys_brake_flt_type =
    int32_t;
  _vcu_sys_brake_flt_type vcu_sys_brake_flt;
  using _vcu_sys_parking_flt_type =
    int32_t;
  _vcu_sys_parking_flt_type vcu_sys_parking_flt;
  using _vcu_sys_steer_front_flt_type =
    int32_t;
  _vcu_sys_steer_front_flt_type vcu_sys_steer_front_flt;
  using _vcu_sys_steer_back_flt_type =
    int32_t;
  _vcu_sys_steer_back_flt_type vcu_sys_steer_back_flt;
  using _vcu_sys_motor_lf_flt_type =
    int32_t;
  _vcu_sys_motor_lf_flt_type vcu_sys_motor_lf_flt;
  using _vcu_sys_motor_rf_flt_type =
    int32_t;
  _vcu_sys_motor_rf_flt_type vcu_sys_motor_rf_flt;
  using _vcu_sys_motor_lr_flt_type =
    int32_t;
  _vcu_sys_motor_lr_flt_type vcu_sys_motor_lr_flt;
  using _vcu_sys_motor_rr_flt_type =
    int32_t;
  _vcu_sys_motor_rr_flt_type vcu_sys_motor_rr_flt;
  using _vcu_sys_bms_flt_type =
    int32_t;
  _vcu_sys_bms_flt_type vcu_sys_bms_flt;
  using _vcu_sys_dc_flt_type =
    int32_t;
  _vcu_sys_dc_flt_type vcu_sys_dc_flt;
  using _vcu_sys_door_flt_type =
    int32_t;
  _vcu_sys_door_flt_type vcu_sys_door_flt;
  using _vcu_sys_dpm_flt_type =
    int32_t;
  _vcu_sys_dpm_flt_type vcu_sys_dpm_flt;
  using _vcu_sys_bcm_flt_type =
    int32_t;
  _vcu_sys_bcm_flt_type vcu_sys_bcm_flt;
  using _vcu_vehicle_flt_level_type =
    int32_t;
  _vcu_vehicle_flt_level_type vcu_vehicle_flt_level;
  using _vcu_sys_flt_reserve1_type =
    int32_t;
  _vcu_sys_flt_reserve1_type vcu_sys_flt_reserve1;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_sys_motor_over_temp_sta(
    const bool & _arg)
  {
    this->vcu_sys_motor_over_temp_sta = _arg;
    return *this;
  }
  Type & set__vcu_sys_bms_over_temp_sta(
    const bool & _arg)
  {
    this->vcu_sys_bms_over_temp_sta = _arg;
    return *this;
  }
  Type & set__vcu_sys_brake_over_temp_sta(
    const bool & _arg)
  {
    this->vcu_sys_brake_over_temp_sta = _arg;
    return *this;
  }
  Type & set__vcu_sys_steer_over_temp_sta(
    const bool & _arg)
  {
    this->vcu_sys_steer_over_temp_sta = _arg;
    return *this;
  }
  Type & set__vcu_sys_under_volt(
    const bool & _arg)
  {
    this->vcu_sys_under_volt = _arg;
    return *this;
  }
  Type & set__vcu_sys_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_brake_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_brake_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_parking_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_parking_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_steer_front_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_steer_front_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_steer_back_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_steer_back_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_motor_lf_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_motor_lf_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_motor_rf_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_motor_rf_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_motor_lr_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_motor_lr_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_motor_rr_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_motor_rr_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_bms_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_bms_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_dc_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_dc_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_door_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_door_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_dpm_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_dpm_flt = _arg;
    return *this;
  }
  Type & set__vcu_sys_bcm_flt(
    const int32_t & _arg)
  {
    this->vcu_sys_bcm_flt = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_flt_level(
    const int32_t & _arg)
  {
    this->vcu_vehicle_flt_level = _arg;
    return *this;
  }
  Type & set__vcu_sys_flt_reserve1(
    const int32_t & _arg)
  {
    this->vcu_sys_flt_reserve1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleFltSta
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaVehicleFltSta
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaVehicleFltSta_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaVehicleFltSta_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_sys_motor_over_temp_sta != other.vcu_sys_motor_over_temp_sta) {
      return false;
    }
    if (this->vcu_sys_bms_over_temp_sta != other.vcu_sys_bms_over_temp_sta) {
      return false;
    }
    if (this->vcu_sys_brake_over_temp_sta != other.vcu_sys_brake_over_temp_sta) {
      return false;
    }
    if (this->vcu_sys_steer_over_temp_sta != other.vcu_sys_steer_over_temp_sta) {
      return false;
    }
    if (this->vcu_sys_under_volt != other.vcu_sys_under_volt) {
      return false;
    }
    if (this->vcu_sys_flt != other.vcu_sys_flt) {
      return false;
    }
    if (this->vcu_sys_brake_flt != other.vcu_sys_brake_flt) {
      return false;
    }
    if (this->vcu_sys_parking_flt != other.vcu_sys_parking_flt) {
      return false;
    }
    if (this->vcu_sys_steer_front_flt != other.vcu_sys_steer_front_flt) {
      return false;
    }
    if (this->vcu_sys_steer_back_flt != other.vcu_sys_steer_back_flt) {
      return false;
    }
    if (this->vcu_sys_motor_lf_flt != other.vcu_sys_motor_lf_flt) {
      return false;
    }
    if (this->vcu_sys_motor_rf_flt != other.vcu_sys_motor_rf_flt) {
      return false;
    }
    if (this->vcu_sys_motor_lr_flt != other.vcu_sys_motor_lr_flt) {
      return false;
    }
    if (this->vcu_sys_motor_rr_flt != other.vcu_sys_motor_rr_flt) {
      return false;
    }
    if (this->vcu_sys_bms_flt != other.vcu_sys_bms_flt) {
      return false;
    }
    if (this->vcu_sys_dc_flt != other.vcu_sys_dc_flt) {
      return false;
    }
    if (this->vcu_sys_door_flt != other.vcu_sys_door_flt) {
      return false;
    }
    if (this->vcu_sys_dpm_flt != other.vcu_sys_dpm_flt) {
      return false;
    }
    if (this->vcu_sys_bcm_flt != other.vcu_sys_bcm_flt) {
      return false;
    }
    if (this->vcu_vehicle_flt_level != other.vcu_vehicle_flt_level) {
      return false;
    }
    if (this->vcu_sys_flt_reserve1 != other.vcu_sys_flt_reserve1) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaVehicleFltSta_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaVehicleFltSta_

// alias to use template instance with default allocator
using VaVehicleFltSta =
  pix_robobus_driver_msgs::msg::VaVehicleFltSta_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_VEHICLE_FLT_STA__STRUCT_HPP_
