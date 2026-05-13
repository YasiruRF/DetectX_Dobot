// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot_interface/srv/pick_and_place.h"


#ifndef DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__STRUCT_H_
#define DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PickAndPlace in the package dobot_interface.
typedef struct dobot_interface__srv__PickAndPlace_Request
{
  float pick_pose[4];
  float place_pose[4];
} dobot_interface__srv__PickAndPlace_Request;

// Struct for a sequence of dobot_interface__srv__PickAndPlace_Request.
typedef struct dobot_interface__srv__PickAndPlace_Request__Sequence
{
  dobot_interface__srv__PickAndPlace_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__srv__PickAndPlace_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PickAndPlace in the package dobot_interface.
typedef struct dobot_interface__srv__PickAndPlace_Response
{
  bool success;
  rosidl_runtime_c__String message;
} dobot_interface__srv__PickAndPlace_Response;

// Struct for a sequence of dobot_interface__srv__PickAndPlace_Response.
typedef struct dobot_interface__srv__PickAndPlace_Response__Sequence
{
  dobot_interface__srv__PickAndPlace_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__srv__PickAndPlace_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot_interface__srv__PickAndPlace_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot_interface__srv__PickAndPlace_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PickAndPlace in the package dobot_interface.
typedef struct dobot_interface__srv__PickAndPlace_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot_interface__srv__PickAndPlace_Request__Sequence request;
  dobot_interface__srv__PickAndPlace_Response__Sequence response;
} dobot_interface__srv__PickAndPlace_Event;

// Struct for a sequence of dobot_interface__srv__PickAndPlace_Event.
typedef struct dobot_interface__srv__PickAndPlace_Event__Sequence
{
  dobot_interface__srv__PickAndPlace_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__srv__PickAndPlace_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_INTERFACE__SRV__DETAIL__PICK_AND_PLACE__STRUCT_H_
