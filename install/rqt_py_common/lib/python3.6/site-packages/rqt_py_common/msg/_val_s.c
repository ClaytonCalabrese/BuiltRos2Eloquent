// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rqt_py_common:msg/Val.idl
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
#include "rqt_py_common/msg/val__struct.h"
#include "rqt_py_common/msg/val__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rqt_py_common__msg__val__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[27];
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
        "rqt_py_common.msg._val.Val",
        full_classname_dest, 26) == 0);
  }
  rqt_py_common__msg__Val * ros_message = _ros_message;
  {  // floats
    PyObject * field = PyObject_GetAttrString(_pymsg, "floats");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    Py_ssize_t size = 5;
    double * dest = ros_message->floats;
    for (Py_ssize_t i = 0; i < size; ++i) {
      double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(double));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rqt_py_common__msg__val__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Val */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rqt_py_common.msg._val");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Val");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rqt_py_common__msg__Val * ros_message = (rqt_py_common__msg__Val *)raw_ros_message;
  {  // floats
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "floats");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->floats[0]);
    memcpy(dst, src, 5 * sizeof(double));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
