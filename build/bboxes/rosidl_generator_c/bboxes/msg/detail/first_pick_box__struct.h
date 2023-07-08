// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_H_
#define BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color_image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'center'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'class_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/FirstPickBox in the package bboxes.
typedef struct bboxes__msg__FirstPickBox
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
} bboxes__msg__FirstPickBox;

// Struct for a sequence of bboxes__msg__FirstPickBox.
typedef struct bboxes__msg__FirstPickBox__Sequence
{
  bboxes__msg__FirstPickBox * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bboxes__msg__FirstPickBox__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_H_
