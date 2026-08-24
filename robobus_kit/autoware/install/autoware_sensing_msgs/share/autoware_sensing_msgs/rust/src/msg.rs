#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to autoware_sensing_msgs__msg__ConcatenatedPointCloudInfo
/// This message holds information about a concatenated point cloud that combines multiple source
/// point clouds, including the overall point cloud structure and metadata for each source segment.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConcatenatedPointCloudInfo {
    /// The concatenated point cloud header, where timestamp assignment depends on matching strategy
    pub header: std_msgs::msg::Header,

    /// Whether concatenation was successful
    pub concatenation_success: bool,

    /// Strategy used for concatenation
    pub matching_strategy: u8,

    /// Raw data of concatenation config, relevant to matching_strategy field.
    pub matching_strategy_config: Vec<u8>,

    /// Meta information of input point clouds
    pub source_info: Vec<super::msg::SourcePointCloudInfo>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConcatenatedPointCloudInfo::default())
  }
}

impl rosidl_runtime_rs::Message for ConcatenatedPointCloudInfo {
  type RmwMsg = super::msg::rmw::ConcatenatedPointCloudInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        concatenation_success: msg.concatenation_success,
        matching_strategy: msg.matching_strategy,
        matching_strategy_config: msg.matching_strategy_config.into(),
        source_info: msg.source_info
          .into_iter()
          .map(|elem| super::msg::SourcePointCloudInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      concatenation_success: msg.concatenation_success,
      matching_strategy: msg.matching_strategy,
        matching_strategy_config: msg.matching_strategy_config.as_slice().into(),
        source_info: msg.source_info
          .iter()
          .map(|elem| super::msg::SourcePointCloudInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      concatenation_success: msg.concatenation_success,
      matching_strategy: msg.matching_strategy,
      matching_strategy_config: msg.matching_strategy_config
          .into_iter()
          .collect(),
      source_info: msg.source_info
          .into_iter()
          .map(super::msg::SourcePointCloudInfo::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__GnssInsOrientation
/// GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
///
/// Represents a 3D orientation in a global coordinate system.
///
/// ROS uses ENU axes convention (East, North, Up) corresponds to (x, y, z).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GnssInsOrientation {
    /// Quaternion representation of the orientation.
    pub orientation: geometry_msgs::msg::Quaternion,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GnssInsOrientation::default())
  }
}

impl rosidl_runtime_rs::Message for GnssInsOrientation {
  type RmwMsg = super::msg::rmw::GnssInsOrientation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
        rmse_rotation_x: msg.rmse_rotation_x,
        rmse_rotation_y: msg.rmse_rotation_y,
        rmse_rotation_z: msg.rmse_rotation_z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        orientation: geometry_msgs::msg::Quaternion::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      rmse_rotation_x: msg.rmse_rotation_x,
      rmse_rotation_y: msg.rmse_rotation_y,
      rmse_rotation_z: msg.rmse_rotation_z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      orientation: geometry_msgs::msg::Quaternion::from_rmw_message(msg.orientation),
      rmse_rotation_x: msg.rmse_rotation_x,
      rmse_rotation_y: msg.rmse_rotation_y,
      rmse_rotation_z: msg.rmse_rotation_z,
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__GnssInsOrientationStamped
/// GNSS(Global Navigation Satellite System) INS(Inertial Navigation System) orientation message
///
/// Represents a 3D orientation in a global coordinate system with coordinate frame and timestamp.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GnssInsOrientationStamped {
    /// Timestamp this reading was received by the INS sensor
    /// Frame is expected to be of the INS device
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orientation: super::msg::GnssInsOrientation,

}



impl Default for GnssInsOrientationStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GnssInsOrientationStamped::default())
  }
}

impl rosidl_runtime_rs::Message for GnssInsOrientationStamped {
  type RmwMsg = super::msg::rmw::GnssInsOrientationStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        orientation: super::msg::GnssInsOrientation::into_rmw_message(std::borrow::Cow::Owned(msg.orientation)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        orientation: super::msg::GnssInsOrientation::into_rmw_message(std::borrow::Cow::Borrowed(&msg.orientation)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      orientation: super::msg::GnssInsOrientation::from_rmw_message(msg.orientation),
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__RadarClassification
/// Common autoware classes

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarClassification::default())
  }
}

impl rosidl_runtime_rs::Message for RadarClassification {
  type RmwMsg = super::msg::rmw::RadarClassification;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        label: msg.label,
        probability: msg.probability,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      label: msg.label,
      probability: msg.probability,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      label: msg.label,
      probability: msg.probability,
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__RadarFieldInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarFieldInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub field_name: std_msgs::msg::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarFieldInfo::default())
  }
}

impl rosidl_runtime_rs::Message for RadarFieldInfo {
  type RmwMsg = super::msg::rmw::RadarFieldInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        field_name: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.field_name)).into_owned(),
        min_value_available: msg.min_value_available,
        max_value_available: msg.max_value_available,
        resolution_available: msg.resolution_available,
        min_value: msg.min_value,
        max_value: msg.max_value,
        resolution: msg.resolution,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        field_name: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.field_name)).into_owned(),
      min_value_available: msg.min_value_available,
      max_value_available: msg.max_value_available,
      resolution_available: msg.resolution_available,
      min_value: msg.min_value,
      max_value: msg.max_value,
      resolution: msg.resolution,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      field_name: std_msgs::msg::String::from_rmw_message(msg.field_name),
      min_value_available: msg.min_value_available,
      max_value_available: msg.max_value_available,
      resolution_available: msg.resolution_available,
      min_value: msg.min_value,
      max_value: msg.max_value,
      resolution: msg.resolution,
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__RadarInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_fields_info: Vec<super::msg::RadarFieldInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detection_fields_info: Vec<super::msg::RadarFieldInfo>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_classes: Vec<u32>,

    /// absolute or relative dynamics
    pub absolute_dynamics: bool,

}



impl Default for RadarInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarInfo::default())
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = super::msg::rmw::RadarInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        object_fields_info: msg.object_fields_info
          .into_iter()
          .map(|elem| super::msg::RadarFieldInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        detection_fields_info: msg.detection_fields_info
          .into_iter()
          .map(|elem| super::msg::RadarFieldInfo::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        available_classes: msg.available_classes.into(),
        absolute_dynamics: msg.absolute_dynamics,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        object_fields_info: msg.object_fields_info
          .iter()
          .map(|elem| super::msg::RadarFieldInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        detection_fields_info: msg.detection_fields_info
          .iter()
          .map(|elem| super::msg::RadarFieldInfo::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        available_classes: msg.available_classes.as_slice().into(),
      absolute_dynamics: msg.absolute_dynamics,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      object_fields_info: msg.object_fields_info
          .into_iter()
          .map(super::msg::RadarFieldInfo::from_rmw_message)
          .collect(),
      detection_fields_info: msg.detection_fields_info
          .into_iter()
          .map(super::msg::RadarFieldInfo::from_rmw_message)
          .collect(),
      available_classes: msg.available_classes
          .into_iter()
          .collect(),
      absolute_dynamics: msg.absolute_dynamics,
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__RadarObject

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub velocity: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub acceleration: geometry_msgs::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub size: geometry_msgs::msg::Vector3,


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
    pub classifications: Vec<super::msg::RadarClassification>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarObject::default())
  }
}

impl rosidl_runtime_rs::Message for RadarObject {
  type RmwMsg = super::msg::rmw::RadarObject;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        object_id: msg.object_id,
        age: msg.age,
        measurement_status: msg.measurement_status,
        movement_status: msg.movement_status,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.velocity)).into_owned(),
        acceleration: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.acceleration)).into_owned(),
        size: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.size)).into_owned(),
        position_covariance: msg.position_covariance,
        velocity_covariance: msg.velocity_covariance,
        acceleration_covariance: msg.acceleration_covariance,
        size_covariance: msg.size_covariance,
        orientation: msg.orientation,
        orientation_std: msg.orientation_std,
        orientation_rate: msg.orientation_rate,
        orientation_rate_std: msg.orientation_rate_std,
        existence_probability: msg.existence_probability,
        classifications: msg.classifications
          .into_iter()
          .map(|elem| super::msg::RadarClassification::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      object_id: msg.object_id,
      age: msg.age,
      measurement_status: msg.measurement_status,
      movement_status: msg.movement_status,
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
        velocity: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.velocity)).into_owned(),
        acceleration: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.acceleration)).into_owned(),
        size: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.size)).into_owned(),
        position_covariance: msg.position_covariance,
        velocity_covariance: msg.velocity_covariance,
        acceleration_covariance: msg.acceleration_covariance,
        size_covariance: msg.size_covariance,
      orientation: msg.orientation,
      orientation_std: msg.orientation_std,
      orientation_rate: msg.orientation_rate,
      orientation_rate_std: msg.orientation_rate_std,
      existence_probability: msg.existence_probability,
        classifications: msg.classifications
          .iter()
          .map(|elem| super::msg::RadarClassification::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      object_id: msg.object_id,
      age: msg.age,
      measurement_status: msg.measurement_status,
      movement_status: msg.movement_status,
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      velocity: geometry_msgs::msg::Vector3::from_rmw_message(msg.velocity),
      acceleration: geometry_msgs::msg::Vector3::from_rmw_message(msg.acceleration),
      size: geometry_msgs::msg::Vector3::from_rmw_message(msg.size),
      position_covariance: msg.position_covariance,
      velocity_covariance: msg.velocity_covariance,
      acceleration_covariance: msg.acceleration_covariance,
      size_covariance: msg.size_covariance,
      orientation: msg.orientation,
      orientation_std: msg.orientation_std,
      orientation_rate: msg.orientation_rate,
      orientation_rate_std: msg.orientation_rate_std,
      existence_probability: msg.existence_probability,
      classifications: msg.classifications
          .into_iter()
          .map(super::msg::RadarClassification::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__RadarObjects

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarObjects {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: Vec<super::msg::RadarObject>,

}



impl Default for RadarObjects {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarObjects::default())
  }
}

impl rosidl_runtime_rs::Message for RadarObjects {
  type RmwMsg = super::msg::rmw::RadarObjects;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        objects: msg.objects
          .into_iter()
          .map(|elem| super::msg::RadarObject::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        objects: msg.objects
          .iter()
          .map(|elem| super::msg::RadarObject::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      objects: msg.objects
          .into_iter()
          .map(super::msg::RadarObject::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to autoware_sensing_msgs__msg__SourcePointCloudInfo
/// This message holds metadata information about a source point cloud segment
/// within a concatenated point cloud, including its spatial boundaries and structural properties.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SourcePointCloudInfo {
    /// Time of sensor data acquisition, and the coordinate frame ID (for 3d points).
    pub header: std_msgs::msg::Header,

    /// Source topic
    pub topic: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SourcePointCloudInfo::default())
  }
}

impl rosidl_runtime_rs::Message for SourcePointCloudInfo {
  type RmwMsg = super::msg::rmw::SourcePointCloudInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        topic: msg.topic.as_str().into(),
        status: msg.status,
        idx_begin: msg.idx_begin,
        length: msg.length,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        topic: msg.topic.as_str().into(),
      status: msg.status,
      idx_begin: msg.idx_begin,
      length: msg.length,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      topic: msg.topic.to_string(),
      status: msg.status,
      idx_begin: msg.idx_begin,
      length: msg.length,
    }
  }
}


