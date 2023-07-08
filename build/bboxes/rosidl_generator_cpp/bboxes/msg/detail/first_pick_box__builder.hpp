// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__MSG__DETAIL__FIRST_PICK_BOX__BUILDER_HPP_
#define BBOXES__MSG__DETAIL__FIRST_PICK_BOX__BUILDER_HPP_

#include "bboxes/msg/detail/first_pick_box__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bboxes
{

namespace msg
{

namespace builder
{

class Init_FirstPickBox_class_id
{
public:
  explicit Init_FirstPickBox_class_id(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  ::bboxes::msg::FirstPickBox class_id(::bboxes::msg::FirstPickBox::_class_id_type arg)
  {
    msg_.class_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_angle
{
public:
  explicit Init_FirstPickBox_angle(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_class_id angle(::bboxes::msg::FirstPickBox::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_FirstPickBox_class_id(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_center
{
public:
  explicit Init_FirstPickBox_center(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_angle center(::bboxes::msg::FirstPickBox::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_FirstPickBox_angle(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_z
{
public:
  explicit Init_FirstPickBox_z(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_center z(::bboxes::msg::FirstPickBox::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_FirstPickBox_center(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_y
{
public:
  explicit Init_FirstPickBox_y(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_z y(::bboxes::msg::FirstPickBox::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FirstPickBox_z(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_x
{
public:
  explicit Init_FirstPickBox_x(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_y x(::bboxes::msg::FirstPickBox::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FirstPickBox_y(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_success
{
public:
  explicit Init_FirstPickBox_success(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_x success(::bboxes::msg::FirstPickBox::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FirstPickBox_x(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_depth_image
{
public:
  explicit Init_FirstPickBox_depth_image(::bboxes::msg::FirstPickBox & msg)
  : msg_(msg)
  {}
  Init_FirstPickBox_success depth_image(::bboxes::msg::FirstPickBox::_depth_image_type arg)
  {
    msg_.depth_image = std::move(arg);
    return Init_FirstPickBox_success(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

class Init_FirstPickBox_color_image
{
public:
  Init_FirstPickBox_color_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirstPickBox_depth_image color_image(::bboxes::msg::FirstPickBox::_color_image_type arg)
  {
    msg_.color_image = std::move(arg);
    return Init_FirstPickBox_depth_image(msg_);
  }

private:
  ::bboxes::msg::FirstPickBox msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bboxes::msg::FirstPickBox>()
{
  return bboxes::msg::builder::Init_FirstPickBox_color_image();
}

}  // namespace bboxes

#endif  // BBOXES__MSG__DETAIL__FIRST_PICK_BOX__BUILDER_HPP_
