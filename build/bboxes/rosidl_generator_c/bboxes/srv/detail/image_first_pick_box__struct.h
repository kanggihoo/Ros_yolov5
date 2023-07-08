// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bboxes:srv/ImageFirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__STRUCT_H_
#define BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ImageFirstPickBox in the package bboxes.
typedef struct bboxes__srv__ImageFirstPickBox_Request
{
  uint8_t structure_needs_at_least_one_member;
} bboxes__srv__ImageFirstPickBox_Request;

// Struct for a sequence of bboxes__srv__ImageFirstPickBox_Request.
typedef struct bboxes__srv__ImageFirstPickBox_Request__Sequence
{
  bboxes__srv__ImageFirstPickBox_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bboxes__srv__ImageFirstPickBox_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'color_image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'center'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'class_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ImageFirstPickBox in the package bboxes.
typedef struct bboxes__srv__ImageFirstPickBox_Response
{
  sensor_msgs__msg__Image color_image;
  sensor_msgs__msg__Image depth_image;
  bool success;
  float x;
  float y;
  float z;
  rosidl_runtime_c__int32__Sequence center;
  float angle;
  rosidl_runtime_c__String class_id;
} bboxes__srv__ImageFirstPickBox_Response;

// Struct for a sequence of bboxes__srv__ImageFirstPickBox_Response.
typedef struct bboxes__srv__ImageFirstPickBox_Response__Sequence
{
  bboxes__srv__ImageFirstPickBox_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bboxes__srv__ImageFirstPickBox_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__STRUCT_H_
