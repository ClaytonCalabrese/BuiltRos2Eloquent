# generated from rosidl_generator_py/resource/_idl.py.em
# with input from test_communication:msg/FieldsWithSameType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldsWithSameType(type):
    """Metaclass of message 'FieldsWithSameType'."""

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
            module = import_type_support('test_communication')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'test_communication.msg.FieldsWithSameType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fields_with_same_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fields_with_same_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fields_with_same_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fields_with_same_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fields_with_same_type

            from test_msgs.msg import BasicTypes
            if BasicTypes.__class__._TYPE_SUPPORT is None:
                BasicTypes.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldsWithSameType(metaclass=Metaclass_FieldsWithSameType):
    """Message class 'FieldsWithSameType'."""

    __slots__ = [
        '_basic_types_values1',
        '_basic_types_values2',
    ]

    _fields_and_field_types = {
        'basic_types_values1': 'test_msgs/BasicTypes',
        'basic_types_values2': 'test_msgs/BasicTypes',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BasicTypes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['test_msgs', 'msg'], 'BasicTypes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from test_msgs.msg import BasicTypes
        self.basic_types_values1 = kwargs.get('basic_types_values1', BasicTypes())
        from test_msgs.msg import BasicTypes
        self.basic_types_values2 = kwargs.get('basic_types_values2', BasicTypes())

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
        if self.basic_types_values1 != other.basic_types_values1:
            return False
        if self.basic_types_values2 != other.basic_types_values2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def basic_types_values1(self):
        """Message field 'basic_types_values1'."""
        return self._basic_types_values1

    @basic_types_values1.setter
    def basic_types_values1(self, value):
        if __debug__:
            from test_msgs.msg import BasicTypes
            assert \
                isinstance(value, BasicTypes), \
                "The 'basic_types_values1' field must be a sub message of type 'BasicTypes'"
        self._basic_types_values1 = value

    @property
    def basic_types_values2(self):
        """Message field 'basic_types_values2'."""
        return self._basic_types_values2

    @basic_types_values2.setter
    def basic_types_values2(self, value):
        if __debug__:
            from test_msgs.msg import BasicTypes
            assert \
                isinstance(value, BasicTypes), \
                "The 'basic_types_values2' field must be a sub message of type 'BasicTypes'"
        self._basic_types_values2 = value
