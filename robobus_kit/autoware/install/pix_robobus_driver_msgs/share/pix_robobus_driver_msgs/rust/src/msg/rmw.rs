#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVcuSofver() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaVcuSofver__init(msg: *mut VaVcuSofver) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaVcuSofver>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaVcuSofver>);
    fn pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaVcuSofver>, out_seq: *mut rosidl_runtime_rs::Sequence<VaVcuSofver>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaVcuSofver
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVcuSofver {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub version_year: i32,

    /// []
    pub version_month: i32,

    /// []
    pub version_day: i32,

    /// []
    pub version_main: i32,

    /// []
    pub version_sub: i32,

    /// []
    pub version_patch: i32,

}



impl Default for VaVcuSofver {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaVcuSofver__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaVcuSofver__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaVcuSofver {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVcuSofver__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaVcuSofver {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaVcuSofver where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaVcuSofver";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVcuSofver() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcMessage1() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AcMessage1__init(msg: *mut AcMessage1) -> bool;
    fn pix_robobus_driver_msgs__msg__AcMessage1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AcMessage1>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AcMessage1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AcMessage1>);
    fn pix_robobus_driver_msgs__msg__AcMessage1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AcMessage1>, out_seq: *mut rosidl_runtime_rs::Sequence<AcMessage1>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AcMessage1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcMessage1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub defrost_fdk: i32,

    /// []
    pub air_cod_sta: i32,

    /// []
    pub air_cod_gear_sta: i32,

    /// []
    pub air_cod_mod_sta: i32,

    /// [℃] [16|32]
    pub air_cod_temp_sta: i32,

    /// []
    pub in_loop_mod_sta: i32,

}



impl Default for AcMessage1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AcMessage1__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AcMessage1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AcMessage1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AcMessage1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AcMessage1 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AcMessage1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcMessage1() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcMessage2() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AcMessage2__init(msg: *mut AcMessage2) -> bool;
    fn pix_robobus_driver_msgs__msg__AcMessage2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AcMessage2>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AcMessage2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AcMessage2>);
    fn pix_robobus_driver_msgs__msg__AcMessage2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AcMessage2>, out_seq: *mut rosidl_runtime_rs::Sequence<AcMessage2>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AcMessage2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcMessage2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [℃] [-40|255]
    pub fan_temp: i32,

    /// [℃] [-40|255]
    pub ac_out_temp: i32,

    /// [℃] [-40|255]
    pub ac_in_temp: i32,

    /// []
    pub ac_hardware: i32,

    /// []
    pub ac_software: i32,

}



impl Default for AcMessage2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AcMessage2__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AcMessage2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AcMessage2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcMessage2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AcMessage2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AcMessage2 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AcMessage2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcMessage2() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoMessage() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AutoMessage__init(msg: *mut AutoMessage) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AutoMessage>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AutoMessage>);
    fn pix_robobus_driver_msgs__msg__AutoMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AutoMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<AutoMessage>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AutoMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub auto_drive_mode: i32,

    /// []
    pub auto_heartbeat: i32,

}



impl Default for AutoMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AutoMessage__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AutoMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AutoMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AutoMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AutoMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AutoMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoMessage() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp1() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VinResp1__init(msg: *mut VinResp1) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VinResp1>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VinResp1>);
    fn pix_robobus_driver_msgs__msg__VinResp1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VinResp1>, out_seq: *mut rosidl_runtime_rs::Sequence<VinResp1>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VinResp1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vin00: i32,

    /// []
    pub vin01: i32,

    /// []
    pub vin02: i32,

    /// []
    pub vin03: i32,

    /// []
    pub vin04: i32,

    /// []
    pub vin05: i32,

    /// []
    pub vin06: i32,

    /// []
    pub vin07: i32,

}



impl Default for VinResp1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VinResp1__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VinResp1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VinResp1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VinResp1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VinResp1 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VinResp1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp1() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp2() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VinResp2__init(msg: *mut VinResp2) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VinResp2>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VinResp2>);
    fn pix_robobus_driver_msgs__msg__VinResp2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VinResp2>, out_seq: *mut rosidl_runtime_rs::Sequence<VinResp2>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VinResp2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vin08: i32,

    /// []
    pub vin09: i32,

    /// []
    pub vin10: i32,

    /// []
    pub vin11: i32,

    /// []
    pub vin12: i32,

    /// []
    pub vin13: i32,

    /// []
    pub vin14: i32,

    /// []
    pub vin15: i32,

}



impl Default for VinResp2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VinResp2__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VinResp2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VinResp2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VinResp2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VinResp2 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VinResp2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp2() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp3() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VinResp3__init(msg: *mut VinResp3) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp3__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VinResp3>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VinResp3__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VinResp3>);
    fn pix_robobus_driver_msgs__msg__VinResp3__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VinResp3>, out_seq: *mut rosidl_runtime_rs::Sequence<VinResp3>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VinResp3
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VinResp3 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vin16: i32,

}



impl Default for VinResp3 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VinResp3__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VinResp3__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VinResp3 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp3__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp3__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VinResp3__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VinResp3 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VinResp3 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VinResp3";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VinResp3() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VehicleErrcode1() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VehicleErrcode1__init(msg: *mut VehicleErrcode1) -> bool;
    fn pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode1>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode1>);
    fn pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleErrcode1>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode1>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VehicleErrcode1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleErrcode1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub flmc_hardware_fault: bool,

    /// []
    pub flmc_tem_fault: bool,

    /// []
    pub flm_tem_fault: bool,

    /// []
    pub rlmc_hardware_fault: bool,

    /// []
    pub rlmc_tem_fault: bool,

    /// []
    pub rlm_tem_fault: bool,

    /// []
    pub frmc_hardware_fault: bool,

    /// []
    pub frmc_tem_fault: bool,

    /// []
    pub frm_tem_fault: bool,

    /// []
    pub rrmc_hardware_fault: bool,

    /// []
    pub rrmc_tem_fault: bool,

    /// []
    pub rrm_tem_fault: bool,

    /// []
    pub flmc_network_fault: bool,

    /// []
    pub frmc_network_fault: bool,

    /// []
    pub rlmc_network_fault: bool,

    /// []
    pub rrmc_network_fault: bool,

    /// []
    pub fsteer_hardware_fault: bool,

    /// []
    pub rsteer_hardware_fault: bool,

    /// []
    pub fsteer_network_fault: bool,

    /// []
    pub rsteer_network_fault: bool,

    /// []
    pub brake_hardware_fault: bool,

    /// []
    pub brake_high_tem_fault: bool,

    /// []
    pub brake_luid_level_low: bool,

    /// []
    pub brake_network_fault: bool,

    /// []
    pub park_hardware_fault: bool,

    /// []
    pub park_network_fault: bool,

    /// []
    pub rcu_network_fault: bool,

    /// []
    pub rcu_weak_signal: bool,

    /// []
    pub rcu_elec_low_alarm: bool,

    /// []
    pub reserve1: bool,

    /// []
    pub reserve2: bool,

    /// []
    pub bms_network_fault: bool,

    /// []
    pub bms_insulationfault: bool,

    /// []
    pub bms_ocv_cell: bool,

    /// []
    pub bms_odv_cell: bool,

    /// []
    pub bms_ocv_batt: bool,

    /// []
    pub bms_odv_batt: bool,

    /// []
    pub bms_cell_volt_diff: bool,

    /// []
    pub bms_temph: bool,

    /// []
    pub bms_temphl: bool,

    /// []
    pub bms_temph_diff: bool,

    /// []
    pub bms_warchg_overcurrent: bool,

    /// []
    pub bms_soch: bool,

    /// []
    pub bms_socl: bool,

    /// []
    pub bms_time_of_heating_too_long: bool,

    /// []
    pub bms_soc_break: bool,

    /// []
    pub bms_dis_char_over_cur: bool,

    /// []
    pub bms_char_over_cur_slow: bool,

    /// []
    pub bmsfast_char_over_cur: bool,

    /// []
    pub bms_alm_sense_cell: bool,

    /// []
    pub bms_alm_sense_temp: bool,

    /// []
    pub bms_alm_sense_curr: bool,

    /// []
    pub bms_hvil: bool,

    /// []
    pub bms_war_incan_fault: bool,

    /// []
    pub bms_lst_com_withobc: bool,

    /// []
    pub bms_lst_com_with_vcu: bool,

    /// []
    pub bms_precharger_fault: bool,

    /// []
    pub bmspos_relayconglutination: bool,

    /// []
    pub bms_neg_relay_conglutination: bool,

    /// []
    pub vcu_reserve3: bool,

    /// []
    pub vcu_reserve4: bool,

    /// []
    pub dcdc_high_tem_alarm: bool,

    /// []
    pub dcdc_hardware_fault: bool,

    /// []
    pub dcdc_network_fault: bool,

}



impl Default for VehicleErrcode1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VehicleErrcode1__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VehicleErrcode1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleErrcode1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleErrcode1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleErrcode1 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VehicleErrcode1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VehicleErrcode1() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VehicleErrcode2() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VehicleErrcode2__init(msg: *mut VehicleErrcode2) -> bool;
    fn pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode2>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode2>);
    fn pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VehicleErrcode2>, out_seq: *mut rosidl_runtime_rs::Sequence<VehicleErrcode2>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VehicleErrcode2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VehicleErrcode2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub obc_network_fault: bool,

    /// []
    pub obc_hardware_fault: bool,

    /// []
    pub vcu_reserve1: bool,

    /// []
    pub dp_hardware_fault: bool,

    /// []
    pub dp_network_fault: bool,

    /// []
    pub vcu_reserve5: bool,

    /// []
    pub bcm_hardware_fault: bool,

    /// []
    pub bcm_network_fault: bool,

    /// []
    pub vcu_reserve11: bool,

    /// []
    pub dcu_network_fault: bool,

    /// []
    pub dcu_hardware_fault: bool,

    /// []
    pub vcu_reserve17: bool,

    /// []
    pub avas_network_fault: bool,

    /// []
    pub avas_hardware_fault: bool,

    /// []
    pub vcu_reserve18: bool,

    /// []
    pub vcu_reserve19: bool,

    /// []
    pub iis_hardware_fault: bool,

    /// []
    pub iis_network_fault: bool,

    /// []
    pub vcu_reserve20: bool,

    /// []
    pub vcu_reserve26: bool,

    /// []
    pub ac_hardware_fault: bool,

    /// []
    pub ac_network_fault: bool,

    /// []
    pub vcu_reserve32: bool,

    /// []
    pub lv_battery_low_voltage_fault: bool,

    /// []
    pub lv_battery_high_voltage_fault: bool,

}



impl Default for VehicleErrcode2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VehicleErrcode2__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VehicleErrcode2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VehicleErrcode2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VehicleErrcode2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VehicleErrcode2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VehicleErrcode2 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VehicleErrcode2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VehicleErrcode2() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(msg: *mut HistoricalVehiclefailures1) -> bool;
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures1>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures1>);
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HistoricalVehiclefailures1>, out_seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures1>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HistoricalVehiclefailures1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub hflmc_hardware_fault: bool,

    /// []
    pub hflmc_tem_fault: bool,

    /// []
    pub hflm_tem_fault: bool,

    /// []
    pub hrlmc_hardware_fault: bool,

    /// []
    pub hrlmc_tem_fault: bool,

    /// []
    pub hrlm_tem_fault: bool,

    /// []
    pub hfrmc_hardware_fault: bool,

    /// []
    pub hfrmc_tem_fault: bool,

    /// []
    pub hfrm_tem_fault: bool,

    /// []
    pub hrrmc_hardware_fault: bool,

    /// []
    pub hrrmc_tem_fault: bool,

    /// []
    pub hrrm_tem_fault: bool,

    /// []
    pub hflmc_network_fault: bool,

    /// []
    pub hfrmc_network_fault: bool,

    /// []
    pub hrlmc_network_fault: bool,

    /// []
    pub hrrmc_network_fault: bool,

    /// []
    pub hfsteer_hardware_fault: bool,

    /// []
    pub hrsteer_hardware_fault: bool,

    /// []
    pub hfsteer_network_fault: bool,

    /// []
    pub hrsteer_network_fault: bool,

    /// []
    pub hbrake_hardware_fault: bool,

    /// []
    pub hbrake_high_tem_fault: bool,

    /// []
    pub hbrake_luid_level_low: bool,

    /// []
    pub hbrake_network_fault: bool,

    /// []
    pub hpark_hardware_fault: bool,

    /// []
    pub hpark_network_fault: bool,

    /// []
    pub hrcu_network_fault: bool,

    /// []
    pub hrcu_weak_signal: bool,

    /// []
    pub hrcu_elec_low_alarm: bool,

    /// []
    pub hbms_network_fault: bool,

    /// []
    pub hbms_insulationfault: bool,

    /// []
    pub hbms_ocv_cell: bool,

    /// []
    pub hbms_odv_cell: bool,

    /// []
    pub hbms_ocv_batt: bool,

    /// []
    pub hbms_odv_batt: bool,

    /// []
    pub hbms_cell_volt_diff: bool,

    /// []
    pub hbms_temph: bool,

    /// []
    pub hbms_temphl: bool,

    /// []
    pub hbms_temph_diff: bool,

    /// []
    pub hbms_warchg_overcurrent: bool,

    /// []
    pub hbms_soch: bool,

    /// []
    pub hbms_socl: bool,

    /// []
    pub hbms_time_of_heating_too_long: bool,

    /// []
    pub hbms_soc_break: bool,

    /// []
    pub hbms_dis_char_over_cur: bool,

    /// []
    pub hbms_char_over_cur_slow: bool,

    /// []
    pub hbmsfast_char_over_cur: bool,

    /// []
    pub hbms_alm_sense_cell: bool,

    /// []
    pub hbms_alm_sense_temp: bool,

    /// []
    pub hbms_alm_sense_curr: bool,

    /// []
    pub hbms_hvil: bool,

    /// []
    pub hbms_war_incan_fault: bool,

    /// []
    pub hbms_lst_com_withobc: bool,

    /// []
    pub hbms_lst_com_with_vcu: bool,

    /// []
    pub hbms_precharger_fault: bool,

    /// []
    pub hbmspos_relayconglutination: bool,

    /// []
    pub hbms_neg_relay_conglutination: bool,

    /// []
    pub hdcdc_high_tem_alarm: bool,

    /// []
    pub hdcdc_hardware_fault: bool,

    /// []
    pub hdcdc_network_fault: bool,

}



impl Default for HistoricalVehiclefailures1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HistoricalVehiclefailures1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HistoricalVehiclefailures1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HistoricalVehiclefailures1 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/HistoricalVehiclefailures1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures1() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(msg: *mut HistoricalVehiclefailures2) -> bool;
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures2>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures2>);
    fn pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HistoricalVehiclefailures2>, out_seq: *mut rosidl_runtime_rs::Sequence<HistoricalVehiclefailures2>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HistoricalVehiclefailures2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub hobc_network_fault: bool,

    /// []
    pub hobc_hardware_fault: bool,

    /// []
    pub hdp_hardware_fault: bool,

    /// []
    pub hdp_network_fault: bool,

    /// []
    pub hbcm_hardware_fault: bool,

    /// []
    pub hbcm_network_fault: bool,

    /// []
    pub hdcu_network_fault: bool,

    /// []
    pub hdcu_hardware_fault: bool,

    /// []
    pub havas_network_fault: bool,

    /// []
    pub havas_hardware_fault: bool,

    /// []
    pub hlis_hardware_fault: bool,

    /// []
    pub h_iis_network_fault: bool,

    /// []
    pub hac_hardware_fault: bool,

    /// []
    pub hac_network_fault: bool,

    /// []
    pub h_iv_battery_low_voltage_fault: bool,

    /// []
    pub h_iv_battery_high_voltage_fault: bool,

}



impl Default for HistoricalVehiclefailures2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HistoricalVehiclefailures2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HistoricalVehiclefailures2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HistoricalVehiclefailures2 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/HistoricalVehiclefailures2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__HistoricalVehiclefailures2() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaDriveStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaDriveStaFb__init(msg: *mut VaDriveStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaDriveStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaDriveStaFb>);
    fn pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaDriveStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaDriveStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaDriveStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaDriveStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_chassis_driver_en_sta: bool,

    /// []
    pub vcu_chassis_diver_slopover: bool,

    /// []
    pub vcu_chassis_driver_mode_sta: i32,

    /// []
    pub vcu_chassis_gear_fb: i32,

    /// []
    pub vcu_chassis4_wd_mode_fb: i32,

    /// [m/s] [-50|50]
    pub vcu_chassis_speed_fb: f32,

    /// [%] [0|100]
    pub vcu_chassis_throttle_pald_fb: f32,

    /// []
    pub vcu_chassis_throttle_pedal_req_fb: bool,

    /// [m/s2] [-20|20]
    pub vcu_chassis_acceleration_fb: f32,

    /// []
    pub vcu_drive_life: i32,

    /// []
    pub vcu_drive_check_sta: bool,

}



impl Default for VaDriveStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaDriveStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaDriveStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaDriveStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaDriveStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaDriveStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaDriveStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaDriveStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaDriveStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaBrakeStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(msg: *mut VaBrakeStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaBrakeStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaBrakeStaFb>);
    fn pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaBrakeStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaBrakeStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaBrakeStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaBrakeStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_chassis_brake_en_sta: bool,

    /// []
    pub vcu_vehicle_brake_lamp_fb: bool,

    /// []
    pub vcu_chassis_epb_fb: i32,

    /// []
    pub vcu_chassis_brake_communication_lost: bool,

    /// [%] [0|100]
    pub vcu_chassis_brake_padl_fb: f32,

    /// []
    pub vcu_brake_pedal_req_fb: bool,

    /// []
    pub vcu_aeb_en_sta_fb: bool,

    /// []
    pub vcu_aeb_trigger_sta_fb: bool,

    /// [bar] [0|100]
    pub vcu_chassis_brake_pressure_fb: i32,

    /// []
    pub vcu_brake_life: i32,

    /// []
    pub vcu_brake_check_sta: bool,

}



impl Default for VaBrakeStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaBrakeStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaBrakeStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaBrakeStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaBrakeStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaBrakeStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaBrakeStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaBrakeStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaBrakeStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaSteerStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaSteerStaFb__init(msg: *mut VaSteerStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaSteerStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaSteerStaFb>);
    fn pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaSteerStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaSteerStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaSteerStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaSteerStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_chassis_steer_en_sta: bool,

    /// []
    pub vcu_chassis_steer_slopover: bool,

    /// []
    pub vcu_chassis_steer_work_mode: i32,

    /// []
    pub vcu_chassis_steer_mode_fb: i32,

    /// []
    pub vcu_chassis_steer_communication_lost: bool,

    /// [deg] [-500|500]
    pub vcu_chassis_steer_angle_fb: i32,

    /// [deg] [-500|500]
    pub vcu_chassis_steer_angle_rear_fb: i32,

    /// [deg/s] [0|500]
    pub vcu_chassis_steer_angle_speed_fb: f32,

    /// []
    pub vcu_steer_life: i32,

    /// []
    pub vcu_steer_check_sta: bool,

}



impl Default for VaSteerStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaSteerStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaSteerStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaSteerStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaSteerStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaSteerStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaSteerStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaSteerStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaSteerStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(msg: *mut VaVehicleWorkStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleWorkStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleWorkStaFb>);
    fn pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaVehicleWorkStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaVehicleWorkStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleWorkStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_driving_mode_fb: i32,

    /// []
    pub vcu_chassis_power_sta_fb: i32,

    /// []
    pub vcu_chassis_power_dc_sta: i32,

    /// []
    pub vcu_remote_connecte_sta: bool,

    /// []
    pub vcu_acu_connect_sta: bool,

    /// []
    pub vcu_chassis_speed_limited_mode_fb: bool,

    /// []
    pub vcu_chassis_power_limite_sta: bool,

    /// []
    pub vcu_sys_eco_mode: i32,

    /// [m/s] [0|50]
    pub vcu_chassis_speed_limited_val_fb: f32,

    /// [V] [0|25]
    pub vcu_chassis_low_power_volt_sta: f32,

    /// []
    pub vcu_chassis_e_stop_sta_fb: i32,

    /// []
    pub vcu_crash_front_sta: bool,

    /// []
    pub vcu_crash_rear_sta: bool,

    /// []
    pub vcu_crash_left_sta: bool,

    /// []
    pub vcu_crash_right_sta: bool,

    /// []
    pub vcu_life: i32,

    /// []
    pub vcu_check_sum: i32,

}



impl Default for VaVehicleWorkStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaVehicleWorkStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaVehicleWorkStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaVehicleWorkStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaVehicleWorkStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleWorkStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaPowerStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaPowerStaFb__init(msg: *mut VaPowerStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaPowerStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaPowerStaFb>);
    fn pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaPowerStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaPowerStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaPowerStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaPowerStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_chassis_bms_reserved1: i32,

    /// []
    pub vcu_chassis_power_charge_sta: i32,

    /// []
    pub vcu_chassis_power_charge_sock_sta: bool,

    /// [%] [0|100]
    pub vcu_chassis_power_soc_fb: i32,

    /// [V] [0|1000]
    pub vcu_chassis_power_volt_fb: f32,

    /// [A] [-1000|1000]
    pub vcu_chassis_power_curr_fb: f32,

    /// [℃] [-40|80]
    pub vcu_chassis_bms_max_temp: i32,

    /// []
    pub vcu_chassis_bms_reserved2: i32,

}



impl Default for VaPowerStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaPowerStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaPowerStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaPowerStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaPowerStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaPowerStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaPowerStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaPowerStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaPowerStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleStaFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(msg: *mut VaVehicleStaFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleStaFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleStaFb>);
    fn pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaVehicleStaFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaVehicleStaFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleStaFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleStaFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_vehicle_pos_lamp_fb: bool,

    /// []
    pub vcu_vehicle_head_lamp_fb: bool,

    /// []
    pub vcu_vehicle_left_lamp_fb: bool,

    /// []
    pub vcu_vehicle_right_lamp_fb: bool,

    /// []
    pub vcu_vehicle_high_beam_fb: bool,

    /// []
    pub vcu_vehicle_fog_lamp_fb: bool,

    /// []
    pub vcu_vehicle_hazard_war_lamp_fb: bool,

    /// []
    pub vcu_vehicle_body_lamp_fb: bool,

    /// []
    pub vcu_vehicle_read_lamp_fb: bool,

    /// []
    pub acu_vehicle_window_fb: i32,

    /// []
    pub vcu_vehicle_door_sta_fb: i32,

    /// []
    pub vcu_vehicle_wipers_sta_fb: i32,

    /// []
    pub vcu_vehicle_safety_belt1: i32,

    /// []
    pub vcu_vehicle_safety_belt2: i32,

    /// []
    pub vcu_vehicle_safety_belt3: i32,

    /// []
    pub vcu_vehicle_safety_belt4: i32,

    /// []
    pub vcu_vehicle_safety_belt5: i32,

    /// []
    pub vcu_vehicle_safety_belt6: i32,

    /// []
    pub vcu_vehicle_reserve_warning: i32,

    /// [Km/h] [0|240]
    pub vcu_vehicle_display_speed: i32,

}



impl Default for VaVehicleStaFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaVehicleStaFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaVehicleStaFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaVehicleStaFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleStaFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaVehicleStaFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaVehicleStaFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaVehicleStaFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleStaFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleFltSta() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(msg: *mut VaVehicleFltSta) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleFltSta>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaVehicleFltSta>);
    fn pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaVehicleFltSta>, out_seq: *mut rosidl_runtime_rs::Sequence<VaVehicleFltSta>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaVehicleFltSta
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaVehicleFltSta {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub vcu_sys_motor_over_temp_sta: bool,

    /// []
    pub vcu_sys_bms_over_temp_sta: bool,

    /// []
    pub vcu_sys_brake_over_temp_sta: bool,

    /// []
    pub vcu_sys_steer_over_temp_sta: bool,

    /// []
    pub vcu_sys_under_volt: bool,

    /// []
    pub vcu_sys_flt: i32,

    /// []
    pub vcu_sys_brake_flt: i32,

    /// []
    pub vcu_sys_parking_flt: i32,

    /// []
    pub vcu_sys_steer_front_flt: i32,

    /// []
    pub vcu_sys_steer_back_flt: i32,

    /// []
    pub vcu_sys_motor_lf_flt: i32,

    /// []
    pub vcu_sys_motor_rf_flt: i32,

    /// []
    pub vcu_sys_motor_lr_flt: i32,

    /// []
    pub vcu_sys_motor_rr_flt: i32,

    /// []
    pub vcu_sys_bms_flt: i32,

    /// []
    pub vcu_sys_dc_flt: i32,

    /// []
    pub vcu_sys_door_flt: i32,

    /// []
    pub vcu_sys_dpm_flt: i32,

    /// []
    pub vcu_sys_bcm_flt: i32,

    /// []
    pub vcu_vehicle_flt_level: i32,

    /// []
    pub vcu_sys_flt_reserve1: i32,

}



impl Default for VaVehicleFltSta {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaVehicleFltSta__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaVehicleFltSta__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaVehicleFltSta {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaVehicleFltSta__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaVehicleFltSta {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaVehicleFltSta where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaVehicleFltSta";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaVehicleFltSta() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__init(msg: *mut VaChassisWheelRpmFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelRpmFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelRpmFb>);
    fn pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaChassisWheelRpmFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelRpmFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelRpmFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_lf: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_rf: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_lr: f32,

    /// [rpm] [-1000|1000]
    pub vcu_chassis_wheel_rpm_rr: f32,

}



impl Default for VaChassisWheelRpmFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaChassisWheelRpmFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelRpmFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaChassisWheelRpmFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaChassisWheelRpmFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelRpmFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisOdoFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaChassisOdoFb__init(msg: *mut VaChassisOdoFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaChassisOdoFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaChassisOdoFb>);
    fn pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaChassisOdoFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaChassisOdoFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaChassisOdoFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisOdoFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [km] [0|16777215]
    pub vcu_vehicle_odo: i32,

    /// [km] [0|167772.15]
    pub vcu_vehicle_trip: f32,

    /// [km] [0|1000]
    pub vcu_vehicle_remaining_range: i32,

}



impl Default for VaChassisOdoFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaChassisOdoFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaChassisOdoFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaChassisOdoFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisOdoFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaChassisOdoFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaChassisOdoFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaChassisOdoFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisOdoFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VcuTransfer() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VcuTransfer__init(msg: *mut VcuTransfer) -> bool;
    fn pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VcuTransfer>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VcuTransfer>);
    fn pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VcuTransfer>, out_seq: *mut rosidl_runtime_rs::Sequence<VcuTransfer>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VcuTransfer
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VcuTransfer {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub spare: bool,

    /// [℃] [-40|215]
    pub ac_out_temp: i32,

    /// [℃] [-40|215]
    pub ac_in_temp: i32,

}



impl Default for VcuTransfer {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VcuTransfer__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VcuTransfer__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VcuTransfer {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VcuTransfer__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VcuTransfer {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VcuTransfer where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VcuTransfer";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VcuTransfer() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init(msg: *mut VaChassisWheelTirePressFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTirePressFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTirePressFb>);
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaChassisWheelTirePressFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTirePressFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelTirePressFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_lf: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_rf: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_lr: f32,

    /// [bar] [0|20]
    pub vcu_chassis_wheel_tire_press_rr: f32,

}



impl Default for VaChassisWheelTirePressFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaChassisWheelTirePressFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelTirePressFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaChassisWheelTirePressFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaChassisWheelTirePressFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelTirePressFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__init(msg: *mut VaChassisWheelAngleFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelAngleFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelAngleFb>);
    fn pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaChassisWheelAngleFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelAngleFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelAngleFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_lf: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_rf: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_lr: f32,

    /// [deg] [-90|90]
    pub vcu_chassis_wheel_angle_rr: f32,

}



impl Default for VaChassisWheelAngleFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaChassisWheelAngleFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelAngleFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaChassisWheelAngleFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaChassisWheelAngleFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelAngleFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__init(msg: *mut VaChassisWheelTorqueFb) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTorqueFb>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTorqueFb>);
    fn pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<VaChassisWheelTorqueFb>, out_seq: *mut rosidl_runtime_rs::Sequence<VaChassisWheelTorqueFb>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VaChassisWheelTorqueFb {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_lf: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_rf: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_lr: f32,

    /// [Nm] [-200|200]
    pub vcu_chassis_torque_rr: f32,

}



impl Default for VaChassisWheelTorqueFb {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for VaChassisWheelTorqueFb {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for VaChassisWheelTorqueFb {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for VaChassisWheelTorqueFb where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/VaChassisWheelTorqueFb";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__VaChassisWheelTorqueFb() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__BcmMessage4() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__BcmMessage4__init(msg: *mut BcmMessage4) -> bool;
    fn pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BcmMessage4>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BcmMessage4>);
    fn pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BcmMessage4>, out_seq: *mut rosidl_runtime_rs::Sequence<BcmMessage4>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__BcmMessage4
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BcmMessage4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [℃] [-40|215]
    pub ltemp: i32,

    /// [℃] [-40|215]
    pub ntemp: i32,

    /// []
    pub safe_belt_sta1: bool,

    /// []
    pub safe_belt_sta2: bool,

    /// []
    pub safe_belt_sta3: bool,

    /// []
    pub safe_belt_sta4: bool,

    /// []
    pub safe_belt_sta5: bool,

    /// []
    pub safe_belt_sta6: bool,

    /// []
    pub seat_sta1: bool,

    /// []
    pub seat_sta2: bool,

    /// []
    pub seat_sta3: bool,

    /// []
    pub seat_sta4: bool,

    /// []
    pub seat_sta5: bool,

    /// []
    pub seat_sta6: bool,

}



impl Default for BcmMessage4 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__BcmMessage4__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__BcmMessage4__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BcmMessage4 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage4__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BcmMessage4 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BcmMessage4 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/BcmMessage4";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__BcmMessage4() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__BcmMessage5() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__BcmMessage5__init(msg: *mut BcmMessage5) -> bool;
    fn pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BcmMessage5>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BcmMessage5>);
    fn pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BcmMessage5>, out_seq: *mut rosidl_runtime_rs::Sequence<BcmMessage5>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__BcmMessage5
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BcmMessage5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub ad_v_vin1: i32,

    /// []
    pub ad_v_vin2: i32,

}



impl Default for BcmMessage5 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__BcmMessage5__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__BcmMessage5__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BcmMessage5 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__BcmMessage5__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BcmMessage5 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BcmMessage5 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/BcmMessage5";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__BcmMessage5() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__DpMessgae4() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__DpMessgae4__init(msg: *mut DpMessgae4) -> bool;
    fn pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DpMessgae4>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DpMessgae4>);
    fn pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DpMessgae4>, out_seq: *mut rosidl_runtime_rs::Sequence<DpMessgae4>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__DpMessgae4
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DpMessgae4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [A] [0|255]
    pub pdu_total_cur: i32,

    /// [V] [0|127.5]
    pub dp_lowbat_vol: f32,

    /// [℃] [-40|215]
    pub pd_temp: i32,

    /// [A] [0|255]
    pub auto_current1: i32,

    /// []
    pub dp_errorcode: i32,

    /// []
    pub on_sta: i32,

    /// [A] [0|255]
    pub auto_current2: i32,

}



impl Default for DpMessgae4 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__DpMessgae4__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__DpMessgae4__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DpMessgae4 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae4__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DpMessgae4 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DpMessgae4 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/DpMessgae4";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__DpMessgae4() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__DpMessgae5() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__DpMessgae5__init(msg: *mut DpMessgae5) -> bool;
    fn pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DpMessgae5>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DpMessgae5>);
    fn pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DpMessgae5>, out_seq: *mut rosidl_runtime_rs::Sequence<DpMessgae5>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__DpMessgae5
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DpMessgae5 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub pwn_red_sta: i32,

    /// []
    pub pwn_green_sta: i32,

    /// []
    pub pwn_blue_sta: i32,

    /// [%] [0|100]
    pub atmospherelightbrightness: i32,

    /// []
    pub vcu_reserve33: bool,

    /// []
    pub vcu_reserve41: bool,

}



impl Default for DpMessgae5 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__DpMessgae5__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__DpMessgae5__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DpMessgae5 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__DpMessgae5__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DpMessgae5 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DpMessgae5 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/DpMessgae5";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__DpMessgae5() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvAebCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvAebCtrl__init(msg: *mut AvAebCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvAebCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvAebCtrl>);
    fn pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvAebCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvAebCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvAebCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvAebCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub acu_aeb_work_sta: i32,

    /// []
    pub acu_aeb_active_request: bool,

    /// []
    pub acu_fcw_active_request: bool,

    /// []
    pub acu_aeb_brake_en: bool,

    /// [%] [0|100]
    pub acu_aeb_brake_pedal_target: i32,

    /// []
    pub acu_aeb_brake_life_sig: i32,

    /// []
    pub acu_check_sum121: i32,

}



impl Default for AvAebCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvAebCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvAebCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvAebCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvAebCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvAebCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvAebCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvAebCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvAebCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvDriveCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvDriveCtrl__init(msg: *mut AvDriveCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvDriveCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvDriveCtrl>);
    fn pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvDriveCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvDriveCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvDriveCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvDriveCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub acu_chassis_driver_en_ctrl: bool,

    /// []
    pub acu_chassis_driver_mode_ctrl: i32,

    /// []
    pub acu_chassis_gear_ctrl: i32,

    /// []
    pub acu_chassis4_wd_mode_ctrl: i32,

    /// [m/s] [0|50]
    pub acu_chassis_speed_ctrl: f32,

    /// [%] [0|100]
    pub acu_chassis_throttle_pdl_target: f32,

    /// []
    pub acu_drive_life_sig: i32,

    /// []
    pub acu_check_sum130: i32,

}



impl Default for AvDriveCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvDriveCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvDriveCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvDriveCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvDriveCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvDriveCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvDriveCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvDriveCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvDriveCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvBrakeCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvBrakeCtrl__init(msg: *mut AvBrakeCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvBrakeCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvBrakeCtrl>);
    fn pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvBrakeCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvBrakeCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvBrakeCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvBrakeCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub acu_chassis_brake_en: bool,

    /// []
    pub acu_chassis_brake_lamp_ctrl: bool,

    /// []
    pub acu_chassis_aeb_ctrl: bool,

    /// [%] [0|100]
    pub acu_chassis_brake_pdl_target: f32,

    /// []
    pub acu_chassis_epb_ctrl: i32,

    /// []
    pub acu_brake_life_sig: i32,

    /// []
    pub acu_check_sum131: i32,

}



impl Default for AvBrakeCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvBrakeCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvBrakeCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvBrakeCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvBrakeCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvBrakeCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvBrakeCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvBrakeCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvBrakeCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvSteerCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvSteerCtrl__init(msg: *mut AvSteerCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvSteerCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvSteerCtrl>);
    fn pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvSteerCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvSteerCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvSteerCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvSteerCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub acu_chassis_steer_en_ctrl: bool,

    /// []
    pub acu_chassis_steer_mode_ctrl: i32,

    /// [deg] [-500|500]
    pub acu_chassis_steer_angle_target: i32,

    /// [deg] [-500|500]
    pub acu_chassis_steer_angle_rear_target: i32,

    /// [deg/s] [0|500]
    pub acu_chassis_steer_angle_speed_ctrl: f32,

    /// []
    pub acu_steer_life_sig: i32,

    /// []
    pub acu_check_sum132: i32,

}



impl Default for AvSteerCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvSteerCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvSteerCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvSteerCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvSteerCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvSteerCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvSteerCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvSteerCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvSteerCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvVehicleCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(msg: *mut AvVehicleCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvVehicleCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvVehicleCtrl>);
    fn pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvVehicleCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvVehicleCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvVehicleCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvVehicleCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub acu_vehicle_pos_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_head_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_left_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_right_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_high_beam_ctrl: bool,

    /// []
    pub acu_vehicle_fog_lamp_ctrl: bool,

    /// []
    pub acu_vehicle_body_light_ctrl: bool,

    /// []
    pub acu_vehicle_read_light_ctrl: bool,

    /// []
    pub acu_vehicle_voice: i32,

    /// []
    pub acu_vehicle_wipers_ctrl: i32,

    /// []
    pub acu_vehicle_door_ctrl: i32,

    /// []
    pub acu_vehicle_window_ctrl: i32,

    /// []
    pub acu_chassis_speed_limite_mode: bool,

    /// []
    pub acu_vehicle_horn_ctrl: bool,

    /// []
    pub acu_vehicle_spray_ctrl: bool,

    /// [m/s] [1|20]
    pub acu_chassis_speed_limite_val: f32,

    /// []
    pub acu_check_sum_en: bool,

}



impl Default for AvVehicleCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvVehicleCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvVehicleCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvVehicleCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvVehicleCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvVehicleCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvVehicleCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvVehicleCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvVehicleCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__init(msg: *mut AvWheelTorqueCtrl) -> bool;
    fn pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AvWheelTorqueCtrl>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AvWheelTorqueCtrl>);
    fn pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AvWheelTorqueCtrl>, out_seq: *mut rosidl_runtime_rs::Sequence<AvWheelTorqueCtrl>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AvWheelTorqueCtrl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [Nm] [-200|200]
    pub acu_motor_torque_lf_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_rf_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_lr_ctrl: f32,

    /// [Nm] [-200|200]
    pub acu_motor_torque_rr_ctrl: f32,

}



impl Default for AvWheelTorqueCtrl {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AvWheelTorqueCtrl {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AvWheelTorqueCtrl {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AvWheelTorqueCtrl where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AvWheelTorqueCtrl";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AvWheelTorqueCtrl() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__RemoteMessage() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__RemoteMessage__init(msg: *mut RemoteMessage) -> bool;
    fn pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RemoteMessage>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RemoteMessage>);
    fn pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RemoteMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RemoteMessage>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__RemoteMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RemoteMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub remote_drive_mode: i32,

    /// []
    pub remote_heartbeat: i32,

}



impl Default for RemoteMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__RemoteMessage__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__RemoteMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RemoteMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__RemoteMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RemoteMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RemoteMessage where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/RemoteMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__RemoteMessage() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcuSysTime() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AcuSysTime__init(msg: *mut AcuSysTime) -> bool;
    fn pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AcuSysTime>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AcuSysTime>);
    fn pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AcuSysTime>, out_seq: *mut rosidl_runtime_rs::Sequence<AcuSysTime>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AcuSysTime
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AcuSysTime {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// [Y] [0|153]
    pub sys_time_year: i32,

    /// [M] [0|18]
    pub sys_time_month: i32,

    /// [D] [0|49]
    pub sys_time_day: i32,

    /// [h] [0|36]
    pub sys_time_hour: i32,

    /// [m] [0|96]
    pub sys_time_minute: i32,

    /// [s] [0|96]
    pub sys_time_second: i32,

}



impl Default for AcuSysTime {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AcuSysTime__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AcuSysTime__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AcuSysTime {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AcuSysTime__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AcuSysTime {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AcuSysTime where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AcuSysTime";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AcuSysTime() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoVcuMessage1() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage1__init(msg: *mut AutoVcuMessage1) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage1>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage1>);
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AutoVcuMessage1>, out_seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage1>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AutoVcuMessage1
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoVcuMessage1 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub defrost_ctrl: i32,

    /// []
    pub air_cod_ctrl: i32,

    /// []
    pub air_cod_gear_ctrl: i32,

    /// []
    pub air_cod_mod_ctrl: i32,

    /// [℃] [16|32]
    pub air_cod_temp_ctrl: i32,

    /// []
    pub in_loop_mod_ctrl: i32,

}



impl Default for AutoVcuMessage1 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AutoVcuMessage1__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AutoVcuMessage1__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AutoVcuMessage1 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage1__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AutoVcuMessage1 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AutoVcuMessage1 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AutoVcuMessage1";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoVcuMessage1() }
  }
}


#[link(name = "pix_robobus_driver_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoVcuMessage2() -> *const std::ffi::c_void;
}

#[link(name = "pix_robobus_driver_msgs__rosidl_generator_c")]
extern "C" {
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage2__init(msg: *mut AutoVcuMessage2) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage2>, size: usize) -> bool;
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage2>);
    fn pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AutoVcuMessage2>, out_seq: *mut rosidl_runtime_rs::Sequence<AutoVcuMessage2>) -> bool;
}

// Corresponds to pix_robobus_driver_msgs__msg__AutoVcuMessage2
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AutoVcuMessage2 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// []
    pub pwm_red_ctrl: i32,

    /// []
    pub pwm_green_ctrl: i32,

    /// []
    pub pwm_blue_ctrl: i32,

    /// [%] [0|100]
    pub atmospherelightbrightness: i32,

}



impl Default for AutoVcuMessage2 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !pix_robobus_driver_msgs__msg__AutoVcuMessage2__init(&mut msg as *mut _) {
        panic!("Call to pix_robobus_driver_msgs__msg__AutoVcuMessage2__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AutoVcuMessage2 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { pix_robobus_driver_msgs__msg__AutoVcuMessage2__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AutoVcuMessage2 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AutoVcuMessage2 where Self: Sized {
  const TYPE_NAME: &'static str = "pix_robobus_driver_msgs/msg/AutoVcuMessage2";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__pix_robobus_driver_msgs__msg__AutoVcuMessage2() }
  }
}


