// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dobot_interface:srv/PickAndPlace.idl
// generated code does not contain a copyright notice
#include "dobot_interface/srv/detail/pick_and_place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dobot_interface__srv__PickAndPlace_Request__init(dobot_interface__srv__PickAndPlace_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pick_pose
  // place_pose
  return true;
}

void
dobot_interface__srv__PickAndPlace_Request__fini(dobot_interface__srv__PickAndPlace_Request * msg)
{
  if (!msg) {
    return;
  }
  // pick_pose
  // place_pose
}

bool
dobot_interface__srv__PickAndPlace_Request__are_equal(const dobot_interface__srv__PickAndPlace_Request * lhs, const dobot_interface__srv__PickAndPlace_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pick_pose
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->pick_pose[i] != rhs->pick_pose[i]) {
      return false;
    }
  }
  // place_pose
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->place_pose[i] != rhs->place_pose[i]) {
      return false;
    }
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Request__copy(
  const dobot_interface__srv__PickAndPlace_Request * input,
  dobot_interface__srv__PickAndPlace_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pick_pose
  for (size_t i = 0; i < 4; ++i) {
    output->pick_pose[i] = input->pick_pose[i];
  }
  // place_pose
  for (size_t i = 0; i < 4; ++i) {
    output->place_pose[i] = input->place_pose[i];
  }
  return true;
}

dobot_interface__srv__PickAndPlace_Request *
dobot_interface__srv__PickAndPlace_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Request * msg = (dobot_interface__srv__PickAndPlace_Request *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_interface__srv__PickAndPlace_Request));
  bool success = dobot_interface__srv__PickAndPlace_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_interface__srv__PickAndPlace_Request__destroy(dobot_interface__srv__PickAndPlace_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_interface__srv__PickAndPlace_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_interface__srv__PickAndPlace_Request__Sequence__init(dobot_interface__srv__PickAndPlace_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Request * data = NULL;

  if (size) {
    data = (dobot_interface__srv__PickAndPlace_Request *)allocator.zero_allocate(size, sizeof(dobot_interface__srv__PickAndPlace_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_interface__srv__PickAndPlace_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_interface__srv__PickAndPlace_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_interface__srv__PickAndPlace_Request__Sequence__fini(dobot_interface__srv__PickAndPlace_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_interface__srv__PickAndPlace_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_interface__srv__PickAndPlace_Request__Sequence *
dobot_interface__srv__PickAndPlace_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Request__Sequence * array = (dobot_interface__srv__PickAndPlace_Request__Sequence *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_interface__srv__PickAndPlace_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_interface__srv__PickAndPlace_Request__Sequence__destroy(dobot_interface__srv__PickAndPlace_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_interface__srv__PickAndPlace_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_interface__srv__PickAndPlace_Request__Sequence__are_equal(const dobot_interface__srv__PickAndPlace_Request__Sequence * lhs, const dobot_interface__srv__PickAndPlace_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Request__Sequence__copy(
  const dobot_interface__srv__PickAndPlace_Request__Sequence * input,
  dobot_interface__srv__PickAndPlace_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_interface__srv__PickAndPlace_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_interface__srv__PickAndPlace_Request * data =
      (dobot_interface__srv__PickAndPlace_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_interface__srv__PickAndPlace_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_interface__srv__PickAndPlace_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
dobot_interface__srv__PickAndPlace_Response__init(dobot_interface__srv__PickAndPlace_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    dobot_interface__srv__PickAndPlace_Response__fini(msg);
    return false;
  }
  return true;
}

void
dobot_interface__srv__PickAndPlace_Response__fini(dobot_interface__srv__PickAndPlace_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
dobot_interface__srv__PickAndPlace_Response__are_equal(const dobot_interface__srv__PickAndPlace_Response * lhs, const dobot_interface__srv__PickAndPlace_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Response__copy(
  const dobot_interface__srv__PickAndPlace_Response * input,
  dobot_interface__srv__PickAndPlace_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

dobot_interface__srv__PickAndPlace_Response *
dobot_interface__srv__PickAndPlace_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Response * msg = (dobot_interface__srv__PickAndPlace_Response *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_interface__srv__PickAndPlace_Response));
  bool success = dobot_interface__srv__PickAndPlace_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_interface__srv__PickAndPlace_Response__destroy(dobot_interface__srv__PickAndPlace_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_interface__srv__PickAndPlace_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_interface__srv__PickAndPlace_Response__Sequence__init(dobot_interface__srv__PickAndPlace_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Response * data = NULL;

  if (size) {
    data = (dobot_interface__srv__PickAndPlace_Response *)allocator.zero_allocate(size, sizeof(dobot_interface__srv__PickAndPlace_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_interface__srv__PickAndPlace_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_interface__srv__PickAndPlace_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_interface__srv__PickAndPlace_Response__Sequence__fini(dobot_interface__srv__PickAndPlace_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_interface__srv__PickAndPlace_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_interface__srv__PickAndPlace_Response__Sequence *
dobot_interface__srv__PickAndPlace_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Response__Sequence * array = (dobot_interface__srv__PickAndPlace_Response__Sequence *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_interface__srv__PickAndPlace_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_interface__srv__PickAndPlace_Response__Sequence__destroy(dobot_interface__srv__PickAndPlace_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_interface__srv__PickAndPlace_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_interface__srv__PickAndPlace_Response__Sequence__are_equal(const dobot_interface__srv__PickAndPlace_Response__Sequence * lhs, const dobot_interface__srv__PickAndPlace_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Response__Sequence__copy(
  const dobot_interface__srv__PickAndPlace_Response__Sequence * input,
  dobot_interface__srv__PickAndPlace_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_interface__srv__PickAndPlace_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_interface__srv__PickAndPlace_Response * data =
      (dobot_interface__srv__PickAndPlace_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_interface__srv__PickAndPlace_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_interface__srv__PickAndPlace_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "dobot_interface/srv/detail/pick_and_place__functions.h"

bool
dobot_interface__srv__PickAndPlace_Event__init(dobot_interface__srv__PickAndPlace_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    dobot_interface__srv__PickAndPlace_Event__fini(msg);
    return false;
  }
  // request
  if (!dobot_interface__srv__PickAndPlace_Request__Sequence__init(&msg->request, 0)) {
    dobot_interface__srv__PickAndPlace_Event__fini(msg);
    return false;
  }
  // response
  if (!dobot_interface__srv__PickAndPlace_Response__Sequence__init(&msg->response, 0)) {
    dobot_interface__srv__PickAndPlace_Event__fini(msg);
    return false;
  }
  return true;
}

void
dobot_interface__srv__PickAndPlace_Event__fini(dobot_interface__srv__PickAndPlace_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  dobot_interface__srv__PickAndPlace_Request__Sequence__fini(&msg->request);
  // response
  dobot_interface__srv__PickAndPlace_Response__Sequence__fini(&msg->response);
}

bool
dobot_interface__srv__PickAndPlace_Event__are_equal(const dobot_interface__srv__PickAndPlace_Event * lhs, const dobot_interface__srv__PickAndPlace_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!dobot_interface__srv__PickAndPlace_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!dobot_interface__srv__PickAndPlace_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Event__copy(
  const dobot_interface__srv__PickAndPlace_Event * input,
  dobot_interface__srv__PickAndPlace_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!dobot_interface__srv__PickAndPlace_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!dobot_interface__srv__PickAndPlace_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

dobot_interface__srv__PickAndPlace_Event *
dobot_interface__srv__PickAndPlace_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Event * msg = (dobot_interface__srv__PickAndPlace_Event *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dobot_interface__srv__PickAndPlace_Event));
  bool success = dobot_interface__srv__PickAndPlace_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dobot_interface__srv__PickAndPlace_Event__destroy(dobot_interface__srv__PickAndPlace_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dobot_interface__srv__PickAndPlace_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dobot_interface__srv__PickAndPlace_Event__Sequence__init(dobot_interface__srv__PickAndPlace_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Event * data = NULL;

  if (size) {
    data = (dobot_interface__srv__PickAndPlace_Event *)allocator.zero_allocate(size, sizeof(dobot_interface__srv__PickAndPlace_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dobot_interface__srv__PickAndPlace_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dobot_interface__srv__PickAndPlace_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dobot_interface__srv__PickAndPlace_Event__Sequence__fini(dobot_interface__srv__PickAndPlace_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dobot_interface__srv__PickAndPlace_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dobot_interface__srv__PickAndPlace_Event__Sequence *
dobot_interface__srv__PickAndPlace_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dobot_interface__srv__PickAndPlace_Event__Sequence * array = (dobot_interface__srv__PickAndPlace_Event__Sequence *)allocator.allocate(sizeof(dobot_interface__srv__PickAndPlace_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dobot_interface__srv__PickAndPlace_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dobot_interface__srv__PickAndPlace_Event__Sequence__destroy(dobot_interface__srv__PickAndPlace_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dobot_interface__srv__PickAndPlace_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dobot_interface__srv__PickAndPlace_Event__Sequence__are_equal(const dobot_interface__srv__PickAndPlace_Event__Sequence * lhs, const dobot_interface__srv__PickAndPlace_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dobot_interface__srv__PickAndPlace_Event__Sequence__copy(
  const dobot_interface__srv__PickAndPlace_Event__Sequence * input,
  dobot_interface__srv__PickAndPlace_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dobot_interface__srv__PickAndPlace_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dobot_interface__srv__PickAndPlace_Event * data =
      (dobot_interface__srv__PickAndPlace_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dobot_interface__srv__PickAndPlace_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dobot_interface__srv__PickAndPlace_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dobot_interface__srv__PickAndPlace_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
