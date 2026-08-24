// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from autoware_sensing_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
#define AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "autoware_sensing_msgs/msg/detail/radar_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velocity'
// Member 'acceleration'
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'classifications'
#include "autoware_sensing_msgs/msg/detail/radar_classification__traits.hpp"

namespace autoware_sensing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RadarObject & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_id
  {
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << ", ";
  }

  // member: measurement_status
  {
    out << "measurement_status: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_status, out);
    out << ", ";
  }

  // member: movement_status
  {
    out << "movement_status: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_status, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
    out << ", ";
  }

  // member: position_covariance
  {
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []";
    } else {
      out << "position_covariance: [";
      size_t pending_items = msg.position_covariance.size();
      for (auto item : msg.position_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity_covariance
  {
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []";
    } else {
      out << "velocity_covariance: [";
      size_t pending_items = msg.velocity_covariance.size();
      for (auto item : msg.velocity_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acceleration_covariance
  {
    if (msg.acceleration_covariance.size() == 0) {
      out << "acceleration_covariance: []";
    } else {
      out << "acceleration_covariance: [";
      size_t pending_items = msg.acceleration_covariance.size();
      for (auto item : msg.acceleration_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: size_covariance
  {
    if (msg.size_covariance.size() == 0) {
      out << "size_covariance: []";
    } else {
      out << "size_covariance: [";
      size_t pending_items = msg.size_covariance.size();
      for (auto item : msg.size_covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: orientation_std
  {
    out << "orientation_std: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_std, out);
    out << ", ";
  }

  // member: orientation_rate
  {
    out << "orientation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_rate, out);
    out << ", ";
  }

  // member: orientation_rate_std
  {
    out << "orientation_rate_std: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_rate_std, out);
    out << ", ";
  }

  // member: existence_probability
  {
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << ", ";
  }

  // member: classifications
  {
    if (msg.classifications.size() == 0) {
      out << "classifications: []";
    } else {
      out << "classifications: [";
      size_t pending_items = msg.classifications.size();
      for (auto item : msg.classifications) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_id: ";
    rosidl_generator_traits::value_to_yaml(msg.object_id, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }

  // member: measurement_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_status: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_status, out);
    out << "\n";
  }

  // member: movement_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movement_status: ";
    rosidl_generator_traits::value_to_yaml(msg.movement_status, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }

  // member: position_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_covariance.size() == 0) {
      out << "position_covariance: []\n";
    } else {
      out << "position_covariance:\n";
      for (auto item : msg.position_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity_covariance.size() == 0) {
      out << "velocity_covariance: []\n";
    } else {
      out << "velocity_covariance:\n";
      for (auto item : msg.velocity_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acceleration_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acceleration_covariance.size() == 0) {
      out << "acceleration_covariance: []\n";
    } else {
      out << "acceleration_covariance:\n";
      for (auto item : msg.acceleration_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: size_covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.size_covariance.size() == 0) {
      out << "size_covariance: []\n";
    } else {
      out << "size_covariance:\n";
      for (auto item : msg.size_covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: orientation_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_std: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_std, out);
    out << "\n";
  }

  // member: orientation_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_rate, out);
    out << "\n";
  }

  // member: orientation_rate_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation_rate_std: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation_rate_std, out);
    out << "\n";
  }

  // member: existence_probability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "existence_probability: ";
    rosidl_generator_traits::value_to_yaml(msg.existence_probability, out);
    out << "\n";
  }

  // member: classifications
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.classifications.size() == 0) {
      out << "classifications: []\n";
    } else {
      out << "classifications:\n";
      for (auto item : msg.classifications) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RadarObject & msg, bool use_flow_style = false)
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

}  // namespace autoware_sensing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use autoware_sensing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const autoware_sensing_msgs::msg::RadarObject & msg,
  std::ostream & out, size_t indentation = 0)
{
  autoware_sensing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use autoware_sensing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const autoware_sensing_msgs::msg::RadarObject & msg)
{
  return autoware_sensing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<autoware_sensing_msgs::msg::RadarObject>()
{
  return "autoware_sensing_msgs::msg::RadarObject";
}

template<>
inline const char * name<autoware_sensing_msgs::msg::RadarObject>()
{
  return "autoware_sensing_msgs/msg/RadarObject";
}

template<>
struct has_fixed_size<autoware_sensing_msgs::msg::RadarObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<autoware_sensing_msgs::msg::RadarObject>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<autoware_sensing_msgs::msg::RadarObject>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AUTOWARE_SENSING_MSGS__MSG__DETAIL__RADAR_OBJECT__TRAITS_HPP_
