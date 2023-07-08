// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice
#include "bboxes/msg/detail/first_pick_box__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color_image`
// Member `depth_image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `center`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `class_id`
#include "rosidl_runtime_c/string_functions.h"

bool
bboxes__msg__FirstPickBox__init(bboxes__msg__FirstPickBox * msg)
{
  if (!msg) {
    return false;
  }
  // color_image
  if (!sensor_msgs__msg__Image__init(&msg->color_image)) {
    bboxes__msg__FirstPickBox__fini(msg);
    return false;
  }
  // depth_image
  if (!sensor_msgs__msg__Image__init(&msg->depth_image)) {
    bboxes__msg__FirstPickBox__fini(msg);
    return false;
  }
  // success
  // x
  // y
  // z
  // center
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->center, 0)) {
    bboxes__msg__FirstPickBox__fini(msg);
    return false;
  }
  // angle
  // class_id
  if (!rosidl_runtime_c__String__init(&msg->class_id)) {
    bboxes__msg__FirstPickBox__fini(msg);
    return false;
  }
  return true;
}

void
bboxes__msg__FirstPickBox__fini(bboxes__msg__FirstPickBox * msg)
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
bboxes__msg__FirstPickBox__are_equal(const bboxes__msg__FirstPickBox * lhs, const bboxes__msg__FirstPickBox * rhs)
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
bboxes__msg__FirstPickBox__copy(
  const bboxes__msg__FirstPickBox * input,
  bboxes__msg__FirstPickBox * output)
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

bboxes__msg__FirstPickBox *
bboxes__msg__FirstPickBox__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__msg__FirstPickBox * msg = (bboxes__msg__FirstPickBox *)allocator.allocate(sizeof(bboxes__msg__FirstPickBox), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bboxes__msg__FirstPickBox));
  bool success = bboxes__msg__FirstPickBox__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bboxes__msg__FirstPickBox__destroy(bboxes__msg__FirstPickBox * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bboxes__msg__FirstPickBox__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bboxes__msg__FirstPickBox__Sequence__init(bboxes__msg__FirstPickBox__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__msg__FirstPickBox * data = NULL;

  if (size) {
    data = (bboxes__msg__FirstPickBox *)allocator.zero_allocate(size, sizeof(bboxes__msg__FirstPickBox), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bboxes__msg__FirstPickBox__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bboxes__msg__FirstPickBox__fini(&data[i - 1]);
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
bboxes__msg__FirstPickBox__Sequence__fini(bboxes__msg__FirstPickBox__Sequence * array)
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
      bboxes__msg__FirstPickBox__fini(&array->data[i]);
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

bboxes__msg__FirstPickBox__Sequence *
bboxes__msg__FirstPickBox__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bboxes__msg__FirstPickBox__Sequence * array = (bboxes__msg__FirstPickBox__Sequence *)allocator.allocate(sizeof(bboxes__msg__FirstPickBox__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bboxes__msg__FirstPickBox__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bboxes__msg__FirstPickBox__Sequence__destroy(bboxes__msg__FirstPickBox__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bboxes__msg__FirstPickBox__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bboxes__msg__FirstPickBox__Sequence__are_equal(const bboxes__msg__FirstPickBox__Sequence * lhs, const bboxes__msg__FirstPickBox__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bboxes__msg__FirstPickBox__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bboxes__msg__FirstPickBox__Sequence__copy(
  const bboxes__msg__FirstPickBox__Sequence * input,
  bboxes__msg__FirstPickBox__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bboxes__msg__FirstPickBox);
    bboxes__msg__FirstPickBox * data =
      (bboxes__msg__FirstPickBox *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bboxes__msg__FirstPickBox__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          bboxes__msg__FirstPickBox__fini(&data[i]);
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
    if (!bboxes__msg__FirstPickBox__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
