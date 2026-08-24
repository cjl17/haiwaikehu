// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pix_robobus_driver_msgs:msg/AvVehicleCtrl.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_HPP_

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
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvVehicleCtrl __attribute__((deprecated))
#else
# define DEPRECATED__pix_robobus_driver_msgs__msg__AvVehicleCtrl __declspec(deprecated)
#endif

namespace pix_robobus_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvVehicleCtrl_
{
  using Type = AvVehicleCtrl_<ContainerAllocator>;

  explicit AvVehicleCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_vehicle_pos_lamp_ctrl = false;
      this->acu_vehicle_head_lamp_ctrl = false;
      this->acu_vehicle_left_lamp_ctrl = false;
      this->acu_vehicle_right_lamp_ctrl = false;
      this->acu_vehicle_high_beam_ctrl = false;
      this->acu_vehicle_fog_lamp_ctrl = false;
      this->acu_vehicle_body_light_ctrl = false;
      this->acu_vehicle_read_light_ctrl = false;
      this->acu_vehicle_voice = 0l;
      this->acu_vehicle_wipers_ctrl = 0l;
      this->acu_vehicle_door_ctrl = 0l;
      this->acu_vehicle_window_ctrl = 0l;
      this->acu_chassis_speed_limite_mode = false;
      this->acu_vehicle_horn_ctrl = false;
      this->acu_vehicle_spray_ctrl = false;
      this->acu_chassis_speed_limite_val = 0.0f;
      this->acu_check_sum_en = false;
    }
  }

  explicit AvVehicleCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acu_vehicle_pos_lamp_ctrl = false;
      this->acu_vehicle_head_lamp_ctrl = false;
      this->acu_vehicle_left_lamp_ctrl = false;
      this->acu_vehicle_right_lamp_ctrl = false;
      this->acu_vehicle_high_beam_ctrl = false;
      this->acu_vehicle_fog_lamp_ctrl = false;
      this->acu_vehicle_body_light_ctrl = false;
      this->acu_vehicle_read_light_ctrl = false;
      this->acu_vehicle_voice = 0l;
      this->acu_vehicle_wipers_ctrl = 0l;
      this->acu_vehicle_door_ctrl = 0l;
      this->acu_vehicle_window_ctrl = 0l;
      this->acu_chassis_speed_limite_mode = false;
      this->acu_vehicle_horn_ctrl = false;
      this->acu_vehicle_spray_ctrl = false;
      this->acu_chassis_speed_limite_val = 0.0f;
      this->acu_check_sum_en = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acu_vehicle_pos_lamp_ctrl_type =
    bool;
  _acu_vehicle_pos_lamp_ctrl_type acu_vehicle_pos_lamp_ctrl;
  using _acu_vehicle_head_lamp_ctrl_type =
    bool;
  _acu_vehicle_head_lamp_ctrl_type acu_vehicle_head_lamp_ctrl;
  using _acu_vehicle_left_lamp_ctrl_type =
    bool;
  _acu_vehicle_left_lamp_ctrl_type acu_vehicle_left_lamp_ctrl;
  using _acu_vehicle_right_lamp_ctrl_type =
    bool;
  _acu_vehicle_right_lamp_ctrl_type acu_vehicle_right_lamp_ctrl;
  using _acu_vehicle_high_beam_ctrl_type =
    bool;
  _acu_vehicle_high_beam_ctrl_type acu_vehicle_high_beam_ctrl;
  using _acu_vehicle_fog_lamp_ctrl_type =
    bool;
  _acu_vehicle_fog_lamp_ctrl_type acu_vehicle_fog_lamp_ctrl;
  using _acu_vehicle_body_light_ctrl_type =
    bool;
  _acu_vehicle_body_light_ctrl_type acu_vehicle_body_light_ctrl;
  using _acu_vehicle_read_light_ctrl_type =
    bool;
  _acu_vehicle_read_light_ctrl_type acu_vehicle_read_light_ctrl;
  using _acu_vehicle_voice_type =
    int32_t;
  _acu_vehicle_voice_type acu_vehicle_voice;
  using _acu_vehicle_wipers_ctrl_type =
    int32_t;
  _acu_vehicle_wipers_ctrl_type acu_vehicle_wipers_ctrl;
  using _acu_vehicle_door_ctrl_type =
    int32_t;
  _acu_vehicle_door_ctrl_type acu_vehicle_door_ctrl;
  using _acu_vehicle_window_ctrl_type =
    int32_t;
  _acu_vehicle_window_ctrl_type acu_vehicle_window_ctrl;
  using _acu_chassis_speed_limite_mode_type =
    bool;
  _acu_chassis_speed_limite_mode_type acu_chassis_speed_limite_mode;
  using _acu_vehicle_horn_ctrl_type =
    bool;
  _acu_vehicle_horn_ctrl_type acu_vehicle_horn_ctrl;
  using _acu_vehicle_spray_ctrl_type =
    bool;
  _acu_vehicle_spray_ctrl_type acu_vehicle_spray_ctrl;
  using _acu_chassis_speed_limite_val_type =
    float;
  _acu_chassis_speed_limite_val_type acu_chassis_speed_limite_val;
  using _acu_check_sum_en_type =
    bool;
  _acu_check_sum_en_type acu_check_sum_en;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acu_vehicle_pos_lamp_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_pos_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_head_lamp_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_head_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_left_lamp_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_left_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_right_lamp_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_right_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_high_beam_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_high_beam_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_fog_lamp_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_fog_lamp_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_body_light_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_body_light_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_read_light_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_read_light_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_voice(
    const int32_t & _arg)
  {
    this->acu_vehicle_voice = _arg;
    return *this;
  }
  Type & set__acu_vehicle_wipers_ctrl(
    const int32_t & _arg)
  {
    this->acu_vehicle_wipers_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_door_ctrl(
    const int32_t & _arg)
  {
    this->acu_vehicle_door_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_window_ctrl(
    const int32_t & _arg)
  {
    this->acu_vehicle_window_ctrl = _arg;
    return *this;
  }
  Type & set__acu_chassis_speed_limite_mode(
    const bool & _arg)
  {
    this->acu_chassis_speed_limite_mode = _arg;
    return *this;
  }
  Type & set__acu_vehicle_horn_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_horn_ctrl = _arg;
    return *this;
  }
  Type & set__acu_vehicle_spray_ctrl(
    const bool & _arg)
  {
    this->acu_vehicle_spray_ctrl = _arg;
    return *this;
  }
  Type & set__acu_chassis_speed_limite_val(
    const float & _arg)
  {
    this->acu_chassis_speed_limite_val = _arg;
    return *this;
  }
  Type & set__acu_check_sum_en(
    const bool & _arg)
  {
    this->acu_check_sum_en = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvVehicleCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pix_robobus_driver_msgs__msg__AvVehicleCtrl
    std::shared_ptr<pix_robobus_driver_msgs::msg::AvVehicleCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvVehicleCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acu_vehicle_pos_lamp_ctrl != other.acu_vehicle_pos_lamp_ctrl) {
      return false;
    }
    if (this->acu_vehicle_head_lamp_ctrl != other.acu_vehicle_head_lamp_ctrl) {
      return false;
    }
    if (this->acu_vehicle_left_lamp_ctrl != other.acu_vehicle_left_lamp_ctrl) {
      return false;
    }
    if (this->acu_vehicle_right_lamp_ctrl != other.acu_vehicle_right_lamp_ctrl) {
      return false;
    }
    if (this->acu_vehicle_high_beam_ctrl != other.acu_vehicle_high_beam_ctrl) {
      return false;
    }
    if (this->acu_vehicle_fog_lamp_ctrl != other.acu_vehicle_fog_lamp_ctrl) {
      return false;
    }
    if (this->acu_vehicle_body_light_ctrl != other.acu_vehicle_body_light_ctrl) {
      return false;
    }
    if (this->acu_vehicle_read_light_ctrl != other.acu_vehicle_read_light_ctrl) {
      return false;
    }
    if (this->acu_vehicle_voice != other.acu_vehicle_voice) {
      return false;
    }
    if (this->acu_vehicle_wipers_ctrl != other.acu_vehicle_wipers_ctrl) {
      return false;
    }
    if (this->acu_vehicle_door_ctrl != other.acu_vehicle_door_ctrl) {
      return false;
    }
    if (this->acu_vehicle_window_ctrl != other.acu_vehicle_window_ctrl) {
      return false;
    }
    if (this->acu_chassis_speed_limite_mode != other.acu_chassis_speed_limite_mode) {
      return false;
    }
    if (this->acu_vehicle_horn_ctrl != other.acu_vehicle_horn_ctrl) {
      return false;
    }
    if (this->acu_vehicle_spray_ctrl != other.acu_vehicle_spray_ctrl) {
      return false;
    }
    if (this->acu_chassis_speed_limite_val != other.acu_chassis_speed_limite_val) {
      return false;
    }
    if (this->acu_check_sum_en != other.acu_check_sum_en) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvVehicleCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvVehicleCtrl_

// alias to use template instance with default allocator
using AvVehicleCtrl =
  pix_robobus_driver_msgs::msg::AvVehicleCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__AV_VEHICLE_CTRL__STRUCT_HPP_
