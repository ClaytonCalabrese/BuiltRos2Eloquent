// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rosidl_generator_py:msg/StringArrays.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "rosidl_generator_py/msg/string_arrays__struct.h"
#include "rosidl_generator_py/msg/string_arrays__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"
#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rosidl_generator_py__msg__string_arrays__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "rosidl_generator_py.msg._string_arrays.StringArrays",
        full_classname_dest, 51) == 0);
  }
  rosidl_generator_py__msg__StringArrays * ros_message = _ros_message;
  {  // ub_string_static_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "ub_string_static_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ub_string_static_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    rosidl_generator_c__String * dest = ros_message->ub_string_static_array_value;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ub_string_ub_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "ub_string_ub_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ub_string_ub_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->ub_string_ub_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->ub_string_ub_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ub_string_dynamic_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "ub_string_dynamic_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ub_string_dynamic_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->ub_string_dynamic_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->ub_string_dynamic_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // string_dynamic_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_dynamic_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_dynamic_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->string_dynamic_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->string_dynamic_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // string_static_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_static_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_static_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    rosidl_generator_c__String * dest = ros_message->string_static_array_value;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // string_bounded_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "string_bounded_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'string_bounded_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->string_bounded_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->string_bounded_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // def_string_dynamic_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "def_string_dynamic_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'def_string_dynamic_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->def_string_dynamic_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->def_string_dynamic_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // def_string_static_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "def_string_static_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'def_string_static_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 3;
    rosidl_generator_c__String * dest = ros_message->def_string_static_array_value;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // def_string_bounded_array_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "def_string_bounded_array_value");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'def_string_bounded_array_value'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->def_string_bounded_array_value), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->def_string_bounded_array_value.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // def_various_quotes
    PyObject * field = PyObject_GetAttrString(_pymsg, "def_various_quotes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'def_various_quotes'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->def_various_quotes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->def_various_quotes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // def_various_commas
    PyObject * field = PyObject_GetAttrString(_pymsg, "def_various_commas");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'def_various_commas'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!rosidl_generator_c__String__Sequence__init(&(ros_message->def_various_commas), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String * dest = ros_message->def_various_commas.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
      if (!item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      assert(PyUnicode_Check(item));
      PyObject * encoded_item = PyUnicode_AsUTF8String(item);
      if (!encoded_item) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_generator_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
      Py_DECREF(encoded_item);
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rosidl_generator_py__msg__string_arrays__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StringArrays */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rosidl_generator_py.msg._string_arrays");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StringArrays");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rosidl_generator_py__msg__StringArrays * ros_message = (rosidl_generator_py__msg__StringArrays *)raw_ros_message;
  {  // ub_string_static_array_value
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_generator_c__String * src = ros_message->ub_string_static_array_value;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ub_string_static_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ub_string_ub_array_value
    PyObject * field = NULL;
    size_t size = ros_message->ub_string_ub_array_value.size;
    rosidl_generator_c__String * src = ros_message->ub_string_ub_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ub_string_ub_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ub_string_dynamic_array_value
    PyObject * field = NULL;
    size_t size = ros_message->ub_string_dynamic_array_value.size;
    rosidl_generator_c__String * src = ros_message->ub_string_dynamic_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ub_string_dynamic_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_dynamic_array_value
    PyObject * field = NULL;
    size_t size = ros_message->string_dynamic_array_value.size;
    rosidl_generator_c__String * src = ros_message->string_dynamic_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_dynamic_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_static_array_value
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_generator_c__String * src = ros_message->string_static_array_value;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_static_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // string_bounded_array_value
    PyObject * field = NULL;
    size_t size = ros_message->string_bounded_array_value.size;
    rosidl_generator_c__String * src = ros_message->string_bounded_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "string_bounded_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // def_string_dynamic_array_value
    PyObject * field = NULL;
    size_t size = ros_message->def_string_dynamic_array_value.size;
    rosidl_generator_c__String * src = ros_message->def_string_dynamic_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "def_string_dynamic_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // def_string_static_array_value
    PyObject * field = NULL;
    size_t size = 3;
    rosidl_generator_c__String * src = ros_message->def_string_static_array_value;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "def_string_static_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // def_string_bounded_array_value
    PyObject * field = NULL;
    size_t size = ros_message->def_string_bounded_array_value.size;
    rosidl_generator_c__String * src = ros_message->def_string_bounded_array_value.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "def_string_bounded_array_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // def_various_quotes
    PyObject * field = NULL;
    size_t size = ros_message->def_various_quotes.size;
    rosidl_generator_c__String * src = ros_message->def_various_quotes.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "def_various_quotes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // def_various_commas
    PyObject * field = NULL;
    size_t size = ros_message->def_various_commas.size;
    rosidl_generator_c__String * src = ros_message->def_various_commas.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "strict");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "def_various_commas", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
