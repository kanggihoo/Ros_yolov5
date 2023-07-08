// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bboxes:srv/ImageFirstPickBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bboxes/srv/detail/image_first_pick_box__rosidl_typesupport_introspection_c.h"
#include "bboxes/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bboxes/srv/detail/image_first_pick_box__functions.h"
#include "bboxes/srv/detail/image_first_pick_box__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bboxes__srv__ImageFirstPickBox_Request__init(message_memory);
}

void ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_fini_function(void * message_memory)
{
  bboxes__srv__ImageFirstPickBox_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_members = {
  "bboxes__srv",  // message namespace
  "ImageFirstPickBox_Request",  // message name
  1,  // number of fields
  sizeof(bboxes__srv__ImageFirstPickBox_Request),
  ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_member_array,  // message members
  ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_type_support_handle = {
  0,
  &ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bboxes
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Request)() {
  if (!ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_type_support_handle.typesupport_identifier) {
    ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageFirstPickBox_Request__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bboxes/srv/detail/image_first_pick_box__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bboxes/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bboxes/srv/detail/image_first_pick_box__functions.h"
// already included above
// #include "bboxes/srv/detail/image_first_pick_box__struct.h"


// Include directives for member types
// Member `color_image`
// Member `depth_image`
#include "sensor_msgs/msg/image.h"
// Member `color_image`
// Member `depth_image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `center`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `class_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bboxes__srv__ImageFirstPickBox_Response__init(message_memory);
}

void ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_fini_function(void * message_memory)
{
  bboxes__srv__ImageFirstPickBox_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_member_array[9] = {
  {
    "color_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, color_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, depth_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "center",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, center),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bboxes__srv__ImageFirstPickBox_Response, class_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_members = {
  "bboxes__srv",  // message namespace
  "ImageFirstPickBox_Response",  // message name
  9,  // number of fields
  sizeof(bboxes__srv__ImageFirstPickBox_Response),
  ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_member_array,  // message members
  ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_type_support_handle = {
  0,
  &ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bboxes
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Response)() {
  ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_type_support_handle.typesupport_identifier) {
    ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ImageFirstPickBox_Response__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bboxes/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bboxes/srv/detail/image_first_pick_box__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_members = {
  "bboxes__srv",  // service namespace
  "ImageFirstPickBox",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_Request_message_type_support_handle,
  NULL  // response message
  // bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_Response_message_type_support_handle
};

static rosidl_service_type_support_t bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_type_support_handle = {
  0,
  &bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bboxes
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox)() {
  if (!bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_type_support_handle.typesupport_identifier) {
    bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bboxes, srv, ImageFirstPickBox_Response)()->data;
  }

  return &bboxes__srv__detail__image_first_pick_box__rosidl_typesupport_introspection_c__ImageFirstPickBox_service_type_support_handle;
}
