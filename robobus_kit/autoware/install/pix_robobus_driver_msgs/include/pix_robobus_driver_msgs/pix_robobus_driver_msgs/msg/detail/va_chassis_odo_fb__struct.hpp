// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/VaChassisOdoFb.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisOdoFb __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisOdoFb __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VaChassisOdoFb_
{
  using Type = VaChassisOdoFb_<ContainerAllocator>;

  explicit VaChassisOdoFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_vehicle_odo = 0l;
      this->vcu_vehicle_trip = 0.0f;
      this->vcu_vehicle_remaining_range = 0l;
    }
  }

  explicit VaChassisOdoFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vcu_vehicle_odo = 0l;
      this->vcu_vehicle_trip = 0.0f;
      this->vcu_vehicle_remaining_range = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vcu_vehicle_odo_type =
    int32_t;
  _vcu_vehicle_odo_type vcu_vehicle_odo;
  using _vcu_vehicle_trip_type =
    float;
  _vcu_vehicle_trip_type vcu_vehicle_trip;
  using _vcu_vehicle_remaining_range_type =
    int32_t;
  _vcu_vehicle_remaining_range_type vcu_vehicle_remaining_range;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_odo(
    const int32_t & _arg)
  {
    this->vcu_vehicle_odo = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_trip(
    const float & _arg)
  {
    this->vcu_vehicle_trip = _arg;
    return *this;
  }
  Type & set__vcu_vehicle_remaining_range(
    const int32_t & _arg)
  {
    this->vcu_vehicle_remaining_range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisOdoFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__VaChassisOdoFb
    std::shared_ptr<pix_robobus_driver_msgs::msg::VaChassisOdoFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VaChassisOdoFb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vcu_vehicle_odo != other.vcu_vehicle_odo) {
      return false;
    }
    if (this->vcu_vehicle_trip != other.vcu_vehicle_trip) {
      return false;
    }
    if (this->vcu_vehicle_remaining_range != other.vcu_vehicle_remaining_range) {
      return false;
    }
    return true;
  }
  bool operator!=(const VaChassisOdoFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VaChassisOdoFb_

// alias to use template instance with default allocator
using VaChassisOdoFb =
  pix_robobus_driver_msgs::msg::VaChassisOdoFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__VA_CHASSIS_ODO_FB__STRUCT_HPP_
