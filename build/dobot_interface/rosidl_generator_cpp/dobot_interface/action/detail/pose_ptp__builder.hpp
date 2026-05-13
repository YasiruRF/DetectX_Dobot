// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_interface:action/PosePTP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot_interface/action/pose_ptp.hpp"


#ifndef DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__BUILDER_HPP_
#define DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_interface/action/detail/pose_ptp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_Goal_pose_goal
{
public:
  Init_PosePTP_Goal_pose_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_interface::action::PosePTP_Goal pose_goal(::dobot_interface::action::PosePTP_Goal::_pose_goal_type arg)
  {
    msg_.pose_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_Goal>()
{
  return dobot_interface::action::builder::Init_PosePTP_Goal_pose_goal();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_Result_success
{
public:
  Init_PosePTP_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_interface::action::PosePTP_Result success(::dobot_interface::action::PosePTP_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_Result>()
{
  return dobot_interface::action::builder::Init_PosePTP_Result_success();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_Feedback_present_pose
{
public:
  Init_PosePTP_Feedback_present_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_interface::action::PosePTP_Feedback present_pose(::dobot_interface::action::PosePTP_Feedback::_present_pose_type arg)
  {
    msg_.present_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_Feedback>()
{
  return dobot_interface::action::builder::Init_PosePTP_Feedback_present_pose();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_SendGoal_Request_goal
{
public:
  explicit Init_PosePTP_SendGoal_Request_goal(::dobot_interface::action::PosePTP_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_SendGoal_Request goal(::dobot_interface::action::PosePTP_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Request msg_;
};

class Init_PosePTP_SendGoal_Request_goal_id
{
public:
  Init_PosePTP_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_SendGoal_Request_goal goal_id(::dobot_interface::action::PosePTP_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PosePTP_SendGoal_Request_goal(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_SendGoal_Request>()
{
  return dobot_interface::action::builder::Init_PosePTP_SendGoal_Request_goal_id();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_SendGoal_Response_stamp
{
public:
  explicit Init_PosePTP_SendGoal_Response_stamp(::dobot_interface::action::PosePTP_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_SendGoal_Response stamp(::dobot_interface::action::PosePTP_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Response msg_;
};

class Init_PosePTP_SendGoal_Response_accepted
{
public:
  Init_PosePTP_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_SendGoal_Response_stamp accepted(::dobot_interface::action::PosePTP_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_PosePTP_SendGoal_Response_stamp(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_SendGoal_Response>()
{
  return dobot_interface::action::builder::Init_PosePTP_SendGoal_Response_accepted();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_SendGoal_Event_response
{
public:
  explicit Init_PosePTP_SendGoal_Event_response(::dobot_interface::action::PosePTP_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_SendGoal_Event response(::dobot_interface::action::PosePTP_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Event msg_;
};

class Init_PosePTP_SendGoal_Event_request
{
public:
  explicit Init_PosePTP_SendGoal_Event_request(::dobot_interface::action::PosePTP_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_PosePTP_SendGoal_Event_response request(::dobot_interface::action::PosePTP_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PosePTP_SendGoal_Event_response(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Event msg_;
};

class Init_PosePTP_SendGoal_Event_info
{
public:
  Init_PosePTP_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_SendGoal_Event_request info(::dobot_interface::action::PosePTP_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PosePTP_SendGoal_Event_request(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_SendGoal_Event>()
{
  return dobot_interface::action::builder::Init_PosePTP_SendGoal_Event_info();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_GetResult_Request_goal_id
{
public:
  Init_PosePTP_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_interface::action::PosePTP_GetResult_Request goal_id(::dobot_interface::action::PosePTP_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_GetResult_Request>()
{
  return dobot_interface::action::builder::Init_PosePTP_GetResult_Request_goal_id();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_GetResult_Response_result
{
public:
  explicit Init_PosePTP_GetResult_Response_result(::dobot_interface::action::PosePTP_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_GetResult_Response result(::dobot_interface::action::PosePTP_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Response msg_;
};

class Init_PosePTP_GetResult_Response_status
{
public:
  Init_PosePTP_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_GetResult_Response_result status(::dobot_interface::action::PosePTP_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PosePTP_GetResult_Response_result(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_GetResult_Response>()
{
  return dobot_interface::action::builder::Init_PosePTP_GetResult_Response_status();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_GetResult_Event_response
{
public:
  explicit Init_PosePTP_GetResult_Event_response(::dobot_interface::action::PosePTP_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_GetResult_Event response(::dobot_interface::action::PosePTP_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Event msg_;
};

class Init_PosePTP_GetResult_Event_request
{
public:
  explicit Init_PosePTP_GetResult_Event_request(::dobot_interface::action::PosePTP_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_PosePTP_GetResult_Event_response request(::dobot_interface::action::PosePTP_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PosePTP_GetResult_Event_response(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Event msg_;
};

class Init_PosePTP_GetResult_Event_info
{
public:
  Init_PosePTP_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_GetResult_Event_request info(::dobot_interface::action::PosePTP_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PosePTP_GetResult_Event_request(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_GetResult_Event>()
{
  return dobot_interface::action::builder::Init_PosePTP_GetResult_Event_info();
}

}  // namespace dobot_interface


namespace dobot_interface
{

namespace action
{

namespace builder
{

class Init_PosePTP_FeedbackMessage_feedback
{
public:
  explicit Init_PosePTP_FeedbackMessage_feedback(::dobot_interface::action::PosePTP_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dobot_interface::action::PosePTP_FeedbackMessage feedback(::dobot_interface::action::PosePTP_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_FeedbackMessage msg_;
};

class Init_PosePTP_FeedbackMessage_goal_id
{
public:
  Init_PosePTP_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PosePTP_FeedbackMessage_feedback goal_id(::dobot_interface::action::PosePTP_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_PosePTP_FeedbackMessage_feedback(msg_);
  }

private:
  ::dobot_interface::action::PosePTP_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_interface::action::PosePTP_FeedbackMessage>()
{
  return dobot_interface::action::builder::Init_PosePTP_FeedbackMessage_goal_id();
}

}  // namespace dobot_interface

#endif  // DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__BUILDER_HPP_
