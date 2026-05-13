// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dobot_interface/srv/detail/pick_and_place__functions.h"
#include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PickAndPlace_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PickAndPlace_Request_type_support_ids_t;

static const _PickAndPlace_Request_type_support_ids_t _PickAndPlace_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PickAndPlace_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PickAndPlace_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PickAndPlace_Request_type_support_symbol_names_t _PickAndPlace_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, srv, PickAndPlace_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Request)),
  }
};

typedef struct _PickAndPlace_Request_type_support_data_t
{
  void * data[2];
} _PickAndPlace_Request_type_support_data_t;

static _PickAndPlace_Request_type_support_data_t _PickAndPlace_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PickAndPlace_Request_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PickAndPlace_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PickAndPlace_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PickAndPlace_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PickAndPlace_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PickAndPlace_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Request__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Request__get_type_description,
  &dobot_interface__srv__PickAndPlace_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>()
{
  return &::dobot_interface::srv::rosidl_typesupport_cpp::PickAndPlace_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, srv, PickAndPlace_Request)() {
  return get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PickAndPlace_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PickAndPlace_Response_type_support_ids_t;

static const _PickAndPlace_Response_type_support_ids_t _PickAndPlace_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PickAndPlace_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PickAndPlace_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PickAndPlace_Response_type_support_symbol_names_t _PickAndPlace_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, srv, PickAndPlace_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Response)),
  }
};

typedef struct _PickAndPlace_Response_type_support_data_t
{
  void * data[2];
} _PickAndPlace_Response_type_support_data_t;

static _PickAndPlace_Response_type_support_data_t _PickAndPlace_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PickAndPlace_Response_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PickAndPlace_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PickAndPlace_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PickAndPlace_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PickAndPlace_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PickAndPlace_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Response__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Response__get_type_description,
  &dobot_interface__srv__PickAndPlace_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>()
{
  return &::dobot_interface::srv::rosidl_typesupport_cpp::PickAndPlace_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, srv, PickAndPlace_Response)() {
  return get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PickAndPlace_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PickAndPlace_Event_type_support_ids_t;

static const _PickAndPlace_Event_type_support_ids_t _PickAndPlace_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PickAndPlace_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PickAndPlace_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PickAndPlace_Event_type_support_symbol_names_t _PickAndPlace_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, srv, PickAndPlace_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace_Event)),
  }
};

typedef struct _PickAndPlace_Event_type_support_data_t
{
  void * data[2];
} _PickAndPlace_Event_type_support_data_t;

static _PickAndPlace_Event_type_support_data_t _PickAndPlace_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PickAndPlace_Event_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PickAndPlace_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PickAndPlace_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PickAndPlace_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PickAndPlace_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PickAndPlace_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &dobot_interface__srv__PickAndPlace_Event__get_type_hash,
  &dobot_interface__srv__PickAndPlace_Event__get_type_description,
  &dobot_interface__srv__PickAndPlace_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Event>()
{
  return &::dobot_interface::srv::rosidl_typesupport_cpp::PickAndPlace_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, srv, PickAndPlace_Event)() {
  return get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _PickAndPlace_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PickAndPlace_type_support_ids_t;

static const _PickAndPlace_type_support_ids_t _PickAndPlace_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PickAndPlace_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PickAndPlace_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PickAndPlace_type_support_symbol_names_t _PickAndPlace_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, dobot_interface, srv, PickAndPlace)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, dobot_interface, srv, PickAndPlace)),
  }
};

typedef struct _PickAndPlace_type_support_data_t
{
  void * data[2];
} _PickAndPlace_type_support_data_t;

static _PickAndPlace_type_support_data_t _PickAndPlace_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PickAndPlace_service_typesupport_map = {
  2,
  "dobot_interface",
  &_PickAndPlace_service_typesupport_ids.typesupport_identifier[0],
  &_PickAndPlace_service_typesupport_symbol_names.symbol_name[0],
  &_PickAndPlace_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PickAndPlace_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PickAndPlace_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<dobot_interface::srv::PickAndPlace_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<dobot_interface::srv::PickAndPlace>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<dobot_interface::srv::PickAndPlace>,
  &dobot_interface__srv__PickAndPlace__get_type_hash,
  &dobot_interface__srv__PickAndPlace__get_type_description,
  &dobot_interface__srv__PickAndPlace__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace dobot_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<dobot_interface::srv::PickAndPlace>()
{
  return &::dobot_interface::srv::rosidl_typesupport_cpp::PickAndPlace_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, dobot_interface, srv, PickAndPlace)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<dobot_interface::srv::PickAndPlace>();
}

#ifdef __cplusplus
}
#endif
