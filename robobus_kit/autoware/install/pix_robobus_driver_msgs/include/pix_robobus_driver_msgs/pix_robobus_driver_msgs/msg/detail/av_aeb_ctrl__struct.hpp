// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvAebCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvAebCtrl __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvAebCtrl __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvAebCtrl_
{
  using Type = AvAebCtrl_<ContainerAllocator>;

  explicit AvAebCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_aeb_work_sta = 0l;
      this->acu_aeb_active_request = false;
      this->acu_fcw_active_request = false;
      this->acu_aeb_brake_en = false;
      this->acu_aeb_brake_pedal_target = 0l;
      this->acu_aeb_brake_life_sig = 0l;
      this->acu_check_sum121 = 0l;
    }
  }

  explicit AvAebCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_aeb_work_sta = 0l;
      this->acu_aeb_active_request = false;
      this->acu_fcw_active_request = false;
      this->acu_aeb_brake_en = false;
      this->acu_aeb_brake_pedal_target = 0l;
      this->acu_aeb_brake_life_sig = 0l;
      this->acu_check_sum121 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acu_aeb_work_sta_type =
    int32_t;
  _acu_aeb_work_sta_type acu_aeb_work_sta;
  using _acu_aeb_active_request_type =
    bool;
  _acu_aeb_active_request_type acu_aeb_active_request;
  using _acu_fcw_active_request_type =
    bool;
  _acu_fcw_active_request_type acu_fcw_active_request;
  using _acu_aeb_brake_en_type =
    bool;
  _acu_aeb_brake_en_type acu_aeb_brake_en;
  using _acu_aeb_brake_pedal_target_type =
    int32_t;
  _acu_aeb_brake_pedal_target_type acu_aeb_brake_pedal_target;
  using _acu_aeb_brake_life_sig_type =
    int32_t;
  _acu_aeb_brake_life_sig_type acu_aeb_brake_life_sig;
  using _acu_check_sum121_type =
    int32_t;
  _acu_check_sum121_type acu_check_sum121;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acu_aeb_work_sta(
    const int32_t & _arg)
  {
    this->acu_aeb_work_sta = _arg;
    return *this;
  }
  Type & set__acu_aeb_active_request(
    const bool & _arg)
  {
    this->acu_aeb_active_request = _arg;
    return *this;
  }
  Type & set__acu_fcw_active_request(
    const bool & _arg)
  {
    this->acu_fcw_active_request = _arg;
    return *this;
  }
  Type & set__acu_aeb_brake_en(
    const bool & _arg)
  {
    this->acu_aeb_brake_en = _arg;
    return *this;
  }
  Type & set__acu_aeb_brake_pedal_target(
    const int32_t & _arg)
  {
    this->acu_aeb_brake_pedal_target = _arg;
    return *this;
  }
  Type & set__acu_aeb_brake_life_sig(
    const int32_t & _arg)
  {
    this->acu_aeb_brake_life_sig = _arg;
    return *this;
  }
  Type & set__acu_check_sum121(
    const int32_t & _arg)
  {
    this->acu_check_sum121 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvAebCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvAebCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvAebCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvAebCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acu_aeb_work_sta != other.acu_aeb_work_sta) {
      return false;
    }
    if (this->acu_aeb_active_request != other.acu_aeb_active_request) {
      return false;
    }
    if (this->acu_fcw_active_request != other.acu_fcw_active_request) {
      return false;
    }
    if (this->acu_aeb_brake_en != other.acu_aeb_brake_en) {
      return false;
    }
    if (this->acu_aeb_brake_pedal_target != other.acu_aeb_brake_pedal_target) {
      return false;
    }
    if (this->acu_aeb_brake_life_sig != other.acu_aeb_brake_life_sig) {
      return false;
    }
    if (this->acu_check_sum121 != other.acu_check_sum121) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvAebCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvAebCtrl_

// alias to use template instance with default allocator
using AvAebCtrl =
  pix_robobus_driver_msgs::msg::AvAebCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_AEB_CTRL__STRUCT_HPP_
