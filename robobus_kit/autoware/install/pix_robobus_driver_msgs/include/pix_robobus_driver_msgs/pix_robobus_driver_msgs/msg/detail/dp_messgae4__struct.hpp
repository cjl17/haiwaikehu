// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/DpMessgae4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae4 __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae4 __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DpMessgae4_
{
  using Type = DpMessgae4_<ContainerAllocator>;

  explicit DpMessgae4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pdu_total_cur = 0l;
      this->dp_lowbat_vol = 0.0f;
      this->pd_temp = 0l;
      this->auto_current1 = 0l;
      this->dp_errorcode = 0l;
      this->on_sta = 0l;
      this->auto_current2 = 0l;
    }
  }

  explicit DpMessgae4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pdu_total_cur = 0l;
      this->dp_lowbat_vol = 0.0f;
      this->pd_temp = 0l;
      this->auto_current1 = 0l;
      this->dp_errorcode = 0l;
      this->on_sta = 0l;
      this->auto_current2 = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pdu_total_cur_type =
    int32_t;
  _pdu_total_cur_type pdu_total_cur;
  using _dp_lowbat_vol_type =
    float;
  _dp_lowbat_vol_type dp_lowbat_vol;
  using _pd_temp_type =
    int32_t;
  _pd_temp_type pd_temp;
  using _auto_current1_type =
    int32_t;
  _auto_current1_type auto_current1;
  using _dp_errorcode_type =
    int32_t;
  _dp_errorcode_type dp_errorcode;
  using _on_sta_type =
    int32_t;
  _on_sta_type on_sta;
  using _auto_current2_type =
    int32_t;
  _auto_current2_type auto_current2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pdu_total_cur(
    const int32_t & _arg)
  {
    this->pdu_total_cur = _arg;
    return *this;
  }
  Type & set__dp_lowbat_vol(
    const float & _arg)
  {
    this->dp_lowbat_vol = _arg;
    return *this;
  }
  Type & set__pd_temp(
    const int32_t & _arg)
  {
    this->pd_temp = _arg;
    return *this;
  }
  Type & set__auto_current1(
    const int32_t & _arg)
  {
    this->auto_current1 = _arg;
    return *this;
  }
  Type & set__dp_errorcode(
    const int32_t & _arg)
  {
    this->dp_errorcode = _arg;
    return *this;
  }
  Type & set__on_sta(
    const int32_t & _arg)
  {
    this->on_sta = _arg;
    return *this;
  }
  Type & set__auto_current2(
    const int32_t & _arg)
  {
    this->auto_current2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae4
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__DpMessgae4
    std::shared_ptr<pix_robobus_driver_msgs::msg::DpMessgae4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DpMessgae4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pdu_total_cur != other.pdu_total_cur) {
      return false;
    }
    if (this->dp_lowbat_vol != other.dp_lowbat_vol) {
      return false;
    }
    if (this->pd_temp != other.pd_temp) {
      return false;
    }
    if (this->auto_current1 != other.auto_current1) {
      return false;
    }
    if (this->dp_errorcode != other.dp_errorcode) {
      return false;
    }
    if (this->on_sta != other.on_sta) {
      return false;
    }
    if (this->auto_current2 != other.auto_current2) {
      return false;
    }
    return true;
  }
  bool operator!=(const DpMessgae4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DpMessgae4_

// alias to use template instance with default allocator
using DpMessgae4 =
  pix_robobus_driver_msgs::msg::DpMessgae4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__DP_MESSGAE4__STRUCT_HPP_
