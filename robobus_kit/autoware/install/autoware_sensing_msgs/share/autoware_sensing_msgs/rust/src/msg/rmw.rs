#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(msg: *mut ConcatenatedPointCloudInfo) -> bool;
    fn autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConcatenatedPointCloudInfo>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConcatenatedPointCloudInfo>);
    fn autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConcatenatedPointCloudInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<ConcatenatedPointCloudInfo>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds information about a concatenated point cloud that combines multiple source
/// point clouds, including the overall point cloud structure and metadata for each source segment.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConcatenatedPointCloudInfo {
    /// The concatenated point cloud header, where timestamp assignment depends on matching strategy
    pub header: std_msgs::msg::rmw::Header,

    /// Whether concatenation was successful
    pub concatenation_success: bool,

    /// Strategy used for concatenation
    pub matching_strategy: u8,

    /// Raw data of concatenation config, relevant to matching_strategy field.
    pub matching_strategy_config: rosidl_runtime_rs::Sequence<u8>,

    /// Meta information of input point clouds
    pub source_info: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SourcePointCloudInfo>,

}

impl ConcatenatedPointCloudInfo {
    /// Available matching strategies for source point clouds concatenation
    /// Assigns the oldest stamp of the sensor that was concatenated
    pub const STRATEGY_NAIVE: u8 = 0;

    /// Assigns the oldest stamp of the sensor that was concatenated
    pub const STRATEGY_ADVANCED: u8 = 1;

}


impl Default for ConcatenatedPointCloudInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConcatenatedPointCloudInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConcatenatedPointCloudInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConcatenatedPointCloudInfo where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/ConcatenatedPointCloudInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__GnssInsOrientation() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__GnssInsOrientation__init(msg: *mut GnssInsOrientation) -> bool;
    fn autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientation>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientation>);
    fn autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GnssInsOrientation>, out_seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientation>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__GnssInsOrientation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
///
/// Represents a 3D orientation in a global coordinate system.
///
/// ROS uses ENU axes convention (East, North, Up) corresponds to (x, y, z).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GnssInsOrientation {
    /// Quaternion representation of the orientation.
    pub orientation: geometry_msgs::msg::rmw::Quaternion,

    /// Root mean square error of the rotation
    /// (x, y, z) axes corresponding to (roll, pitch, yaw)
    pub rmse_rotation_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rmse_rotation_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rmse_rotation_z: f32,

}



impl Default for GnssInsOrientation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__GnssInsOrientation__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__GnssInsOrientation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GnssInsOrientation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GnssInsOrientation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GnssInsOrientation where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/GnssInsOrientation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__GnssInsOrientation() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__GnssInsOrientationStamped() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(msg: *mut GnssInsOrientationStamped) -> bool;
    fn autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientationStamped>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientationStamped>);
    fn autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GnssInsOrientationStamped>, out_seq: *mut rosidl_runtime_rs::Sequence<GnssInsOrientationStamped>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__GnssInsOrientationStamped
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
///
/// Represents a 3D orientation in a global coordinate system with coordinate frame and timestamp.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GnssInsOrientationStamped {
    /// Timestamp this reading was received by the INS sensor
    /// Frame is expected to be of the INS device
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: super::super::msg::rmw::GnssInsOrientation,

}



impl Default for GnssInsOrientationStamped {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__GnssInsOrientationStamped__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__GnssInsOrientationStamped__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GnssInsOrientationStamped {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__GnssInsOrientationStamped__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GnssInsOrientationStamped {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GnssInsOrientationStamped where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/GnssInsOrientationStamped";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__GnssInsOrientationStamped() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarClassification() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__RadarClassification__init(msg: *mut RadarClassification) -> bool;
    fn autoware_sensing_msgs__msg__RadarClassification__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarClassification>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarClassification>);
    fn autoware_sensing_msgs__msg__RadarClassification__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarClassification>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarClassification>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__RadarClassification
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Common autoware classes

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarClassification {

    // This member is not documented.
    #[allow(missing_docs)]
    pub label: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub probability: f32,

}

impl RadarClassification {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CAR: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRUCK: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BUS: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TRAILER: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTORCYCLE: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BICYCLE: u8 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PEDESTRIAN: u8 = 7;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ANIMAL: u8 = 8;

    /// Radar specific classes
    /// Defined as an object that can cause danger to autonomous driving
    pub const HAZARD: u8 = 9;

    /// Defined as an object that can be safely driven over (e.g., leaf)
    pub const OVER_DRIVABLE: u8 = 10;

    /// Defined as an object that can be safely driven under (e.g., overpass)
    pub const UNDER_DRIVABLE: u8 = 11;

}


impl Default for RadarClassification {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__RadarClassification__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__RadarClassification__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarClassification {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarClassification__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarClassification__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarClassification__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarClassification {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarClassification where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/RadarClassification";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarClassification() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarFieldInfo() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__RadarFieldInfo__init(msg: *mut RadarFieldInfo) -> bool;
    fn autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarFieldInfo>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarFieldInfo>);
    fn autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarFieldInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarFieldInfo>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__RadarFieldInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarFieldInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub field_name: std_msgs::msg::rmw::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_value_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_value_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution_available: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub min_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_value: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub resolution: f32,

}



impl Default for RadarFieldInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__RadarFieldInfo__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__RadarFieldInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarFieldInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarFieldInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarFieldInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarFieldInfo where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/RadarFieldInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarFieldInfo() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarInfo() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__RadarInfo__init(msg: *mut RadarInfo) -> bool;
    fn autoware_sensing_msgs__msg__RadarInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__RadarInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>);
    fn autoware_sensing_msgs__msg__RadarInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__RadarInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_fields_info: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RadarFieldInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detection_fields_info: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RadarFieldInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_classes: rosidl_runtime_rs::Sequence<u32>,

    /// absolute or relative dynamics
    pub absolute_dynamics: bool,

}



impl Default for RadarInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__RadarInfo__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__RadarInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarInfo where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/RadarInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarInfo() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarObject() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__RadarObject__init(msg: *mut RadarObject) -> bool;
    fn autoware_sensing_msgs__msg__RadarObject__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarObject>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__RadarObject__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarObject>);
    fn autoware_sensing_msgs__msg__RadarObject__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarObject>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarObject>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__RadarObject
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarObject {

    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub age: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub measurement_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub movement_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: geometry_msgs::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position_covariance: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity_covariance: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration_covariance: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub size_covariance: [f32; 6],


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_rate: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation_rate_std: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub existence_probability: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub classifications: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RadarClassification>,

}

impl RadarObject {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INVALID_COV_VALUE: f32 = -1.0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEASUREMENT_STATUS_INVALID: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEASUREMENT_STATUS_MEASURED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEASUREMENT_STATUS_PREDICTED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEASUREMENT_STATUS_NEW: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MEASUREMENT_STATUS_UNKNOWN: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOVEMENT_STATUS_INVALID: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOVEMENT_STATUS_DYNAMIC: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOVEMENT_STATUS_STATIC: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOVEMENT_STATUS_UNKNOWN: u8 = 3;

}


impl Default for RadarObject {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__RadarObject__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__RadarObject__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarObject {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObject__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObject__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObject__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarObject {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarObject where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/RadarObject";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarObject() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarObjects() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__RadarObjects__init(msg: *mut RadarObjects) -> bool;
    fn autoware_sensing_msgs__msg__RadarObjects__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarObjects>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__RadarObjects__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarObjects>);
    fn autoware_sensing_msgs__msg__RadarObjects__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarObjects>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarObjects>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__RadarObjects
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarObjects {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RadarObject>,

}



impl Default for RadarObjects {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__RadarObjects__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__RadarObjects__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarObjects {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObjects__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObjects__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__RadarObjects__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarObjects {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarObjects where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/RadarObjects";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__RadarObjects() }
  }
}


#[link(name = "autoware_sensing_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__SourcePointCloudInfo() -> *const std::ffi::c_void;
}

#[link(name = "autoware_sensing_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_sensing_msgs__msg__SourcePointCloudInfo__init(msg: *mut SourcePointCloudInfo) -> bool;
    fn autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SourcePointCloudInfo>, size: usize) -> bool;
    fn autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SourcePointCloudInfo>);
    fn autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SourcePointCloudInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<SourcePointCloudInfo>) -> bool;
}

// Corresponds to autoware_sensing_msgs__msg__SourcePointCloudInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds metadata information about a source point cloud segment
/// within a concatenated point cloud, including its spatial boundaries and structural properties.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SourcePointCloudInfo {
    /// Time of sensor data acquisition, and the coordinate frame ID (for 3d points).
    pub header: std_msgs::msg::rmw::Header,

    /// Source topic
    pub topic: rosidl_runtime_rs::String,

    /// Status of the source point cloud
    pub status: u8,

    /// The starting index (inclusive) of the point cloud segment within the concatenated point cloud
    pub idx_begin: u32,

    /// The length of the point cloud segment in the concatenated point cloud
    pub length: u32,

}

impl SourcePointCloudInfo {
    /// Available status codes for source point cloud
    /// Cloud received (may have 0 or more points)
    pub const STATUS_OK: u8 = 0;

    /// Cloud not received due to timeout
    pub const STATUS_TIMEOUT: u8 = 1;

    /// Cloud arrived but was malformed/corrupt
    pub const STATUS_INVALID: u8 = 2;

}


impl Default for SourcePointCloudInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_sensing_msgs__msg__SourcePointCloudInfo__init(&mut msg as *mut _) {
        panic!("Call to autoware_sensing_msgs__msg__SourcePointCloudInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SourcePointCloudInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_sensing_msgs__msg__SourcePointCloudInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SourcePointCloudInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SourcePointCloudInfo where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_sensing_msgs/msg/SourcePointCloudInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_sensing_msgs__msg__SourcePointCloudInfo() }
  }
}


