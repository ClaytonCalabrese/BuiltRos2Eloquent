# generated from
# rosidl_typesupport_introspection_c/
#   rosidl_typesupport_introspection_c-extras.cmake.in

# use the same type of library
set(rosidl_typesupport_introspection_c_LIBRARY_TYPE
  "SHARED")

find_package(ament_cmake_core QUIET REQUIRED)
ament_register_extension(
  "rosidl_generate_idl_interfaces"
  "rosidl_typesupport_introspection_c"
  "rosidl_typesupport_introspection_c_generate_interfaces.cmake")

set(rosidl_typesupport_introspection_c_BIN
  "${rosidl_typesupport_introspection_c_DIR}/../../../lib/rosidl_typesupport_introspection_c/rosidl_typesupport_introspection_c")
normalize_path(rosidl_typesupport_introspection_c_BIN
  "${rosidl_typesupport_introspection_c_BIN}")

set(rosidl_typesupport_introspection_c_GENERATOR_FILES
  "${rosidl_typesupport_introspection_c_DIR}/../../../lib/python3.6/site-packages/rosidl_typesupport_introspection_c/__init__.py")
normalize_path(rosidl_typesupport_introspection_c_GENERATOR_FILES
  "${rosidl_typesupport_introspection_c_GENERATOR_FILES}")

set(rosidl_typesupport_introspection_c_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_c_DIR}/../resource")
normalize_path(rosidl_typesupport_introspection_c_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_c_TEMPLATE_DIR}")
