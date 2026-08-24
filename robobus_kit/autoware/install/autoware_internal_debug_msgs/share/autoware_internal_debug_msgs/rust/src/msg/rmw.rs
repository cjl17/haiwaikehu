#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__BoolStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__BoolStamped__init(msg: *mut BoolStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__BoolStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BoolStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__BoolStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BoolStamped>);
    fn autoware_internal_debug_msgs__msg__BoolStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BoolStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<BoolStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__BoolStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoolStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: bool,

}



impl Default for BoolStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__BoolStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__BoolStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BoolStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__BoolStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__BoolStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__BoolStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BoolStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BoolStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/BoolStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__BoolStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float32Stamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Float32Stamped__init(msg: *mut Float32Stamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float32Stamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float32Stamped>);
    fn autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float32Stamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Float32Stamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Float32Stamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f32,

}



impl Default for Float32Stamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Float32Stamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Float32Stamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float32Stamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32Stamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float32Stamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float32Stamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Float32Stamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float32Stamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float32MultiArrayStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__init(msg: *mut Float32MultiArrayStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArrayStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArrayStamped>);
    fn autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float32MultiArrayStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Float32MultiArrayStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Float32MultiArrayStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::rmw::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f32>,

}



impl Default for Float32MultiArrayStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float32MultiArrayStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float32MultiArrayStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float32MultiArrayStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float32MultiArrayStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Float32MultiArrayStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float32MultiArrayStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float64Stamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Float64Stamped__init(msg: *mut Float64Stamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float64Stamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float64Stamped>);
    fn autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float64Stamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Float64Stamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Float64Stamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f64,

}



impl Default for Float64Stamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Float64Stamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Float64Stamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float64Stamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64Stamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float64Stamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float64Stamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Float64Stamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float64Stamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float64MultiArrayStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__init(msg: *mut Float64MultiArrayStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArrayStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArrayStamped>);
    fn autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Float64MultiArrayStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Float64MultiArrayStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Float64MultiArrayStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::rmw::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for Float64MultiArrayStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Float64MultiArrayStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Float64MultiArrayStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Float64MultiArrayStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Float64MultiArrayStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Float64MultiArrayStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Float64MultiArrayStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int32Stamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Int32Stamped__init(msg: *mut Int32Stamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int32Stamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int32Stamped>);
    fn autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int32Stamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Int32Stamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Int32Stamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for Int32Stamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Int32Stamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Int32Stamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int32Stamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32Stamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int32Stamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int32Stamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Int32Stamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int32Stamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int32MultiArrayStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__init(msg: *mut Int32MultiArrayStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArrayStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArrayStamped>);
    fn autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int32MultiArrayStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Int32MultiArrayStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Int32MultiArrayStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::rmw::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for Int32MultiArrayStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int32MultiArrayStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int32MultiArrayStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int32MultiArrayStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int32MultiArrayStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Int32MultiArrayStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int32MultiArrayStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int64Stamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Int64Stamped__init(msg: *mut Int64Stamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int64Stamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int64Stamped>);
    fn autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int64Stamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Int64Stamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Int64Stamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i64,

}



impl Default for Int64Stamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Int64Stamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Int64Stamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int64Stamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64Stamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int64Stamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int64Stamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Int64Stamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int64Stamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int64MultiArrayStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__init(msg: *mut Int64MultiArrayStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArrayStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArrayStamped>);
    fn autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Int64MultiArrayStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<Int64MultiArrayStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__Int64MultiArrayStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::rmw::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<i64>,

}



impl Default for Int64MultiArrayStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Int64MultiArrayStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__Int64MultiArrayStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Int64MultiArrayStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Int64MultiArrayStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/Int64MultiArrayStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__Int64MultiArrayStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__StringStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__StringStamped__init(msg: *mut StringStamped) -> bool;
    fn autoware_internal_debug_msgs__msg__StringStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<StringStamped>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__StringStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<StringStamped>);
    fn autoware_internal_debug_msgs__msg__StringStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<StringStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<StringStamped>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__StringStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StringStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for StringStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__StringStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__StringStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for StringStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__StringStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__StringStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__StringStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for StringStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for StringStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/StringStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__StringStamped() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ProcessingTimeNode() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__ProcessingTimeNode__init(msg: *mut ProcessingTimeNode) -> bool;
    fn autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeNode>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeNode>);
    fn autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessingTimeNode>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeNode>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__ProcessingTimeNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unique ID of the node

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessingTimeNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

    /// Name of the node
    pub name: rosidl_runtime_rs::String,

    /// Processing time of the node
    pub processing_time: f64,

    /// ID of the parent node, 0 if no parent
    pub parent_id: i32,

    /// Comment
    pub comment: rosidl_runtime_rs::String,

}



impl Default for ProcessingTimeNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__ProcessingTimeNode__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__ProcessingTimeNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessingTimeNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessingTimeNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessingTimeNode where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/ProcessingTimeNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ProcessingTimeNode() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ProcessingTimeTree() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__ProcessingTimeTree__init(msg: *mut ProcessingTimeTree) -> bool;
    fn autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeTree>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeTree>);
    fn autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ProcessingTimeTree>, out_seq: *mut rosidl_runtime_rs::Sequence<ProcessingTimeTree>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__ProcessingTimeTree
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Array of all time nodes

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessingTimeTree {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ProcessingTimeNode>,

}



impl Default for ProcessingTimeTree {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__ProcessingTimeTree__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__ProcessingTimeTree__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ProcessingTimeTree {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ProcessingTimeTree__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ProcessingTimeTree {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ProcessingTimeTree where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/ProcessingTimeTree";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ProcessingTimeTree() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ServiceLog() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__msg__ServiceLog__init(msg: *mut ServiceLog) -> bool;
    fn autoware_internal_debug_msgs__msg__ServiceLog__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ServiceLog>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__msg__ServiceLog__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ServiceLog>);
    fn autoware_internal_debug_msgs__msg__ServiceLog__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ServiceLog>, out_seq: *mut rosidl_runtime_rs::Sequence<ServiceLog>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__msg__ServiceLog
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServiceLog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaml: rosidl_runtime_rs::String,

}

impl ServiceLog {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIENT_REQUEST: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SERVER_REQUEST: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SERVER_RESPONSE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CLIENT_RESPONSE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_UNREADY: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR_TIMEOUT: u8 = 6;

}


impl Default for ServiceLog {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__msg__ServiceLog__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__msg__ServiceLog__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ServiceLog {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ServiceLog__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ServiceLog__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__msg__ServiceLog__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ServiceLog {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ServiceLog where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/msg/ServiceLog";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__msg__ServiceLog() }
  }
}


