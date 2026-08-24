#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to autoware_control_msgs__msg__Control
/// Control message with lateral and longitudinal components

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Control {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::Time,

    /// Lateral control command
    pub lateral: super::msg::Lateral,

    /// Longitudinal control command
    pub longitudinal: super::msg::Longitudinal,

}



impl Default for Control {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Control::default())
  }
}

impl rosidl_runtime_rs::Message for Control {
  type RmwMsg = super::msg::rmw::Control;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.control_time)).into_owned(),
        lateral: super::msg::Lateral::into_rmw_message(std::borrow::Cow::Owned(msg.lateral)).into_owned(),
        longitudinal: super::msg::Longitudinal::into_rmw_message(std::borrow::Cow::Owned(msg.longitudinal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control_time)).into_owned(),
        lateral: super::msg::Lateral::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lateral)).into_owned(),
        longitudinal: super::msg::Longitudinal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.longitudinal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      control_time: builtin_interfaces::msg::Time::from_rmw_message(msg.control_time),
      lateral: super::msg::Lateral::from_rmw_message(msg.lateral),
      longitudinal: super::msg::Longitudinal::from_rmw_message(msg.longitudinal),
    }
  }
}


// Corresponds to autoware_control_msgs__msg__ControlHorizon
/// Control messages calculated for a future horizon
///
/// Control messages are ordered from near to far future [0 to N) with time_step_ms increments.
///
/// First element of the array contains the control signals at the control_time of this message.
///
/// The control_time field in each element of the controls array can be ignored.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlHorizon {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::Time,

    /// Time when controls configuration state is expected to be achieved in
    pub control_time: builtin_interfaces::msg::Time,

    /// Time difference between consecutive elements of the controls array in milliseconds
    pub time_step_ms: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controls: Vec<super::msg::Control>,

}



impl Default for ControlHorizon {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlHorizon::default())
  }
}

impl rosidl_runtime_rs::Message for ControlHorizon {
  type RmwMsg = super::msg::rmw::ControlHorizon;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.control_time)).into_owned(),
        time_step_ms: msg.time_step_ms,
        controls: msg.controls
          .into_iter()
          .map(|elem| super::msg::Control::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control_time)).into_owned(),
      time_step_ms: msg.time_step_ms,
        controls: msg.controls
          .iter()
          .map(|elem| super::msg::Control::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      control_time: builtin_interfaces::msg::Time::from_rmw_message(msg.control_time),
      time_step_ms: msg.time_step_ms,
      controls: msg.controls
          .into_iter()
          .map(super::msg::Control::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to autoware_control_msgs__msg__Lateral
/// Lateral control message for Ackermann-style platforms
///
/// Note regarding tires: If the platform has multiple steering tires, the commands
/// given here are for a virtual tire at the average lateral position of the steering tires.
///
/// Look up Ackermann Bicycle Model for more details
///
/// Positive values represents left inclination (if forward)
/// Negative values represents right inclination (if forward)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Lateral {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::Time,

    /// Desired angle of the steering tire in rad (radians)
    pub steering_tire_angle: f32,

    /// Desired rate of change of the steering tire angle in rad/s
    pub steering_tire_rotation_rate: f32,

    /// Controller has filled in the steering_tire_rotation_rate value
    pub is_defined_steering_tire_rotation_rate: bool,

}



impl Default for Lateral {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Lateral::default())
  }
}

impl rosidl_runtime_rs::Message for Lateral {
  type RmwMsg = super::msg::rmw::Lateral;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.control_time)).into_owned(),
        steering_tire_angle: msg.steering_tire_angle,
        steering_tire_rotation_rate: msg.steering_tire_rotation_rate,
        is_defined_steering_tire_rotation_rate: msg.is_defined_steering_tire_rotation_rate,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control_time)).into_owned(),
      steering_tire_angle: msg.steering_tire_angle,
      steering_tire_rotation_rate: msg.steering_tire_rotation_rate,
      is_defined_steering_tire_rotation_rate: msg.is_defined_steering_tire_rotation_rate,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      control_time: builtin_interfaces::msg::Time::from_rmw_message(msg.control_time),
      steering_tire_angle: msg.steering_tire_angle,
      steering_tire_rotation_rate: msg.steering_tire_rotation_rate,
      is_defined_steering_tire_rotation_rate: msg.is_defined_steering_tire_rotation_rate,
    }
  }
}


// Corresponds to autoware_control_msgs__msg__Longitudinal
/// Longitudinal control message
///
/// Values are in the base_link frame in X axis
///
/// Positive values represent forward motion (+X)
/// Negative values represent backward motion (-X)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Longitudinal {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::Time,

    /// Desired vehicle velocity in in m/s
    pub velocity: f32,

    /// Desired vehicle acceleration in m/s²
    pub acceleration: f32,

    /// Desired vehicle jerk in m/s³
    pub jerk: f32,

    /// Controller has filled in the acceleration value
    pub is_defined_acceleration: bool,

    /// Controller has filled in the jerk value
    pub is_defined_jerk: bool,

}



impl Default for Longitudinal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Longitudinal::default())
  }
}

impl rosidl_runtime_rs::Message for Longitudinal {
  type RmwMsg = super::msg::rmw::Longitudinal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.control_time)).into_owned(),
        velocity: msg.velocity,
        acceleration: msg.acceleration,
        jerk: msg.jerk,
        is_defined_acceleration: msg.is_defined_acceleration,
        is_defined_jerk: msg.is_defined_jerk,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        control_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.control_time)).into_owned(),
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      jerk: msg.jerk,
      is_defined_acceleration: msg.is_defined_acceleration,
      is_defined_jerk: msg.is_defined_jerk,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      control_time: builtin_interfaces::msg::Time::from_rmw_message(msg.control_time),
      velocity: msg.velocity,
      acceleration: msg.acceleration,
      jerk: msg.jerk,
      is_defined_acceleration: msg.is_defined_acceleration,
      is_defined_jerk: msg.is_defined_jerk,
    }
  }
}


