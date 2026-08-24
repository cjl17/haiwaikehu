// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pix_robobus_driver_msgs:msg/BcmMessage4.idl
// generated code does not contain a copyright notice

#ifndef PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__TRAITS_HPP_
#define PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pix_robobus_driver_msgs/msg/detail/bcm_message4__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pix_robobus_driver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BcmMessage4 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: ltemp
  {
    out << "ltemp: ";
    rosidl_generator_traits::value_to_yaml(msg.ltemp, out);
    out << ", ";
  }

  // member: ntemp
  {
    out << "ntemp: ";
    rosidl_generator_traits::value_to_yaml(msg.ntemp, out);
    out << ", ";
  }

  // member: safe_belt_sta1
  {
    out << "safe_belt_sta1: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta1, out);
    out << ", ";
  }

  // member: safe_belt_sta2
  {
    out << "safe_belt_sta2: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta2, out);
    out << ", ";
  }

  // member: safe_belt_sta3
  {
    out << "safe_belt_sta3: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta3, out);
    out << ", ";
  }

  // member: safe_belt_sta4
  {
    out << "safe_belt_sta4: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta4, out);
    out << ", ";
  }

  // member: safe_belt_sta5
  {
    out << "safe_belt_sta5: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta5, out);
    out << ", ";
  }

  // member: safe_belt_sta6
  {
    out << "safe_belt_sta6: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta6, out);
    out << ", ";
  }

  // member: seat_sta1
  {
    out << "seat_sta1: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta1, out);
    out << ", ";
  }

  // member: seat_sta2
  {
    out << "seat_sta2: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta2, out);
    out << ", ";
  }

  // member: seat_sta3
  {
    out << "seat_sta3: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta3, out);
    out << ", ";
  }

  // member: seat_sta4
  {
    out << "seat_sta4: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta4, out);
    out << ", ";
  }

  // member: seat_sta5
  {
    out << "seat_sta5: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta5, out);
    out << ", ";
  }

  // member: seat_sta6
  {
    out << "seat_sta6: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta6, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BcmMessage4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: ltemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ltemp: ";
    rosidl_generator_traits::value_to_yaml(msg.ltemp, out);
    out << "\n";
  }

  // member: ntemp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ntemp: ";
    rosidl_generator_traits::value_to_yaml(msg.ntemp, out);
    out << "\n";
  }

  // member: safe_belt_sta1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta1: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta1, out);
    out << "\n";
  }

  // member: safe_belt_sta2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta2: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta2, out);
    out << "\n";
  }

  // member: safe_belt_sta3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta3: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta3, out);
    out << "\n";
  }

  // member: safe_belt_sta4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta4: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta4, out);
    out << "\n";
  }

  // member: safe_belt_sta5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta5: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta5, out);
    out << "\n";
  }

  // member: safe_belt_sta6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "safe_belt_sta6: ";
    rosidl_generator_traits::value_to_yaml(msg.safe_belt_sta6, out);
    out << "\n";
  }

  // member: seat_sta1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta1: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta1, out);
    out << "\n";
  }

  // member: seat_sta2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta2: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta2, out);
    out << "\n";
  }

  // member: seat_sta3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta3: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta3, out);
    out << "\n";
  }

  // member: seat_sta4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta4: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta4, out);
    out << "\n";
  }

  // member: seat_sta5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta5: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta5, out);
    out << "\n";
  }

  // member: seat_sta6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seat_sta6: ";
    rosidl_generator_traits::value_to_yaml(msg.seat_sta6, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BcmMessage4 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pix_robobus_driver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pix_robobus_driver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pix_robobus_driver_msgs::msg::BcmMessage4 & msg,
  std::ostream & out, size_t indentation = 0)
{
  pix_robobus_driver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pix_robobus_driver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pix_robobus_driver_msgs::msg::BcmMessage4 & msg)
{
  return pix_robobus_driver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pix_robobus_driver_msgs::msg::BcmMessage4>()
{
  return "pix_robobus_driver_msgs::msg::BcmMessage4";
}

template<>
inline const char * name<pix_robobus_driver_msgs::msg::BcmMessage4>()
{
  return "pix_robobus_driver_msgs/msg/BcmMessage4";
}

template<>
struct has_fixed_size<pix_robobus_driver_msgs::msg::BcmMessage4>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<pix_robobus_driver_msgs::msg::BcmMessage4>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<pix_robobus_driver_msgs::msg::BcmMessage4>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PIX_ROBOBUS_DRIVER_MSGS__MSG__DETAIL__BCM_MESSAGE4__TRAITS_HPP_
