// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/HistoricalVehiclefailures2.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HistoricalVehiclefailures2_
{
  using Type = HistoricalVehiclefailures2_<ContainerAllocator>;

  explicit HistoricalVehiclefailures2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hobc_network_fault = false;
      this->hobc_hardware_fault = false;
      this->hdp_hardware_fault = false;
      this->hdp_network_fault = false;
      this->hbcm_hardware_fault = false;
      this->hbcm_network_fault = false;
      this->hdcu_network_fault = false;
      this->hdcu_hardware_fault = false;
      this->havas_network_fault = false;
      this->havas_hardware_fault = false;
      this->hlis_hardware_fault = false;
      this->h_iis_network_fault = false;
      this->hac_hardware_fault = false;
      this->hac_network_fault = false;
      this->h_iv_battery_low_voltage_fault = false;
      this->h_iv_battery_high_voltage_fault = false;
    }
  }

  explicit HistoricalVehiclefailures2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hobc_network_fault = false;
      this->hobc_hardware_fault = false;
      this->hdp_hardware_fault = false;
      this->hdp_network_fault = false;
      this->hbcm_hardware_fault = false;
      this->hbcm_network_fault = false;
      this->hdcu_network_fault = false;
      this->hdcu_hardware_fault = false;
      this->havas_network_fault = false;
      this->havas_hardware_fault = false;
      this->hlis_hardware_fault = false;
      this->h_iis_network_fault = false;
      this->hac_hardware_fault = false;
      this->hac_network_fault = false;
      this->h_iv_battery_low_voltage_fault = false;
      this->h_iv_battery_high_voltage_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _hobc_network_fault_type =
    bool;
  _hobc_network_fault_type hobc_network_fault;
  using _hobc_hardware_fault_type =
    bool;
  _hobc_hardware_fault_type hobc_hardware_fault;
  using _hdp_hardware_fault_type =
    bool;
  _hdp_hardware_fault_type hdp_hardware_fault;
  using _hdp_network_fault_type =
    bool;
  _hdp_network_fault_type hdp_network_fault;
  using _hbcm_hardware_fault_type =
    bool;
  _hbcm_hardware_fault_type hbcm_hardware_fault;
  using _hbcm_network_fault_type =
    bool;
  _hbcm_network_fault_type hbcm_network_fault;
  using _hdcu_network_fault_type =
    bool;
  _hdcu_network_fault_type hdcu_network_fault;
  using _hdcu_hardware_fault_type =
    bool;
  _hdcu_hardware_fault_type hdcu_hardware_fault;
  using _havas_network_fault_type =
    bool;
  _havas_network_fault_type havas_network_fault;
  using _havas_hardware_fault_type =
    bool;
  _havas_hardware_fault_type havas_hardware_fault;
  using _hlis_hardware_fault_type =
    bool;
  _hlis_hardware_fault_type hlis_hardware_fault;
  using _h_iis_network_fault_type =
    bool;
  _h_iis_network_fault_type h_iis_network_fault;
  using _hac_hardware_fault_type =
    bool;
  _hac_hardware_fault_type hac_hardware_fault;
  using _hac_network_fault_type =
    bool;
  _hac_network_fault_type hac_network_fault;
  using _h_iv_battery_low_voltage_fault_type =
    bool;
  _h_iv_battery_low_voltage_fault_type h_iv_battery_low_voltage_fault;
  using _h_iv_battery_high_voltage_fault_type =
    bool;
  _h_iv_battery_high_voltage_fault_type h_iv_battery_high_voltage_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__hobc_network_fault(
    const bool & _arg)
  {
    this->hobc_network_fault = _arg;
    return *this;
  }
  Type & set__hobc_hardware_fault(
    const bool & _arg)
  {
    this->hobc_hardware_fault = _arg;
    return *this;
  }
  Type & set__hdp_hardware_fault(
    const bool & _arg)
  {
    this->hdp_hardware_fault = _arg;
    return *this;
  }
  Type & set__hdp_network_fault(
    const bool & _arg)
  {
    this->hdp_network_fault = _arg;
    return *this;
  }
  Type & set__hbcm_hardware_fault(
    const bool & _arg)
  {
    this->hbcm_hardware_fault = _arg;
    return *this;
  }
  Type & set__hbcm_network_fault(
    const bool & _arg)
  {
    this->hbcm_network_fault = _arg;
    return *this;
  }
  Type & set__hdcu_network_fault(
    const bool & _arg)
  {
    this->hdcu_network_fault = _arg;
    return *this;
  }
  Type & set__hdcu_hardware_fault(
    const bool & _arg)
  {
    this->hdcu_hardware_fault = _arg;
    return *this;
  }
  Type & set__havas_network_fault(
    const bool & _arg)
  {
    this->havas_network_fault = _arg;
    return *this;
  }
  Type & set__havas_hardware_fault(
    const bool & _arg)
  {
    this->havas_hardware_fault = _arg;
    return *this;
  }
  Type & set__hlis_hardware_fault(
    const bool & _arg)
  {
    this->hlis_hardware_fault = _arg;
    return *this;
  }
  Type & set__h_iis_network_fault(
    const bool & _arg)
  {
    this->h_iis_network_fault = _arg;
    return *this;
  }
  Type & set__hac_hardware_fault(
    const bool & _arg)
  {
    this->hac_hardware_fault = _arg;
    return *this;
  }
  Type & set__hac_network_fault(
    const bool & _arg)
  {
    this->hac_network_fault = _arg;
    return *this;
  }
  Type & set__h_iv_battery_low_voltage_fault(
    const bool & _arg)
  {
    this->h_iv_battery_low_voltage_fault = _arg;
    return *this;
  }
  Type & set__h_iv_battery_high_voltage_fault(
    const bool & _arg)
  {
    this->h_iv_battery_high_voltage_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2
    std::shared_ptr<pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HistoricalVehiclefailures2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->hobc_network_fault != other.hobc_network_fault) {
      return false;
    }
    if (this->hobc_hardware_fault != other.hobc_hardware_fault) {
      return false;
    }
    if (this->hdp_hardware_fault != other.hdp_hardware_fault) {
      return false;
    }
    if (this->hdp_network_fault != other.hdp_network_fault) {
      return false;
    }
    if (this->hbcm_hardware_fault != other.hbcm_hardware_fault) {
      return false;
    }
    if (this->hbcm_network_fault != other.hbcm_network_fault) {
      return false;
    }
    if (this->hdcu_network_fault != other.hdcu_network_fault) {
      return false;
    }
    if (this->hdcu_hardware_fault != other.hdcu_hardware_fault) {
      return false;
    }
    if (this->havas_network_fault != other.havas_network_fault) {
      return false;
    }
    if (this->havas_hardware_fault != other.havas_hardware_fault) {
      return false;
    }
    if (this->hlis_hardware_fault != other.hlis_hardware_fault) {
      return false;
    }
    if (this->h_iis_network_fault != other.h_iis_network_fault) {
      return false;
    }
    if (this->hac_hardware_fault != other.hac_hardware_fault) {
      return false;
    }
    if (this->hac_network_fault != other.hac_network_fault) {
      return false;
    }
    if (this->h_iv_battery_low_voltage_fault != other.h_iv_battery_low_voltage_fault) {
      return false;
    }
    if (this->h_iv_battery_high_voltage_fault != other.h_iv_battery_high_voltage_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const HistoricalVehiclefailures2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HistoricalVehiclefailures2_

// alias to use template instance with default allocator
using HistoricalVehiclefailures2 =
  pix_robobus_driver_msgs::msg::HistoricalVehiclefailures2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__HISTORICAL_VEHICLEFAILURES2__STRUCT_HPP_
