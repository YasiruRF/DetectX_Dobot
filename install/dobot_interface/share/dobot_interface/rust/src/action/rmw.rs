
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Goal() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_Goal__init(msg: *mut PosePTP_Goal) -> bool;
    fn dobot_interface__action__PosePTP_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Goal>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Goal>);
    fn dobot_interface__action__PosePTP_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Goal>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub pose_goal: [f32; 4],

}



impl Default for PosePTP_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_Goal__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Goal() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Result() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_Result__init(msg: *mut PosePTP_Result) -> bool;
    fn dobot_interface__action__PosePTP_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Result>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Result>);
    fn dobot_interface__action__PosePTP_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Result>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for PosePTP_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_Result__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_Result where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Result() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_Feedback__init(msg: *mut PosePTP_Feedback) -> bool;
    fn dobot_interface__action__PosePTP_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Feedback>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Feedback>);
    fn dobot_interface__action__PosePTP_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_Feedback>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub present_pose: [f32; 4],

}



impl Default for PosePTP_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_Feedback__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_Feedback() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_FeedbackMessage__init(msg: *mut PosePTP_FeedbackMessage) -> bool;
    fn dobot_interface__action__PosePTP_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_FeedbackMessage>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_FeedbackMessage>);
    fn dobot_interface__action__PosePTP_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_FeedbackMessage>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::PosePTP_Feedback,

}



impl Default for PosePTP_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_FeedbackMessage() }
  }
}




#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_SendGoal_Request__init(msg: *mut PosePTP_SendGoal_Request) -> bool;
    fn dobot_interface__action__PosePTP_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Request>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Request>);
    fn dobot_interface__action__PosePTP_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Request>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::PosePTP_Goal,

}



impl Default for PosePTP_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_SendGoal_Request() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_SendGoal_Response__init(msg: *mut PosePTP_SendGoal_Response) -> bool;
    fn dobot_interface__action__PosePTP_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Response>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Response>);
    fn dobot_interface__action__PosePTP_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_SendGoal_Response>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for PosePTP_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_SendGoal_Response() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_GetResult_Request__init(msg: *mut PosePTP_GetResult_Request) -> bool;
    fn dobot_interface__action__PosePTP_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Request>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Request>);
    fn dobot_interface__action__PosePTP_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Request>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for PosePTP_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_GetResult_Request() }
  }
}


#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "dobot_interface__rosidl_generator_c")]
extern "C" {
    fn dobot_interface__action__PosePTP_GetResult_Response__init(msg: *mut PosePTP_GetResult_Response) -> bool;
    fn dobot_interface__action__PosePTP_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Response>, size: usize) -> bool;
    fn dobot_interface__action__PosePTP_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Response>);
    fn dobot_interface__action__PosePTP_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosePTP_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PosePTP_GetResult_Response>) -> bool;
}

// Corresponds to dobot_interface__action__PosePTP_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosePTP_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::PosePTP_Result,

}



impl Default for PosePTP_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !dobot_interface__action__PosePTP_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to dobot_interface__action__PosePTP_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosePTP_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { dobot_interface__action__PosePTP_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosePTP_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosePTP_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "dobot_interface/action/PosePTP_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__dobot_interface__action__PosePTP_GetResult_Response() }
  }
}






#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__PosePTP_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to dobot_interface__action__PosePTP_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct PosePTP_SendGoal;

impl rosidl_runtime_rs::Service for PosePTP_SendGoal {
    type Request = PosePTP_SendGoal_Request;
    type Response = PosePTP_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__PosePTP_SendGoal() }
    }
}




#[link(name = "dobot_interface__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__PosePTP_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to dobot_interface__action__PosePTP_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct PosePTP_GetResult;

impl rosidl_runtime_rs::Service for PosePTP_GetResult {
    type Request = PosePTP_GetResult_Request;
    type Response = PosePTP_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__dobot_interface__action__PosePTP_GetResult() }
    }
}


