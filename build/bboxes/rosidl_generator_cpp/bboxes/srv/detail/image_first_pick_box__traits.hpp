// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bboxes:srv/ImageFirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__TRAITS_HPP_
#define BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__TRAITS_HPP_

#include "bboxes/srv/detail/image_first_pick_box__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bboxes::srv::ImageFirstPickBox_Request>()
{
  return "bboxes::srv::ImageFirstPickBox_Request";
}

template<>
inline const char * name<bboxes::srv::ImageFirstPickBox_Request>()
{
  return "bboxes/srv/ImageFirstPickBox_Request";
}

template<>
struct has_fixed_size<bboxes::srv::ImageFirstPickBox_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bboxes::srv::ImageFirstPickBox_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bboxes::srv::ImageFirstPickBox_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'color_image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bboxes::srv::ImageFirstPickBox_Response>()
{
  return "bboxes::srv::ImageFirstPickBox_Response";
}

template<>
inline const char * name<bboxes::srv::ImageFirstPickBox_Response>()
{
  return "bboxes/srv/ImageFirstPickBox_Response";
}

template<>
struct has_fixed_size<bboxes::srv::ImageFirstPickBox_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bboxes::srv::ImageFirstPickBox_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bboxes::srv::ImageFirstPickBox_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bboxes::srv::ImageFirstPickBox>()
{
  return "bboxes::srv::ImageFirstPickBox";
}

template<>
inline const char * name<bboxes::srv::ImageFirstPickBox>()
{
  return "bboxes/srv/ImageFirstPickBox";
}

template<>
struct has_fixed_size<bboxes::srv::ImageFirstPickBox>
  : std::integral_constant<
    bool,
    has_fixed_size<bboxes::srv::ImageFirstPickBox_Request>::value &&
    has_fixed_size<bboxes::srv::ImageFirstPickBox_Response>::value
  >
{
};

template<>
struct has_bounded_size<bboxes::srv::ImageFirstPickBox>
  : std::integral_constant<
    bool,
    has_bounded_size<bboxes::srv::ImageFirstPickBox_Request>::value &&
    has_bounded_size<bboxes::srv::ImageFirstPickBox_Response>::value
  >
{
};

template<>
struct is_service<bboxes::srv::ImageFirstPickBox>
  : std::true_type
{
};

template<>
struct is_service_request<bboxes::srv::ImageFirstPickBox_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bboxes::srv::ImageFirstPickBox_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__TRAITS_HPP_
