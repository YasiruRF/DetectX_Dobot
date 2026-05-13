// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_interface:action/PosePTP.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "dobot_interface/action/pose_ptp.h"


#ifndef DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__STRUCT_H_
#define DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_Goal
{
  float pose_goal[4];
} dobot_interface__action__PosePTP_Goal;

// Struct for a sequence of dobot_interface__action__PosePTP_Goal.
typedef struct dobot_interface__action__PosePTP_Goal__Sequence
{
  dobot_interface__action__PosePTP_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_Result
{
  bool success;
} dobot_interface__action__PosePTP_Result;

// Struct for a sequence of dobot_interface__action__PosePTP_Result.
typedef struct dobot_interface__action__PosePTP_Result__Sequence
{
  dobot_interface__action__PosePTP_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_Feedback
{
  float present_pose[4];
} dobot_interface__action__PosePTP_Feedback;

// Struct for a sequence of dobot_interface__action__PosePTP_Feedback.
typedef struct dobot_interface__action__PosePTP_Feedback__Sequence
{
  dobot_interface__action__PosePTP_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dobot_interface/action/detail/pose_ptp__struct.h"

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_interface__action__PosePTP_Goal goal;
} dobot_interface__action__PosePTP_SendGoal_Request;

// Struct for a sequence of dobot_interface__action__PosePTP_SendGoal_Request.
typedef struct dobot_interface__action__PosePTP_SendGoal_Request__Sequence
{
  dobot_interface__action__PosePTP_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dobot_interface__action__PosePTP_SendGoal_Response;

// Struct for a sequence of dobot_interface__action__PosePTP_SendGoal_Response.
typedef struct dobot_interface__action__PosePTP_SendGoal_Response__Sequence
{
  dobot_interface__action__PosePTP_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot_interface__action__PosePTP_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot_interface__action__PosePTP_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot_interface__action__PosePTP_SendGoal_Request__Sequence request;
  dobot_interface__action__PosePTP_SendGoal_Response__Sequence response;
} dobot_interface__action__PosePTP_SendGoal_Event;

// Struct for a sequence of dobot_interface__action__PosePTP_SendGoal_Event.
typedef struct dobot_interface__action__PosePTP_SendGoal_Event__Sequence
{
  dobot_interface__action__PosePTP_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dobot_interface__action__PosePTP_GetResult_Request;

// Struct for a sequence of dobot_interface__action__PosePTP_GetResult_Request.
typedef struct dobot_interface__action__PosePTP_GetResult_Request__Sequence
{
  dobot_interface__action__PosePTP_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_GetResult_Response
{
  int8_t status;
  dobot_interface__action__PosePTP_Result result;
} dobot_interface__action__PosePTP_GetResult_Response;

// Struct for a sequence of dobot_interface__action__PosePTP_GetResult_Response.
typedef struct dobot_interface__action__PosePTP_GetResult_Response__Sequence
{
  dobot_interface__action__PosePTP_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  dobot_interface__action__PosePTP_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  dobot_interface__action__PosePTP_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  dobot_interface__action__PosePTP_GetResult_Request__Sequence request;
  dobot_interface__action__PosePTP_GetResult_Response__Sequence response;
} dobot_interface__action__PosePTP_GetResult_Event;

// Struct for a sequence of dobot_interface__action__PosePTP_GetResult_Event.
typedef struct dobot_interface__action__PosePTP_GetResult_Event__Sequence
{
  dobot_interface__action__PosePTP_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dobot_interface/action/detail/pose_ptp__struct.h"

/// Struct defined in action/PosePTP in the package dobot_interface.
typedef struct dobot_interface__action__PosePTP_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_interface__action__PosePTP_Feedback feedback;
} dobot_interface__action__PosePTP_FeedbackMessage;

// Struct for a sequence of dobot_interface__action__PosePTP_FeedbackMessage.
typedef struct dobot_interface__action__PosePTP_FeedbackMessage__Sequence
{
  dobot_interface__action__PosePTP_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_interface__action__PosePTP_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_INTERFACE__ACTION__DETAIL__POSE_PTP__STRUCT_H_
