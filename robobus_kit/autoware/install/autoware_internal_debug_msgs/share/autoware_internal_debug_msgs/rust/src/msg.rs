#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to autoware_internal_debug_msgs__msg__BoolStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoolStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: bool,

}



impl Default for BoolStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoolStamped::default())
  }
}

impl rosidl_runtime_rs::Message for BoolStamped {
  type RmwMsg = super::msg::rmw::BoolStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data,
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Float32Stamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f32,

}



impl Default for Float32Stamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float32Stamped::default())
  }
}

impl rosidl_runtime_rs::Message for Float32Stamped {
  type RmwMsg = super::msg::rmw::Float32Stamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data,
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Float32MultiArrayStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float32MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f32>,

}



impl Default for Float32MultiArrayStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float32MultiArrayStamped::default())
  }
}

impl rosidl_runtime_rs::Message for Float32MultiArrayStamped {
  type RmwMsg = super::msg::rmw::Float32MultiArrayStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      layout: std_msgs::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Float64Stamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: f64,

}



impl Default for Float64Stamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float64Stamped::default())
  }
}

impl rosidl_runtime_rs::Message for Float64Stamped {
  type RmwMsg = super::msg::rmw::Float64Stamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data,
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Float64MultiArrayStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Float64MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

}



impl Default for Float64MultiArrayStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Float64MultiArrayStamped::default())
  }
}

impl rosidl_runtime_rs::Message for Float64MultiArrayStamped {
  type RmwMsg = super::msg::rmw::Float64MultiArrayStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      layout: std_msgs::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Int32Stamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i32,

}



impl Default for Int32Stamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int32Stamped::default())
  }
}

impl rosidl_runtime_rs::Message for Int32Stamped {
  type RmwMsg = super::msg::rmw::Int32Stamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data,
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Int32MultiArrayStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int32MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i32>,

}



impl Default for Int32MultiArrayStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int32MultiArrayStamped::default())
  }
}

impl rosidl_runtime_rs::Message for Int32MultiArrayStamped {
  type RmwMsg = super::msg::rmw::Int32MultiArrayStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      layout: std_msgs::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Int64Stamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64Stamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: i64,

}



impl Default for Int64Stamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int64Stamped::default())
  }
}

impl rosidl_runtime_rs::Message for Int64Stamped {
  type RmwMsg = super::msg::rmw::Int64Stamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      data: msg.data,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data,
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__Int64MultiArrayStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Int64MultiArrayStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub layout: std_msgs::msg::MultiArrayLayout,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<i64>,

}



impl Default for Int64MultiArrayStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Int64MultiArrayStamped::default())
  }
}

impl rosidl_runtime_rs::Message for Int64MultiArrayStamped {
  type RmwMsg = super::msg::rmw::Int64MultiArrayStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Owned(msg.layout)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        layout: std_msgs::msg::MultiArrayLayout::into_rmw_message(std::borrow::Cow::Borrowed(&msg.layout)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      layout: std_msgs::msg::MultiArrayLayout::from_rmw_message(msg.layout),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__StringStamped

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct StringStamped {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: std::string::String,

}



impl Default for StringStamped {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::StringStamped::default())
  }
}

impl rosidl_runtime_rs::Message for StringStamped {
  type RmwMsg = super::msg::rmw::StringStamped;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        data: msg.data.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        data: msg.data.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      data: msg.data.to_string(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__ProcessingTimeNode
/// Unique ID of the node

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessingTimeNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i32,

    /// Name of the node
    pub name: std::string::String,

    /// Processing time of the node
    pub processing_time: f64,

    /// ID of the parent node, 0 if no parent
    pub parent_id: i32,

    /// Comment
    pub comment: std::string::String,

}



impl Default for ProcessingTimeNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProcessingTimeNode::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessingTimeNode {
  type RmwMsg = super::msg::rmw::ProcessingTimeNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        name: msg.name.as_str().into(),
        processing_time: msg.processing_time,
        parent_id: msg.parent_id,
        comment: msg.comment.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        name: msg.name.as_str().into(),
      processing_time: msg.processing_time,
      parent_id: msg.parent_id,
        comment: msg.comment.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      name: msg.name.to_string(),
      processing_time: msg.processing_time,
      parent_id: msg.parent_id,
      comment: msg.comment.to_string(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__ProcessingTimeTree
/// Array of all time nodes

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ProcessingTimeTree {

    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: Vec<super::msg::ProcessingTimeNode>,

}



impl Default for ProcessingTimeTree {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ProcessingTimeTree::default())
  }
}

impl rosidl_runtime_rs::Message for ProcessingTimeTree {
  type RmwMsg = super::msg::rmw::ProcessingTimeTree;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .into_iter()
          .map(|elem| super::msg::ProcessingTimeNode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        nodes: msg.nodes
          .iter()
          .map(|elem| super::msg::ProcessingTimeNode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      nodes: msg.nodes
          .into_iter()
          .map(super::msg::ProcessingTimeNode::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to autoware_internal_debug_msgs__msg__ServiceLog

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ServiceLog {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaml: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ServiceLog::default())
  }
}

impl rosidl_runtime_rs::Message for ServiceLog {
  type RmwMsg = super::msg::rmw::ServiceLog;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        type_: msg.type_,
        name: msg.name.as_str().into(),
        node: msg.node.as_str().into(),
        yaml: msg.yaml.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      type_: msg.type_,
        name: msg.name.as_str().into(),
        node: msg.node.as_str().into(),
        yaml: msg.yaml.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      type_: msg.type_,
      name: msg.name.to_string(),
      node: msg.node.to_string(),
      yaml: msg.yaml.to_string(),
    }
  }
}


