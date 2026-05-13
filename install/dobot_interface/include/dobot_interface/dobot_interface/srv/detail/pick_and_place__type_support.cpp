// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "dobot_interface/srv/detail/pick_and_place__functions.h"
#include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PickAndPlace_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot_interface::srv::PickAndPlace_Request(_init);
}

void PickAndPlace_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot_interface::srv::PickAndPlace_Request *>(message_memory);
  typed_message->~PickAndPlace_Request();
}

size_t size_function__PickAndPlace_Request__pick_pose(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__PickAndPlace_Request__pick_pose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__PickAndPlace_Request__pick_pose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__PickAndPlace_Request__pick_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PickAndPlace_Request__pick_pose(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PickAndPlace_Request__pick_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PickAndPlace_Request__pick_pose(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__PickAndPlace_Request__place_pose(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__PickAndPlace_Request__place_pose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__PickAndPlace_Request__place_pose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__PickAndPlace_Request__place_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__PickAndPlace_Request__place_pose(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__PickAndPlace_Request__place_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__PickAndPlace_Request__place_pose(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PickAndPlace_Request_message_member_array[2] = {
  {
    "pick_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Request, pick_pose),  // bytes offset in struct
    nullptr,  // default value
    size_function__PickAndPlace_Request__pick_pose,  // size() function pointer
    get_const_function__PickAndPlace_Request__pick_pose,  // get_const(index) function pointer
    get_function__PickAndPlace_Request__pick_pose,  // get(index) function pointer
    fetch_function__PickAndPlace_Request__pick_pose,  // fetch(index, &value) function pointer
    assign_function__PickAndPlace_Request__pick_pose,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "place_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Request, place_pose),  // bytes offset in struct
    nullptr,  // default value
    size_function__PickAndPlace_Request__place_pose,  // size() function pointer
    get_const_function__PickAndPlace_Request__place_pose,  // get_const(index) function pointer
    get_function__PickAndPlace_Request__place_pose,  // get(index) function pointer
    fetch_function__PickAndPlace_Request__place_pose,  // fetch(index, &value) function pointer
    assign_function__PickAndPlace_Request__place_pose,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PickAndPlace_Request_message_members = {
  "dobot_interface::srv",  // message namespace
  "PickAndPlace_Request",  // message name
  2,  // number of fields
  sizeof(dobot_interface::srv::PickAndPlace_Request),
  false,  // has_any_key_member_
  PickAndPlace_Request_message_member_array,  // message members
  PickAndPlace_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PickAndPlace_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PickAndPlace_Request_message_members,
  get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Request__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Request__get_type_description,
  &dobot_interface__srv__PickAndPlace_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>()
{
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Request)() {
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PickAndPlace_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot_interface::srv::PickAndPlace_Response(_init);
}

void PickAndPlace_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot_interface::srv::PickAndPlace_Response *>(message_memory);
  typed_message->~PickAndPlace_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PickAndPlace_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PickAndPlace_Response_message_members = {
  "dobot_interface::srv",  // message namespace
  "PickAndPlace_Response",  // message name
  2,  // number of fields
  sizeof(dobot_interface::srv::PickAndPlace_Response),
  false,  // has_any_key_member_
  PickAndPlace_Response_message_member_array,  // message members
  PickAndPlace_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PickAndPlace_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PickAndPlace_Response_message_members,
  get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Response__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Response__get_type_description,
  &dobot_interface__srv__PickAndPlace_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>()
{
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Response)() {
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void PickAndPlace_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) dobot_interface::srv::PickAndPlace_Event(_init);
}

void PickAndPlace_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<dobot_interface::srv::PickAndPlace_Event *>(message_memory);
  typed_message->~PickAndPlace_Event();
}

size_t size_function__PickAndPlace_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dobot_interface::srv::PickAndPlace_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PickAndPlace_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dobot_interface::srv::PickAndPlace_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__PickAndPlace_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dobot_interface::srv::PickAndPlace_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__PickAndPlace_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dobot_interface::srv::PickAndPlace_Request *>(
    get_const_function__PickAndPlace_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<dobot_interface::srv::PickAndPlace_Request *>(untyped_value);
  value = item;
}

void assign_function__PickAndPlace_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dobot_interface::srv::PickAndPlace_Request *>(
    get_function__PickAndPlace_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const dobot_interface::srv::PickAndPlace_Request *>(untyped_value);
  item = value;
}

void resize_function__PickAndPlace_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dobot_interface::srv::PickAndPlace_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PickAndPlace_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<dobot_interface::srv::PickAndPlace_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PickAndPlace_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<dobot_interface::srv::PickAndPlace_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__PickAndPlace_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<dobot_interface::srv::PickAndPlace_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__PickAndPlace_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const dobot_interface::srv::PickAndPlace_Response *>(
    get_const_function__PickAndPlace_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<dobot_interface::srv::PickAndPlace_Response *>(untyped_value);
  value = item;
}

void assign_function__PickAndPlace_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<dobot_interface::srv::PickAndPlace_Response *>(
    get_function__PickAndPlace_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const dobot_interface::srv::PickAndPlace_Response *>(untyped_value);
  item = value;
}

void resize_function__PickAndPlace_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<dobot_interface::srv::PickAndPlace_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PickAndPlace_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__PickAndPlace_Event__request,  // size() function pointer
    get_const_function__PickAndPlace_Event__request,  // get_const(index) function pointer
    get_function__PickAndPlace_Event__request,  // get(index) function pointer
    fetch_function__PickAndPlace_Event__request,  // fetch(index, &value) function pointer
    assign_function__PickAndPlace_Event__request,  // assign(index, value) function pointer
    resize_function__PickAndPlace_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(dobot_interface::srv::PickAndPlace_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__PickAndPlace_Event__response,  // size() function pointer
    get_const_function__PickAndPlace_Event__response,  // get_const(index) function pointer
    get_function__PickAndPlace_Event__response,  // get(index) function pointer
    fetch_function__PickAndPlace_Event__response,  // fetch(index, &value) function pointer
    assign_function__PickAndPlace_Event__response,  // assign(index, value) function pointer
    resize_function__PickAndPlace_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PickAndPlace_Event_message_members = {
  "dobot_interface::srv",  // message namespace
  "PickAndPlace_Event",  // message name
  3,  // number of fields
  sizeof(dobot_interface::srv::PickAndPlace_Event),
  false,  // has_any_key_member_
  PickAndPlace_Event_message_member_array,  // message members
  PickAndPlace_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  PickAndPlace_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PickAndPlace_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PickAndPlace_Event_message_members,
  get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Event__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Event__get_type_description,
  &dobot_interface__srv__PickAndPlace_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Event>()
{
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Event)() {
  return &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers PickAndPlace_service_members = {
  "dobot_interface::srv",  // service namespace
  "PickAndPlace",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<dobot_interface::srv::PickAndPlace>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t PickAndPlace_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PickAndPlace_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dobot_interface::srv::PickAndPlace>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dobot_interface::srv::PickAndPlace>,
  &dobot_interface__srv__PickAndPlace__get_type_hash,
  &dobot_interface__srv__PickAndPlace__get_type_description,
  &dobot_interface__srv__PickAndPlace__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace dobot_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_interface::srv::PickAndPlace>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::dobot_interface::srv::rosidl_typesupport_introspection_cpp::PickAndPlace_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dobot_interface::srv::PickAndPlace_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dobot_interface::srv::PickAndPlace_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::dobot_interface::srv::PickAndPlace_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<dobot_interface::srv::PickAndPlace>();
}

#ifdef __cplusplus
}
#endif
