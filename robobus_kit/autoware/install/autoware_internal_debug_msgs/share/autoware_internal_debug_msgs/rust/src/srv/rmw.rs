#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__srv__String_Request() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__srv__String_Request__init(msg: *mut String_Request) -> bool;
    fn autoware_internal_debug_msgs__srv__String_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<String_Request>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__srv__String_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<String_Request>);
    fn autoware_internal_debug_msgs__srv__String_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<String_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<String_Request>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__srv__String_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct String_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::String,

}



impl Default for String_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__srv__String_Request__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__srv__String_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for String_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for String_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for String_Request where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/srv/String_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__srv__String_Request() }
  }
}


#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__srv__String_Response() -> *const std::ffi::c_void;
}

#[link(name = "autoware_internal_debug_msgs__rosidl_generator_c")]
extern "C" {
    fn autoware_internal_debug_msgs__srv__String_Response__init(msg: *mut String_Response) -> bool;
    fn autoware_internal_debug_msgs__srv__String_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<String_Response>, size: usize) -> bool;
    fn autoware_internal_debug_msgs__srv__String_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<String_Response>);
    fn autoware_internal_debug_msgs__srv__String_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<String_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<String_Response>) -> bool;
}

// Corresponds to autoware_internal_debug_msgs__srv__String_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct String_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for String_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !autoware_internal_debug_msgs__srv__String_Response__init(&mut msg as *mut _) {
        panic!("Call to autoware_internal_debug_msgs__srv__String_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for String_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { autoware_internal_debug_msgs__srv__String_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for String_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for String_Response where Self: Sized {
  const TYPE_NAME: &'static str = "autoware_internal_debug_msgs/srv/String_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__autoware_internal_debug_msgs__srv__String_Response() }
  }
}






#[link(name = "autoware_internal_debug_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__autoware_internal_debug_msgs__srv__String() -> *const std::ffi::c_void;
}

// Corresponds to autoware_internal_debug_msgs__srv__String
#[allow(missing_docs, non_camel_case_types)]
pub struct String;

impl rosidl_runtime_rs::Service for String {
    type Request = String_Request;
    type Response = String_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__autoware_internal_debug_msgs__srv__String() }
    }
}


