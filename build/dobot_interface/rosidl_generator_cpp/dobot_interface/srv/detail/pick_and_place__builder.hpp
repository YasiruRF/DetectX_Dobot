// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot_interface/srv/pick_and_place.hpp"


#ifndef DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
#define DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_interface
{

namespace srv
{

namespace builder
{

class Init_PickAndPlace_Request_place_pose
{
public:
  explicit Init_PickAndPlace_Request_place_pose(::dobot_interface::srv::PickAndPlace_Request & msg)
  : msg_(msg)
  {}
  ::dobot_interface::srv::PickAndPlace_Request place_pose(::dobot_interface::srv::PickAndPlace_Request::_place_pose_type arg)
  {
    msg_.place_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Request msg_;
};

class Init_PickAndPlace_Request_pick_pose
{
public:
  Init_PickAndPlace_Request_pick_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Request_place_pose pick_pose(::dobot_interface::srv::PickAndPlace_Request::_pick_pose_type arg)
  {
    msg_.pick_pose = std::move(arg);
    return Init_PickAndPlace_Request_place_pose(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::srv::PickAndPlace_Request>()
{
  return dobot_interface::srv::builder::Init_PickAndPlace_Request_pick_pose();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace srv
{

namespace builder
{

class Init_PickAndPlace_Response_message
{
public:
  explicit Init_PickAndPlace_Response_message(::dobot_interface::srv::PickAndPlace_Response & msg)
  : msg_(msg)
  {}
  ::dobot_interface::srv::PickAndPlace_Response message(::dobot_interface::srv::PickAndPlace_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Response msg_;
};

class Init_PickAndPlace_Response_success
{
public:
  Init_PickAndPlace_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Response_message success(::dobot_interface::srv::PickAndPlace_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PickAndPlace_Response_message(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::srv::PickAndPlace_Response>()
{
  return dobot_interface::srv::builder::Init_PickAndPlace_Response_success();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace srv
{

namespace builder
{

class Init_PickAndPlace_Event_response
{
public:
  explicit Init_PickAndPlace_Event_response(::dobot_interface::srv::PickAndPlace_Event & msg)
  : msg_(msg)
  {}
  ::dobot_interface::srv::PickAndPlace_Event response(::dobot_interface::srv::PickAndPlace_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Event msg_;
};

class Init_PickAndPlace_Event_request
{
public:
  explicit Init_PickAndPlace_Event_request(::dobot_interface::srv::PickAndPlace_Event & msg)
  : msg_(msg)
  {}
  Init_PickAndPlace_Event_response request(::dobot_interface::srv::PickAndPlace_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PickAndPlace_Event_response(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Event msg_;
};

class Init_PickAndPlace_Event_info
{
public:
  Init_PickAndPlace_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PickAndPlace_Event_request info(::dobot_interface::srv::PickAndPlace_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PickAndPlace_Event_request(msg_);
  }

private:
  ::dobot_interface::srv::PickAndPlace_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::srv::PickAndPlace_Event>()
{
  return dobot_interface::srv::builder::Init_PickAndPlace_Event_info();
}

}  // namespace dobot_interface

#endif  // DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__BUILDER_HPP_
