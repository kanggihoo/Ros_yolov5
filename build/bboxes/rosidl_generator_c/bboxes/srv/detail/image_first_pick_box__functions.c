// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bboxes:srv/ImageFirstPickBox.idl
// generated code does not contain a copyright notice
#include "bboxes/srv/detail/image_first_pick_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
bboxes__srv__ImageFirstPickBox_Request__init(bboxes__srv__ImageFirstPickBox_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bboxes__srv__ImageFirstPickBox_Request__fini(bboxes__srv__ImageFirstPickBox_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
bboxes__srv__ImageFirstPickBox_Request__are_equal(const bboxes__srv__ImageFirstPickBox_Request * lhs, const bboxes__srv__ImageFirstPickBox_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
bboxes__srv__ImageFirstPickBox_Request__copy(
  const bboxes__srv__ImageFirstPickBox_Request * input,
  bboxes__srv__ImageFirstPickBox_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

bboxes__srv__ImageFirstPickBox_Request *
bboxes__srv__ImageFirstPickBox_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Request * msg = (bboxes__srv__ImageFirstPickBox_Request *)allocator.allocate(sizeof(bboxes__srv__ImageFirstPickBox_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bboxes__srv__ImageFirstPickBox_Request));
  bool success = bboxes__srv__ImageFirstPickBox_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bboxes__srv__ImageFirstPickBox_Request__destroy(bboxes__srv__ImageFirstPickBox_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bboxes__srv__ImageFirstPickBox_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bboxes__srv__ImageFirstPickBox_Request__Sequence__init(bboxes__srv__ImageFirstPickBox_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Request * data = NULL;

  if (size) {
    data = (bboxes__srv__ImageFirstPickBox_Request *)allocator.zero_allocate(size, sizeof(bboxes__srv__ImageFirstPickBox_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bboxes__srv__ImageFirstPickBox_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bboxes__srv__ImageFirstPickBox_Request__fini(&data[i - 1]);
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
bboxes__srv__ImageFirstPickBox_Request__Sequence__fini(bboxes__srv__ImageFirstPickBox_Request__Sequence * array)
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
      bboxes__srv__ImageFirstPickBox_Request__fini(&array->data[i]);
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

bboxes__srv__ImageFirstPickBox_Request__Sequence *
bboxes__srv__ImageFirstPickBox_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Request__Sequence * array = (bboxes__srv__ImageFirstPickBox_Request__Sequence *)allocator.allocate(sizeof(bboxes__srv__ImageFirstPickBox_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bboxes__srv__ImageFirstPickBox_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bboxes__srv__ImageFirstPickBox_Request__Sequence__destroy(bboxes__srv__ImageFirstPickBox_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bboxes__srv__ImageFirstPickBox_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bboxes__srv__ImageFirstPickBox_Request__Sequence__are_equal(const bboxes__srv__ImageFirstPickBox_Request__Sequence * lhs, const bboxes__srv__ImageFirstPickBox_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bboxes__srv__ImageFirstPickBox_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bboxes__srv__ImageFirstPickBox_Request__Sequence__copy(
  const bboxes__srv__ImageFirstPickBox_Request__Sequence * input,
  bboxes__srv__ImageFirstPickBox_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bboxes__srv__ImageFirstPickBox_Request);
    bboxes__srv__ImageFirstPickBox_Request * data =
      (bboxes__srv__ImageFirstPickBox_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bboxes__srv__ImageFirstPickBox_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bboxes__srv__ImageFirstPickBox_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bboxes__srv__ImageFirstPickBox_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `color_image`
// Member `depth_image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `center`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `class_id`
#include "rosidl_runtime_c/string_functions.h"

bool
bboxes__srv__ImageFirstPickBox_Response__init(bboxes__srv__ImageFirstPickBox_Response * msg)
{
  if (!msg) {
    return false;
  }
  // color_image
  if (!sensor_msgs__msg__Image__init(&msg->color_image)) {
    bboxes__srv__ImageFirstPickBox_Response__fini(msg);
    return false;
  }
  // depth_image
  if (!sensor_msgs__msg__Image__init(&msg->depth_image)) {
    bboxes__srv__ImageFirstPickBox_Response__fini(msg);
    return false;
  }
  // success
  // x
  // y
  // z
  // center
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->center, 0)) {
    bboxes__srv__ImageFirstPickBox_Response__fini(msg);
    return false;
  }
  // angle
  // class_id
  if (!rosidl_runtime_c__String__init(&msg->class_id)) {
    bboxes__srv__ImageFirstPickBox_Response__fini(msg);
    return false;
  }
  return true;
}

void
bboxes__srv__ImageFirstPickBox_Response__fini(bboxes__srv__ImageFirstPickBox_Response * msg)
{
  if (!msg) {
    return;
  }
  // color_image
  sensor_msgs__msg__Image__fini(&msg->color_image);
  // depth_image
  sensor_msgs__msg__Image__fini(&msg->depth_image);
  // success
  // x
  // y
  // z
  // center
  rosidl_runtime_c__int32__Sequence__fini(&msg->center);
  // angle
  // class_id
  rosidl_runtime_c__String__fini(&msg->class_id);
}

bool
bboxes__srv__ImageFirstPickBox_Response__are_equal(const bboxes__srv__ImageFirstPickBox_Response * lhs, const bboxes__srv__ImageFirstPickBox_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->color_image), &(rhs->color_image)))
  {
    return false;
  }
  // depth_image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->depth_image), &(rhs->depth_image)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // center
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->center), &(rhs->center)))
  {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // class_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_id), &(rhs->class_id)))
  {
    return false;
  }
  return true;
}

bool
bboxes__srv__ImageFirstPickBox_Response__copy(
  const bboxes__srv__ImageFirstPickBox_Response * input,
  bboxes__srv__ImageFirstPickBox_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // color_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->color_image), &(output->color_image)))
  {
    return false;
  }
  // depth_image
  if (!sensor_msgs__msg__Image__copy(
      &(input->depth_image), &(output->depth_image)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // center
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->center), &(output->center)))
  {
    return false;
  }
  // angle
  output->angle = input->angle;
  // class_id
  if (!rosidl_runtime_c__String__copy(
      &(input->class_id), &(output->class_id)))
  {
    return false;
  }
  return true;
}

bboxes__srv__ImageFirstPickBox_Response *
bboxes__srv__ImageFirstPickBox_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Response * msg = (bboxes__srv__ImageFirstPickBox_Response *)allocator.allocate(sizeof(bboxes__srv__ImageFirstPickBox_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bboxes__srv__ImageFirstPickBox_Response));
  bool success = bboxes__srv__ImageFirstPickBox_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bboxes__srv__ImageFirstPickBox_Response__destroy(bboxes__srv__ImageFirstPickBox_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bboxes__srv__ImageFirstPickBox_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bboxes__srv__ImageFirstPickBox_Response__Sequence__init(bboxes__srv__ImageFirstPickBox_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Response * data = NULL;

  if (size) {
    data = (bboxes__srv__ImageFirstPickBox_Response *)allocator.zero_allocate(size, sizeof(bboxes__srv__ImageFirstPickBox_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bboxes__srv__ImageFirstPickBox_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bboxes__srv__ImageFirstPickBox_Response__fini(&data[i - 1]);
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
bboxes__srv__ImageFirstPickBox_Response__Sequence__fini(bboxes__srv__ImageFirstPickBox_Response__Sequence * array)
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
      bboxes__srv__ImageFirstPickBox_Response__fini(&array->data[i]);
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

bboxes__srv__ImageFirstPickBox_Response__Sequence *
bboxes__srv__ImageFirstPickBox_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__srv__ImageFirstPickBox_Response__Sequence * array = (bboxes__srv__ImageFirstPickBox_Response__Sequence *)allocator.allocate(sizeof(bboxes__srv__ImageFirstPickBox_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bboxes__srv__ImageFirstPickBox_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bboxes__srv__ImageFirstPickBox_Response__Sequence__destroy(bboxes__srv__ImageFirstPickBox_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bboxes__srv__ImageFirstPickBox_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bboxes__srv__ImageFirstPickBox_Response__Sequence__are_equal(const bboxes__srv__ImageFirstPickBox_Response__Sequence * lhs, const bboxes__srv__ImageFirstPickBox_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bboxes__srv__ImageFirstPickBox_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bboxes__srv__ImageFirstPickBox_Response__Sequence__copy(
  const bboxes__srv__ImageFirstPickBox_Response__Sequence * input,
  bboxes__srv__ImageFirstPickBox_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bboxes__srv__ImageFirstPickBox_Response);
    bboxes__srv__ImageFirstPickBox_Response * data =
      (bboxes__srv__ImageFirstPickBox_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bboxes__srv__ImageFirstPickBox_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bboxes__srv__ImageFirstPickBox_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bboxes__srv__ImageFirstPickBox_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
