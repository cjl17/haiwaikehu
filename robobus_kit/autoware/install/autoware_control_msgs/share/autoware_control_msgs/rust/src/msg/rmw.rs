#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "autoware_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Control() -> *const std::ffi::c_void;
}

#[link(name = "autoware_control_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_control_msgs__msg__Control__init(msg: *mut Control) -> bool;
    fn autoware_control_msgs__msg__Control__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Control>, size: usize) -> bool;
    fn autoware_control_msgs__msg__Control__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Control>);
    fn autoware_control_msgs__msg__Control__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Control>, out_seq: *mut rosidl_runtime_rs::Sequence<Control>) -> bool;
}

// Corresponds to autoware_control_msgs__msg__Control
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Control message with lateral and longitudinal components

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Control {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::rmw::Time,

    /// Lateral control command
    pub lateral: super::super::msg::rmw::Lateral,

    /// Longitudinal control command
    pub longitudinal: super::super::msg::rmw::Longitudinal,

}



impl Default for Control {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_control_msgs__msg__Control__init(&mut msg as *mut _) {
        panic!("Call to autoware_control_msgs__msg__Control__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Control {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Control__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Control__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Control__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Control {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Control where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_control_msgs/msg/Control";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Control() }
  }
}


#[link(name = "autoware_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__ControlHorizon() -> *const std::ffi::c_void;
}

#[link(name = "autoware_control_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_control_msgs__msg__ControlHorizon__init(msg: *mut ControlHorizon) -> bool;
    fn autoware_control_msgs__msg__ControlHorizon__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlHorizon>, size: usize) -> bool;
    fn autoware_control_msgs__msg__ControlHorizon__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlHorizon>);
    fn autoware_control_msgs__msg__ControlHorizon__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlHorizon>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlHorizon>) -> bool;
}

// Corresponds to autoware_control_msgs__msg__ControlHorizon
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Control messages calculated for a future horizon
///
/// Control messages are ordered from near to far future [0 to N) with time_step_ms increments.
///
/// First element of the array contains the control signals at the control_time of this message.
///
/// The control_time field in each element of the controls array can be ignored.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlHorizon {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Time when controls configuration state is expected to be achieved in
    pub control_time: builtin_interfaces::msg::rmw::Time,

    /// Time difference between consecutive elements of the controls array in milliseconds
    pub time_step_ms: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub controls: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Control>,

}



impl Default for ControlHorizon {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_control_msgs__msg__ControlHorizon__init(&mut msg as *mut _) {
        panic!("Call to autoware_control_msgs__msg__ControlHorizon__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlHorizon {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__ControlHorizon__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__ControlHorizon__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__ControlHorizon__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlHorizon {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlHorizon where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_control_msgs/msg/ControlHorizon";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__ControlHorizon() }
  }
}


#[link(name = "autoware_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Lateral() -> *const std::ffi::c_void;
}

#[link(name = "autoware_control_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_control_msgs__msg__Lateral__init(msg: *mut Lateral) -> bool;
    fn autoware_control_msgs__msg__Lateral__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Lateral>, size: usize) -> bool;
    fn autoware_control_msgs__msg__Lateral__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Lateral>);
    fn autoware_control_msgs__msg__Lateral__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Lateral>, out_seq: *mut rosidl_runtime_rs::Sequence<Lateral>) -> bool;
}

// Corresponds to autoware_control_msgs__msg__Lateral
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Lateral control message for Ackermann-style platforms
///
/// Note regarding tires: If the platform has multiple steering tires, the commands
/// given here are for a virtual tire at the average lateral position of the steering tires.
///
/// Look up Ackermann Bicycle Model for more details
///
/// Positive values represents left inclination (if forward)
/// Negative values represents right inclination (if forward)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Lateral {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::rmw::Time,

    /// Desired angle of the steering tire in rad (radians)
    pub steering_tire_angle: f32,

    /// Desired rate of change of the steering tire angle in rad/s
    pub steering_tire_rotation_rate: f32,

    /// Controller has filled in the steering_tire_rotation_rate value
    pub is_defined_steering_tire_rotation_rate: bool,

}



impl Default for Lateral {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_control_msgs__msg__Lateral__init(&mut msg as *mut _) {
        panic!("Call to autoware_control_msgs__msg__Lateral__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Lateral {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Lateral__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Lateral__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Lateral__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Lateral {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Lateral where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_control_msgs/msg/Lateral";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Lateral() }
  }
}


#[link(name = "autoware_control_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Longitudinal() -> *const std::ffi::c_void;
}

#[link(name = "autoware_control_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_control_msgs__msg__Longitudinal__init(msg: *mut Longitudinal) -> bool;
    fn autoware_control_msgs__msg__Longitudinal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Longitudinal>, size: usize) -> bool;
    fn autoware_control_msgs__msg__Longitudinal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Longitudinal>);
    fn autoware_control_msgs__msg__Longitudinal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Longitudinal>, out_seq: *mut rosidl_runtime_rs::Sequence<Longitudinal>) -> bool;
}

// Corresponds to autoware_control_msgs__msg__Longitudinal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Longitudinal control message
///
/// Values are in the base_link frame in X axis
///
/// Positive values represent forward motion (+X)
/// Negative values represent backward motion (-X)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Longitudinal {
    /// Time this message was created
    pub stamp: builtin_interfaces::msg::rmw::Time,

    /// Time this configuration state is expected to be achieved in (optional)
    pub control_time: builtin_interfaces::msg::rmw::Time,

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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_control_msgs__msg__Longitudinal__init(&mut msg as *mut _) {
        panic!("Call to autoware_control_msgs__msg__Longitudinal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Longitudinal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Longitudinal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Longitudinal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_control_msgs__msg__Longitudinal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Longitudinal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Longitudinal where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_control_msgs/msg/Longitudinal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_control_msgs__msg__Longitudinal() }
  }
}


