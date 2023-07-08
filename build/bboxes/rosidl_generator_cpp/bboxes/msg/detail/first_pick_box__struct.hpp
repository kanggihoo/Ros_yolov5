// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bboxes:msg/FirstPickBox.idl
// generated code does not contain a copyright notice

#ifndef BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_HPP_
#define BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'color_image'
// Member 'depth_image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bboxes__msg__FirstPickBox __attribute__((deprecated))
#else
# define DEPRECATED__bboxes__msg__FirstPickBox __declspec(deprecated)
#endif

namespace bboxes
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FirstPickBox_
{
  using Type = FirstPickBox_<ContainerAllocator>;

  explicit FirstPickBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color_image(_init),
    depth_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->angle = 0.0f;
      this->class_id = "";
    }
  }

  explicit FirstPickBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color_image(_alloc, _init),
    depth_image(_alloc, _init),
    class_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->angle = 0.0f;
      this->class_id = "";
    }
  }

  // field types and members
  using _color_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _color_image_type color_image;
  using _depth_image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _depth_image_type depth_image;
  using _success_type =
    bool;
  _success_type success;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _center_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _center_type center;
  using _angle_type =
    float;
  _angle_type angle;
  using _class_id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _class_id_type class_id;

  // setters for named parameter idiom
  Type & set__color_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->color_image = _arg;
    return *this;
  }
  Type & set__depth_image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->depth_image = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__center(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }
  Type & set__class_id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->class_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bboxes::msg::FirstPickBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const bboxes::msg::FirstPickBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bboxes::msg::FirstPickBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bboxes::msg::FirstPickBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bboxes__msg__FirstPickBox
    std::shared_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bboxes__msg__FirstPickBox
    std::shared_ptr<bboxes::msg::FirstPickBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirstPickBox_ & other) const
  {
    if (this->color_image != other.color_image) {
      return false;
    }
    if (this->depth_image != other.depth_image) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    if (this->class_id != other.class_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirstPickBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirstPickBox_

// alias to use template instance with default allocator
using FirstPickBox =
  bboxes::msg::FirstPickBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bboxes

#endif  // BBOXES__MSG__DETAIL__FIRST_PICK_BOX__STRUCT_HPP_
