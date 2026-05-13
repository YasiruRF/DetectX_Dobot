// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot_interface/srv/pick_and_place.hpp"


#ifndef DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
#define DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace dobot_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PickAndPlace_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pick_pose
  {
    if (msg.pick_pose.size() == 0) {
      out << "pick_pose: []";
    } else {
      out << "pick_pose: [";
      size_t pending_items = msg.pick_pose.size();
      for (auto item : msg.pick_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: place_pose
  {
    if (msg.place_pose.size() == 0) {
      out << "place_pose: []";
    } else {
      out << "place_pose: [";
      size_t pending_items = msg.place_pose.size();
      for (auto item : msg.place_pose) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickAndPlace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pick_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pick_pose.size() == 0) {
      out << "pick_pose: []\n";
    } else {
      out << "pick_pose:\n";
      for (auto item : msg.pick_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: place_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.place_pose.size() == 0) {
      out << "place_pose: []\n";
    } else {
      out << "place_pose:\n";
      for (auto item : msg.place_pose) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_generator_traits
{

[[deprecated("use dobot_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_interface::srv::PickAndPlace_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_interface::srv::PickAndPlace_Request & msg)
{
  return dobot_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_interface::srv::PickAndPlace_Request>()
{
  return "dobot_interface::srv::PickAndPlace_Request";
}

template<>
inline const char * name<dobot_interface::srv::PickAndPlace_Request>()
{
  return "dobot_interface/srv/PickAndPlace_Request";
}

template<>
struct has_fixed_size<dobot_interface::srv::PickAndPlace_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<dobot_interface::srv::PickAndPlace_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<dobot_interface::srv::PickAndPlace_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace dobot_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PickAndPlace_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickAndPlace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_generator_traits
{

[[deprecated("use dobot_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_interface::srv::PickAndPlace_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_interface::srv::PickAndPlace_Response & msg)
{
  return dobot_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_interface::srv::PickAndPlace_Response>()
{
  return "dobot_interface::srv::PickAndPlace_Response";
}

template<>
inline const char * name<dobot_interface::srv::PickAndPlace_Response>()
{
  return "dobot_interface/srv/PickAndPlace_Response";
}

template<>
struct has_fixed_size<dobot_interface::srv::PickAndPlace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_interface::srv::PickAndPlace_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dobot_interface::srv::PickAndPlace_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace dobot_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PickAndPlace_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PickAndPlace_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PickAndPlace_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_generator_traits
{

[[deprecated("use dobot_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const dobot_interface::srv::PickAndPlace_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  dobot_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use dobot_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const dobot_interface::srv::PickAndPlace_Event & msg)
{
  return dobot_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<dobot_interface::srv::PickAndPlace_Event>()
{
  return "dobot_interface::srv::PickAndPlace_Event";
}

template<>
inline const char * name<dobot_interface::srv::PickAndPlace_Event>()
{
  return "dobot_interface/srv/PickAndPlace_Event";
}

template<>
struct has_fixed_size<dobot_interface::srv::PickAndPlace_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dobot_interface::srv::PickAndPlace_Event>
  : std::integral_constant<bool, has_bounded_size<dobot_interface::srv::PickAndPlace_Request>::value && has_bounded_size<dobot_interface::srv::PickAndPlace_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<dobot_interface::srv::PickAndPlace_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dobot_interface::srv::PickAndPlace>()
{
  return "dobot_interface::srv::PickAndPlace";
}

template<>
inline const char * name<dobot_interface::srv::PickAndPlace>()
{
  return "dobot_interface/srv/PickAndPlace";
}

template<>
struct has_fixed_size<dobot_interface::srv::PickAndPlace>
  : std::integral_constant<
    bool,
    has_fixed_size<dobot_interface::srv::PickAndPlace_Request>::value &&
    has_fixed_size<dobot_interface::srv::PickAndPlace_Response>::value
  >
{
};

template<>
struct has_bounded_size<dobot_interface::srv::PickAndPlace>
  : std::integral_constant<
    bool,
    has_bounded_size<dobot_interface::srv::PickAndPlace_Request>::value &&
    has_bounded_size<dobot_interface::srv::PickAndPlace_Response>::value
  >
{
};

template<>
struct is_service<dobot_interface::srv::PickAndPlace>
  : std::true_type
{
};

template<>
struct is_service_request<dobot_interface::srv::PickAndPlace_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dobot_interface::srv::PickAndPlace_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__TRAITS_HPP_
