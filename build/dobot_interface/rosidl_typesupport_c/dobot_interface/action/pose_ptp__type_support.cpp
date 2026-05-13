// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from dobot_interface:action/PosePTP.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "dobot_interface/action/detail/pose_ptp__struct.h"
#include "dobot_interface/action/detail/pose_ptp__type_support.h"
#include "dobot_interface/action/detail/pose_ptp__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_Goal_type_support_ids_t;

static const _PosePTP_Goal_type_support_ids_t _PosePTP_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_Goal_type_support_symbol_names_t _PosePTP_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_Goal)),
  }
};

typedef struct _PosePTP_Goal_type_support_data_t
{
  void * data[2];
} _PosePTP_Goal_type_support_data_t;

static _PosePTP_Goal_type_support_data_t _PosePTP_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_Goal_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_Goal__get_type_hash,
  &dobot_interface__action__PosePTP_Goal__get_type_description,
  &dobot_interface__action__PosePTP_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_Goal)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_Result_type_support_ids_t;

static const _PosePTP_Result_type_support_ids_t _PosePTP_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_Result_type_support_symbol_names_t _PosePTP_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_Result)),
  }
};

typedef struct _PosePTP_Result_type_support_data_t
{
  void * data[2];
} _PosePTP_Result_type_support_data_t;

static _PosePTP_Result_type_support_data_t _PosePTP_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_Result_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_Result__get_type_hash,
  &dobot_interface__action__PosePTP_Result__get_type_description,
  &dobot_interface__action__PosePTP_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_Result)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_Feedback_type_support_ids_t;

static const _PosePTP_Feedback_type_support_ids_t _PosePTP_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_Feedback_type_support_symbol_names_t _PosePTP_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_Feedback)),
  }
};

typedef struct _PosePTP_Feedback_type_support_data_t
{
  void * data[2];
} _PosePTP_Feedback_type_support_data_t;

static _PosePTP_Feedback_type_support_data_t _PosePTP_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_Feedback_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_Feedback__get_type_hash,
  &dobot_interface__action__PosePTP_Feedback__get_type_description,
  &dobot_interface__action__PosePTP_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_Feedback)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_SendGoal_Request_type_support_ids_t;

static const _PosePTP_SendGoal_Request_type_support_ids_t _PosePTP_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_SendGoal_Request_type_support_symbol_names_t _PosePTP_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_SendGoal_Request)),
  }
};

typedef struct _PosePTP_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PosePTP_SendGoal_Request_type_support_data_t;

static _PosePTP_SendGoal_Request_type_support_data_t _PosePTP_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_SendGoal_Request_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_SendGoal_Request__get_type_hash,
  &dobot_interface__action__PosePTP_SendGoal_Request__get_type_description,
  &dobot_interface__action__PosePTP_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_SendGoal_Request)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_SendGoal_Response_type_support_ids_t;

static const _PosePTP_SendGoal_Response_type_support_ids_t _PosePTP_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_SendGoal_Response_type_support_symbol_names_t _PosePTP_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_SendGoal_Response)),
  }
};

typedef struct _PosePTP_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PosePTP_SendGoal_Response_type_support_data_t;

static _PosePTP_SendGoal_Response_type_support_data_t _PosePTP_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_SendGoal_Response_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_SendGoal_Response__get_type_hash,
  &dobot_interface__action__PosePTP_SendGoal_Response__get_type_description,
  &dobot_interface__action__PosePTP_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_SendGoal_Response)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_SendGoal_Event_type_support_ids_t;

static const _PosePTP_SendGoal_Event_type_support_ids_t _PosePTP_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_SendGoal_Event_type_support_symbol_names_t _PosePTP_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_SendGoal_Event)),
  }
};

typedef struct _PosePTP_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _PosePTP_SendGoal_Event_type_support_data_t;

static _PosePTP_SendGoal_Event_type_support_data_t _PosePTP_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_SendGoal_Event_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_SendGoal_Event__get_type_hash,
  &dobot_interface__action__PosePTP_SendGoal_Event__get_type_description,
  &dobot_interface__action__PosePTP_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_SendGoal_Event)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PosePTP_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_SendGoal_type_support_ids_t;

static const _PosePTP_SendGoal_type_support_ids_t _PosePTP_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_SendGoal_type_support_symbol_names_t _PosePTP_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_SendGoal)),
  }
};

typedef struct _PosePTP_SendGoal_type_support_data_t
{
  void * data[2];
} _PosePTP_SendGoal_type_support_data_t;

static _PosePTP_SendGoal_type_support_data_t _PosePTP_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_SendGoal_service_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PosePTP_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PosePTP_SendGoal_Request_message_type_support_handle,
  &PosePTP_SendGoal_Response_message_type_support_handle,
  &PosePTP_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dobot_interface,
    action,
    PosePTP_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dobot_interface,
    action,
    PosePTP_SendGoal
  ),
  &dobot_interface__action__PosePTP_SendGoal__get_type_hash,
  &dobot_interface__action__PosePTP_SendGoal__get_type_description,
  &dobot_interface__action__PosePTP_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_SendGoal)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_GetResult_Request_type_support_ids_t;

static const _PosePTP_GetResult_Request_type_support_ids_t _PosePTP_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_GetResult_Request_type_support_symbol_names_t _PosePTP_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_GetResult_Request)),
  }
};

typedef struct _PosePTP_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PosePTP_GetResult_Request_type_support_data_t;

static _PosePTP_GetResult_Request_type_support_data_t _PosePTP_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_GetResult_Request_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_GetResult_Request__get_type_hash,
  &dobot_interface__action__PosePTP_GetResult_Request__get_type_description,
  &dobot_interface__action__PosePTP_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_GetResult_Request)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_GetResult_Response_type_support_ids_t;

static const _PosePTP_GetResult_Response_type_support_ids_t _PosePTP_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_GetResult_Response_type_support_symbol_names_t _PosePTP_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_GetResult_Response)),
  }
};

typedef struct _PosePTP_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PosePTP_GetResult_Response_type_support_data_t;

static _PosePTP_GetResult_Response_type_support_data_t _PosePTP_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_GetResult_Response_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_GetResult_Response__get_type_hash,
  &dobot_interface__action__PosePTP_GetResult_Response__get_type_description,
  &dobot_interface__action__PosePTP_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_GetResult_Response)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_GetResult_Event_type_support_ids_t;

static const _PosePTP_GetResult_Event_type_support_ids_t _PosePTP_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_GetResult_Event_type_support_symbol_names_t _PosePTP_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_GetResult_Event)),
  }
};

typedef struct _PosePTP_GetResult_Event_type_support_data_t
{
  void * data[2];
} _PosePTP_GetResult_Event_type_support_data_t;

static _PosePTP_GetResult_Event_type_support_data_t _PosePTP_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_GetResult_Event_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_GetResult_Event__get_type_hash,
  &dobot_interface__action__PosePTP_GetResult_Event__get_type_description,
  &dobot_interface__action__PosePTP_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_GetResult_Event)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _PosePTP_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_GetResult_type_support_ids_t;

static const _PosePTP_GetResult_type_support_ids_t _PosePTP_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_GetResult_type_support_symbol_names_t _PosePTP_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_GetResult)),
  }
};

typedef struct _PosePTP_GetResult_type_support_data_t
{
  void * data[2];
} _PosePTP_GetResult_type_support_data_t;

static _PosePTP_GetResult_type_support_data_t _PosePTP_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_GetResult_service_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PosePTP_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &PosePTP_GetResult_Request_message_type_support_handle,
  &PosePTP_GetResult_Response_message_type_support_handle,
  &PosePTP_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dobot_interface,
    action,
    PosePTP_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    dobot_interface,
    action,
    PosePTP_GetResult
  ),
  &dobot_interface__action__PosePTP_GetResult__get_type_hash,
  &dobot_interface__action__PosePTP_GetResult__get_type_description,
  &dobot_interface__action__PosePTP_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_GetResult)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace dobot_interface
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _PosePTP_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PosePTP_FeedbackMessage_type_support_ids_t;

static const _PosePTP_FeedbackMessage_type_support_ids_t _PosePTP_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PosePTP_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PosePTP_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PosePTP_FeedbackMessage_type_support_symbol_names_t _PosePTP_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_interface, action, PosePTP_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_interface, action, PosePTP_FeedbackMessage)),
  }
};

typedef struct _PosePTP_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PosePTP_FeedbackMessage_type_support_data_t;

static _PosePTP_FeedbackMessage_type_support_data_t _PosePTP_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PosePTP_FeedbackMessage_message_typesupport_map = {
  2,
  "dobot_interface",
  &_PosePTP_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PosePTP_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PosePTP_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PosePTP_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PosePTP_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &dobot_interface__action__PosePTP_FeedbackMessage__get_type_hash,
  &dobot_interface__action__PosePTP_FeedbackMessage__get_type_description,
  &dobot_interface__action__PosePTP_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace dobot_interface

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, dobot_interface, action, PosePTP_FeedbackMessage)() {
  return &::dobot_interface::action::rosidl_typesupport_c::PosePTP_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "dobot_interface/action/pose_ptp.h"
// already included above
// #include "dobot_interface/action/detail/pose_ptp__type_support.h"

static rosidl_action_type_support_t _dobot_interface__action__PosePTP__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &dobot_interface__action__PosePTP__get_type_hash,
  &dobot_interface__action__PosePTP__get_type_description,
  &dobot_interface__action__PosePTP__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, dobot_interface, action, PosePTP)()
{
  // Thread-safe by always writing the same values to the static struct
  _dobot_interface__action__PosePTP__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, dobot_interface, action, PosePTP_SendGoal)();
  _dobot_interface__action__PosePTP__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, dobot_interface, action, PosePTP_GetResult)();
  _dobot_interface__action__PosePTP__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _dobot_interface__action__PosePTP__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, dobot_interface, action, PosePTP_FeedbackMessage)();
  _dobot_interface__action__PosePTP__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_dobot_interface__action__PosePTP__typesupport_c;
}

#ifdef __cplusplus
}
#endif
