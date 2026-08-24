// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VehicleErrcode2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode2 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode2 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleErrcode2_
{
  using Type = VehicleErrcode2_<ContainerAllocator>;

  explicit VehicleErrcode2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obc_network_fault = false;
      this->obc_hardware_fault = false;
      this->vcu_reserve1 = false;
      this->dp_hardware_fault = false;
      this->dp_network_fault = false;
      this->vcu_reserve5 = false;
      this->bcm_hardware_fault = false;
      this->bcm_network_fault = false;
      this->vcu_reserve11 = false;
      this->dcu_network_fault = false;
      this->dcu_hardware_fault = false;
      this->vcu_reserve17 = false;
      this->avas_network_fault = false;
      this->avas_hardware_fault = false;
      this->vcu_reserve18 = false;
      this->vcu_reserve19 = false;
      this->iis_hardware_fault = false;
      this->iis_network_fault = false;
      this->vcu_reserve20 = false;
      this->vcu_reserve26 = false;
      this->ac_hardware_fault = false;
      this->ac_network_fault = false;
      this->vcu_reserve32 = false;
      this->lv_battery_low_voltage_fault = false;
      this->lv_battery_high_voltage_fault = false;
    }
  }

  explicit VehicleErrcode2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obc_network_fault = false;
      this->obc_hardware_fault = false;
      this->vcu_reserve1 = false;
      this->dp_hardware_fault = false;
      this->dp_network_fault = false;
      this->vcu_reserve5 = false;
      this->bcm_hardware_fault = false;
      this->bcm_network_fault = false;
      this->vcu_reserve11 = false;
      this->dcu_network_fault = false;
      this->dcu_hardware_fault = false;
      this->vcu_reserve17 = false;
      this->avas_network_fault = false;
      this->avas_hardware_fault = false;
      this->vcu_reserve18 = false;
      this->vcu_reserve19 = false;
      this->iis_hardware_fault = false;
      this->iis_network_fault = false;
      this->vcu_reserve20 = false;
      this->vcu_reserve26 = false;
      this->ac_hardware_fault = false;
      this->ac_network_fault = false;
      this->vcu_reserve32 = false;
      this->lv_battery_low_voltage_fault = false;
      this->lv_battery_high_voltage_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _obc_network_fault_type =
    bool;
  _obc_network_fault_type obc_network_fault;
  using _obc_hardware_fault_type =
    bool;
  _obc_hardware_fault_type obc_hardware_fault;
  using _vcu_reserve1_type =
    bool;
  _vcu_reserve1_type vcu_reserve1;
  using _dp_hardware_fault_type =
    bool;
  _dp_hardware_fault_type dp_hardware_fault;
  using _dp_network_fault_type =
    bool;
  _dp_network_fault_type dp_network_fault;
  using _vcu_reserve5_type =
    bool;
  _vcu_reserve5_type vcu_reserve5;
  using _bcm_hardware_fault_type =
    bool;
  _bcm_hardware_fault_type bcm_hardware_fault;
  using _bcm_network_fault_type =
    bool;
  _bcm_network_fault_type bcm_network_fault;
  using _vcu_reserve11_type =
    bool;
  _vcu_reserve11_type vcu_reserve11;
  using _dcu_network_fault_type =
    bool;
  _dcu_network_fault_type dcu_network_fault;
  using _dcu_hardware_fault_type =
    bool;
  _dcu_hardware_fault_type dcu_hardware_fault;
  using _vcu_reserve17_type =
    bool;
  _vcu_reserve17_type vcu_reserve17;
  using _avas_network_fault_type =
    bool;
  _avas_network_fault_type avas_network_fault;
  using _avas_hardware_fault_type =
    bool;
  _avas_hardware_fault_type avas_hardware_fault;
  using _vcu_reserve18_type =
    bool;
  _vcu_reserve18_type vcu_reserve18;
  using _vcu_reserve19_type =
    bool;
  _vcu_reserve19_type vcu_reserve19;
  using _iis_hardware_fault_type =
    bool;
  _iis_hardware_fault_type iis_hardware_fault;
  using _iis_network_fault_type =
    bool;
  _iis_network_fault_type iis_network_fault;
  using _vcu_reserve20_type =
    bool;
  _vcu_reserve20_type vcu_reserve20;
  using _vcu_reserve26_type =
    bool;
  _vcu_reserve26_type vcu_reserve26;
  using _ac_hardware_fault_type =
    bool;
  _ac_hardware_fault_type ac_hardware_fault;
  using _ac_network_fault_type =
    bool;
  _ac_network_fault_type ac_network_fault;
  using _vcu_reserve32_type =
    bool;
  _vcu_reserve32_type vcu_reserve32;
  using _lv_battery_low_voltage_fault_type =
    bool;
  _lv_battery_low_voltage_fault_type lv_battery_low_voltage_fault;
  using _lv_battery_high_voltage_fault_type =
    bool;
  _lv_battery_high_voltage_fault_type lv_battery_high_voltage_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__obc_network_fault(
    const bool & _arg)
  {
    this->obc_network_fault = _arg;
    return *this;
  }
  Type & set__obc_hardware_fault(
    const bool & _arg)
  {
    this->obc_hardware_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve1(
    const bool & _arg)
  {
    this->vcu_reserve1 = _arg;
    return *this;
  }
  Type & set__dp_hardware_fault(
    const bool & _arg)
  {
    this->dp_hardware_fault = _arg;
    return *this;
  }
  Type & set__dp_network_fault(
    const bool & _arg)
  {
    this->dp_network_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve5(
    const bool & _arg)
  {
    this->vcu_reserve5 = _arg;
    return *this;
  }
  Type & set__bcm_hardware_fault(
    const bool & _arg)
  {
    this->bcm_hardware_fault = _arg;
    return *this;
  }
  Type & set__bcm_network_fault(
    const bool & _arg)
  {
    this->bcm_network_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve11(
    const bool & _arg)
  {
    this->vcu_reserve11 = _arg;
    return *this;
  }
  Type & set__dcu_network_fault(
    const bool & _arg)
  {
    this->dcu_network_fault = _arg;
    return *this;
  }
  Type & set__dcu_hardware_fault(
    const bool & _arg)
  {
    this->dcu_hardware_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve17(
    const bool & _arg)
  {
    this->vcu_reserve17 = _arg;
    return *this;
  }
  Type & set__avas_network_fault(
    const bool & _arg)
  {
    this->avas_network_fault = _arg;
    return *this;
  }
  Type & set__avas_hardware_fault(
    const bool & _arg)
  {
    this->avas_hardware_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve18(
    const bool & _arg)
  {
    this->vcu_reserve18 = _arg;
    return *this;
  }
  Type & set__vcu_reserve19(
    const bool & _arg)
  {
    this->vcu_reserve19 = _arg;
    return *this;
  }
  Type & set__iis_hardware_fault(
    const bool & _arg)
  {
    this->iis_hardware_fault = _arg;
    return *this;
  }
  Type & set__iis_network_fault(
    const bool & _arg)
  {
    this->iis_network_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve20(
    const bool & _arg)
  {
    this->vcu_reserve20 = _arg;
    return *this;
  }
  Type & set__vcu_reserve26(
    const bool & _arg)
  {
    this->vcu_reserve26 = _arg;
    return *this;
  }
  Type & set__ac_hardware_fault(
    const bool & _arg)
  {
    this->ac_hardware_fault = _arg;
    return *this;
  }
  Type & set__ac_network_fault(
    const bool & _arg)
  {
    this->ac_network_fault = _arg;
    return *this;
  }
  Type & set__vcu_reserve32(
    const bool & _arg)
  {
    this->vcu_reserve32 = _arg;
    return *this;
  }
  Type & set__lv_battery_low_voltage_fault(
    const bool & _arg)
  {
    this->lv_battery_low_voltage_fault = _arg;
    return *this;
  }
  Type & set__lv_battery_high_voltage_fault(
    const bool & _arg)
  {
    this->lv_battery_high_voltage_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode2
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VehicleErrcode2
    std::shared_ptr<pix_robobus_driver_msgs::msg::VehicleErrcode2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleErrcode2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->obc_network_fault != other.obc_network_fault) {
      return false;
    }
    if (this->obc_hardware_fault != other.obc_hardware_fault) {
      return false;
    }
    if (this->vcu_reserve1 != other.vcu_reserve1) {
      return false;
    }
    if (this->dp_hardware_fault != other.dp_hardware_fault) {
      return false;
    }
    if (this->dp_network_fault != other.dp_network_fault) {
      return false;
    }
    if (this->vcu_reserve5 != other.vcu_reserve5) {
      return false;
    }
    if (this->bcm_hardware_fault != other.bcm_hardware_fault) {
      return false;
    }
    if (this->bcm_network_fault != other.bcm_network_fault) {
      return false;
    }
    if (this->vcu_reserve11 != other.vcu_reserve11) {
      return false;
    }
    if (this->dcu_network_fault != other.dcu_network_fault) {
      return false;
    }
    if (this->dcu_hardware_fault != other.dcu_hardware_fault) {
      return false;
    }
    if (this->vcu_reserve17 != other.vcu_reserve17) {
      return false;
    }
    if (this->avas_network_fault != other.avas_network_fault) {
      return false;
    }
    if (this->avas_hardware_fault != other.avas_hardware_fault) {
      return false;
    }
    if (this->vcu_reserve18 != other.vcu_reserve18) {
      return false;
    }
    if (this->vcu_reserve19 != other.vcu_reserve19) {
      return false;
    }
    if (this->iis_hardware_fault != other.iis_hardware_fault) {
      return false;
    }
    if (this->iis_network_fault != other.iis_network_fault) {
      return false;
    }
    if (this->vcu_reserve20 != other.vcu_reserve20) {
      return false;
    }
    if (this->vcu_reserve26 != other.vcu_reserve26) {
      return false;
    }
    if (this->ac_hardware_fault != other.ac_hardware_fault) {
      return false;
    }
    if (this->ac_network_fault != other.ac_network_fault) {
      return false;
    }
    if (this->vcu_reserve32 != other.vcu_reserve32) {
      return false;
    }
    if (this->lv_battery_low_voltage_fault != other.lv_battery_low_voltage_fault) {
      return false;
    }
    if (this->lv_battery_high_voltage_fault != other.lv_battery_high_voltage_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleErrcode2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleErrcode2_

// alias to use template instance with default allocator
using VehicleErrcode2 =
  pix_robobus_driver_msgs::msg::VehicleErrcode2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VEHICLE_ERRCODE2__STRUCT_HPP_
