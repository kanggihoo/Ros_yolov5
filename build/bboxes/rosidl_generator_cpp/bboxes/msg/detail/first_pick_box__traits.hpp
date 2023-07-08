// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__MSG__DETAIL__FIRST_PICK_BOX__TRAITS_HPP_
#define BBOXES__MSG__DETAIL__FIRST_PICK_BOX__TRAITS_HPP_

#include "bboxes/msg/detail/first_pick_box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'color_image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bboxes::msg::FirstPickBox>()
{
  return "bboxes::msg::FirstPickBox";
}

template<>
inline const char * name<bboxes::msg::FirstPickBox>()
{
  return "bboxes/msg/FirstPickBox";
}

template<>
struct has_fixed_size<bboxes::msg::FirstPickBox>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bboxes::msg::FirstPickBox>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bboxes::msg::FirstPickBox>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BBOXES__MSG__DETAIL__FIRST_PICK_BOX__TRAITS_HPP_
