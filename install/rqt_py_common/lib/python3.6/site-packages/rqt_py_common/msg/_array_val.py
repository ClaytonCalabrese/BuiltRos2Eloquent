# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rqt_py_common:msg/ArrayVal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArrayVal(type):
    """Metaclass of message 'ArrayVal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rqt_py_common')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rqt_py_common.msg.ArrayVal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__array_val
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__array_val
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__array_val
            cls._TYPE_SUPPORT = module.type_support_msg__msg__array_val
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__array_val

            from rqt_py_common.msg import Val
            if Val.__class__._TYPE_SUPPORT is None:
                Val.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArrayVal(metaclass=Metaclass_ArrayVal):
    """Message class 'ArrayVal'."""

    __slots__ = [
        '_vals',
    ]

    _fields_and_field_types = {
        'vals': 'rqt_py_common/Val[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['rqt_py_common', 'msg'], 'Val'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from rqt_py_common.msg import Val
        self.vals = kwargs.get(
            'vals',
            [Val() for x in range(5)]
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.vals != other.vals:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vals(self):
        """Message field 'vals'."""
        return self._vals

    @vals.setter
    def vals(self, value):
        if __debug__:
            from rqt_py_common.msg import Val
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 5 and
                 all(isinstance(v, Val) for v in value) and
                 True), \
                "The 'vals' field must be a set or sequence with length 5 and each value of type 'Val'"
        self._vals = value
