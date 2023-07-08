// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__MSG__DETAIL__FIRST_PICK_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BBOXES__MSG__DETAIL__FIRST_PICK_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "bboxes/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "bboxes/msg/detail/first_pick_box__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace bboxes
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bboxes
cdr_serialize(
  const bboxes::msg::FirstPickBox & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bboxes
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  bboxes::msg::FirstPickBox & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bboxes
get_serialized_size(
  const bboxes::msg::FirstPickBox & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bboxes
max_serialized_size_FirstPickBox(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace bboxes

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_bboxes
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, bboxes, msg, FirstPickBox)();

#ifdef __cplusplus
}
#endif

#endif  // BBOXES__MSG__DETAIL__FIRST_PICK_BOX__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
