// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bboxes:srv/ImageFirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__BUILDER_HPP_
#define BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__BUILDER_HPP_

#include "bboxes/srv/detail/image_first_pick_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bboxes
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes::srv::ImageFirstPickBox_Request>()
{
  return ::bboxes::srv::ImageFirstPickBox_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bboxes


namespace bboxes
{

namespace srv
{

namespace builder
{

class Init_ImageFirstPickBox_Response_class_id
{
public:
  explicit Init_ImageFirstPickBox_Response_class_id(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  ::bboxes::srv::ImageFirstPickBox_Response class_id(::bboxes::srv::ImageFirstPickBox_Response::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_angle
{
public:
  explicit Init_ImageFirstPickBox_Response_angle(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_class_id angle(::bboxes::srv::ImageFirstPickBox_Response::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_ImageFirstPickBox_Response_class_id(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_center
{
public:
  explicit Init_ImageFirstPickBox_Response_center(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_angle center(::bboxes::srv::ImageFirstPickBox_Response::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_ImageFirstPickBox_Response_angle(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_z
{
public:
  explicit Init_ImageFirstPickBox_Response_z(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_center z(::bboxes::srv::ImageFirstPickBox_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ImageFirstPickBox_Response_center(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_y
{
public:
  explicit Init_ImageFirstPickBox_Response_y(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_z y(::bboxes::srv::ImageFirstPickBox_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ImageFirstPickBox_Response_z(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_x
{
public:
  explicit Init_ImageFirstPickBox_Response_x(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_y x(::bboxes::srv::ImageFirstPickBox_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ImageFirstPickBox_Response_y(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_success
{
public:
  explicit Init_ImageFirstPickBox_Response_success(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_x success(::bboxes::srv::ImageFirstPickBox_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ImageFirstPickBox_Response_x(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_depth_image
{
public:
  explicit Init_ImageFirstPickBox_Response_depth_image(::bboxes::srv::ImageFirstPickBox_Response & msg)
  : msg_(msg)
  {}
  Init_ImageFirstPickBox_Response_success depth_image(::bboxes::srv::ImageFirstPickBox_Response::_depth_image_type arg)
  {
    msg_.depth_image = std::move(arg);
    return Init_ImageFirstPickBox_Response_success(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

class Init_ImageFirstPickBox_Response_color_image
{
public:
  Init_ImageFirstPickBox_Response_color_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageFirstPickBox_Response_depth_image color_image(::bboxes::srv::ImageFirstPickBox_Response::_color_image_type arg)
  {
    msg_.color_image = std::move(arg);
    return Init_ImageFirstPickBox_Response_depth_image(msg_);
  }

private:
  ::bboxes::srv::ImageFirstPickBox_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes::srv::ImageFirstPickBox_Response>()
{
  return bboxes::srv::builder::Init_ImageFirstPickBox_Response_color_image();
}

}  // namespace bboxes

#endif  // BBOXES__SRV__DETAIL__IMAGE_FIRST_PICK_BOX__BUILDER_HPP_
