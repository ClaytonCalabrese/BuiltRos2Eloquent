# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rosidl_generator_py:msg/StringArrays.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StringArrays(type):
    """Metaclass of message 'StringArrays'."""

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
            module = import_type_support('rosidl_generator_py')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rosidl_generator_py.msg.StringArrays')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__string_arrays
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__string_arrays
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__string_arrays
            cls._TYPE_SUPPORT = module.type_support_msg__msg__string_arrays
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__string_arrays

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEF_STRING_DYNAMIC_ARRAY_VALUE__DEFAULT': ['What', 'a', 'wonderful', 'world', '!'],
            'DEF_STRING_STATIC_ARRAY_VALUE__DEFAULT': ['Hello', 'World', '!'],
            'DEF_STRING_BOUNDED_ARRAY_VALUE__DEFAULT': ['Hello', 'World', '!'],
            'DEF_VARIOUS_QUOTES__DEFAULT': ['H"el\'lo', 'Wo\'r"ld'],
            'DEF_VARIOUS_COMMAS__DEFAULT': ['Hel,lo', ',World', 'abcd', '!,'],
        }

    @property
    def DEF_STRING_DYNAMIC_ARRAY_VALUE__DEFAULT(cls):
        """Return default value for message field 'def_string_dynamic_array_value'."""
        return ['What', 'a', 'wonderful', 'world', '!']

    @property
    def DEF_STRING_STATIC_ARRAY_VALUE__DEFAULT(cls):
        """Return default value for message field 'def_string_static_array_value'."""
        return ['Hello', 'World', '!']

    @property
    def DEF_STRING_BOUNDED_ARRAY_VALUE__DEFAULT(cls):
        """Return default value for message field 'def_string_bounded_array_value'."""
        return ['Hello', 'World', '!']

    @property
    def DEF_VARIOUS_QUOTES__DEFAULT(cls):
        """Return default value for message field 'def_various_quotes'."""
        return ['H"el\'lo', 'Wo\'r"ld']

    @property
    def DEF_VARIOUS_COMMAS__DEFAULT(cls):
        """Return default value for message field 'def_various_commas'."""
        return ['Hel,lo', ',World', 'abcd', '!,']


class StringArrays(metaclass=Metaclass_StringArrays):
    """Message class 'StringArrays'."""

    __slots__ = [
        '_ub_string_static_array_value',
        '_ub_string_ub_array_value',
        '_ub_string_dynamic_array_value',
        '_string_dynamic_array_value',
        '_string_static_array_value',
        '_string_bounded_array_value',
        '_def_string_dynamic_array_value',
        '_def_string_static_array_value',
        '_def_string_bounded_array_value',
        '_def_various_quotes',
        '_def_various_commas',
    ]

    _fields_and_field_types = {
        'ub_string_static_array_value': 'string<5>[3]',
        'ub_string_ub_array_value': 'sequence<string<5>, 10>',
        'ub_string_dynamic_array_value': 'sequence<string<5>>',
        'string_dynamic_array_value': 'sequence<string>',
        'string_static_array_value': 'string[3]',
        'string_bounded_array_value': 'sequence<string, 10>',
        'def_string_dynamic_array_value': 'sequence<string>',
        'def_string_static_array_value': 'string[3]',
        'def_string_bounded_array_value': 'sequence<string, 10>',
        'def_various_quotes': 'sequence<string>',
        'def_various_commas': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BoundedString(5), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.BoundedString(5), 10),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BoundedString(5)),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.UnboundedString(), 10),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 3),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.UnboundedString(), 10),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ub_string_static_array_value = kwargs.get(
            'ub_string_static_array_value',
            [str() for x in range(3)]
        )
        self.ub_string_ub_array_value = kwargs.get('ub_string_ub_array_value', [])
        self.ub_string_dynamic_array_value = kwargs.get('ub_string_dynamic_array_value', [])
        self.string_dynamic_array_value = kwargs.get('string_dynamic_array_value', [])
        self.string_static_array_value = kwargs.get(
            'string_static_array_value',
            [str() for x in range(3)]
        )
        self.string_bounded_array_value = kwargs.get('string_bounded_array_value', [])
        self.def_string_dynamic_array_value = kwargs.get(
            'def_string_dynamic_array_value', StringArrays.DEF_STRING_DYNAMIC_ARRAY_VALUE__DEFAULT)
        self.def_string_static_array_value = kwargs.get(
            'def_string_static_array_value', StringArrays.DEF_STRING_STATIC_ARRAY_VALUE__DEFAULT)
        self.def_string_bounded_array_value = kwargs.get(
            'def_string_bounded_array_value', StringArrays.DEF_STRING_BOUNDED_ARRAY_VALUE__DEFAULT)
        self.def_various_quotes = kwargs.get(
            'def_various_quotes', StringArrays.DEF_VARIOUS_QUOTES__DEFAULT)
        self.def_various_commas = kwargs.get(
            'def_various_commas', StringArrays.DEF_VARIOUS_COMMAS__DEFAULT)

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
        if self.ub_string_static_array_value != other.ub_string_static_array_value:
            return False
        if self.ub_string_ub_array_value != other.ub_string_ub_array_value:
            return False
        if self.ub_string_dynamic_array_value != other.ub_string_dynamic_array_value:
            return False
        if self.string_dynamic_array_value != other.string_dynamic_array_value:
            return False
        if self.string_static_array_value != other.string_static_array_value:
            return False
        if self.string_bounded_array_value != other.string_bounded_array_value:
            return False
        if self.def_string_dynamic_array_value != other.def_string_dynamic_array_value:
            return False
        if self.def_string_static_array_value != other.def_string_static_array_value:
            return False
        if self.def_string_bounded_array_value != other.def_string_bounded_array_value:
            return False
        if self.def_various_quotes != other.def_various_quotes:
            return False
        if self.def_various_commas != other.def_various_commas:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def ub_string_static_array_value(self):
        """Message field 'ub_string_static_array_value'."""
        return self._ub_string_static_array_value

    @ub_string_static_array_value.setter
    def ub_string_static_array_value(self, value):
        if __debug__:
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
                 all(len(val) <= 5 for val in value) and
                 len(value) == 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'ub_string_static_array_value' field must be a set or sequence with length 3 and each string value not longer than 5 and each value of type 'str'"
        self._ub_string_static_array_value = value

    @property
    def ub_string_ub_array_value(self):
        """Message field 'ub_string_ub_array_value'."""
        return self._ub_string_ub_array_value

    @ub_string_ub_array_value.setter
    def ub_string_ub_array_value(self, value):
        if __debug__:
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
                 all(len(val) <= 5 for val in value) and
                 len(value) <= 10 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'ub_string_ub_array_value' field must be a set or sequence with length <= 10 and each string value not longer than 5 and each value of type 'str'"
        self._ub_string_ub_array_value = value

    @property
    def ub_string_dynamic_array_value(self):
        """Message field 'ub_string_dynamic_array_value'."""
        return self._ub_string_dynamic_array_value

    @ub_string_dynamic_array_value.setter
    def ub_string_dynamic_array_value(self, value):
        if __debug__:
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
                 all(len(val) <= 5 for val in value) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'ub_string_dynamic_array_value' field must be a set or sequence and each string value not longer than 5 and each value of type 'str'"
        self._ub_string_dynamic_array_value = value

    @property
    def string_dynamic_array_value(self):
        """Message field 'string_dynamic_array_value'."""
        return self._string_dynamic_array_value

    @string_dynamic_array_value.setter
    def string_dynamic_array_value(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_dynamic_array_value' field must be a set or sequence and each value of type 'str'"
        self._string_dynamic_array_value = value

    @property
    def string_static_array_value(self):
        """Message field 'string_static_array_value'."""
        return self._string_static_array_value

    @string_static_array_value.setter
    def string_static_array_value(self, value):
        if __debug__:
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
                 len(value) == 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_static_array_value' field must be a set or sequence with length 3 and each value of type 'str'"
        self._string_static_array_value = value

    @property
    def string_bounded_array_value(self):
        """Message field 'string_bounded_array_value'."""
        return self._string_bounded_array_value

    @string_bounded_array_value.setter
    def string_bounded_array_value(self, value):
        if __debug__:
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
                 len(value) <= 10 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'string_bounded_array_value' field must be a set or sequence with length <= 10 and each value of type 'str'"
        self._string_bounded_array_value = value

    @property
    def def_string_dynamic_array_value(self):
        """Message field 'def_string_dynamic_array_value'."""
        return self._def_string_dynamic_array_value

    @def_string_dynamic_array_value.setter
    def def_string_dynamic_array_value(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'def_string_dynamic_array_value' field must be a set or sequence and each value of type 'str'"
        self._def_string_dynamic_array_value = value

    @property
    def def_string_static_array_value(self):
        """Message field 'def_string_static_array_value'."""
        return self._def_string_static_array_value

    @def_string_static_array_value.setter
    def def_string_static_array_value(self, value):
        if __debug__:
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
                 len(value) == 3 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'def_string_static_array_value' field must be a set or sequence with length 3 and each value of type 'str'"
        self._def_string_static_array_value = value

    @property
    def def_string_bounded_array_value(self):
        """Message field 'def_string_bounded_array_value'."""
        return self._def_string_bounded_array_value

    @def_string_bounded_array_value.setter
    def def_string_bounded_array_value(self, value):
        if __debug__:
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
                 len(value) <= 10 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'def_string_bounded_array_value' field must be a set or sequence with length <= 10 and each value of type 'str'"
        self._def_string_bounded_array_value = value

    @property
    def def_various_quotes(self):
        """Message field 'def_various_quotes'."""
        return self._def_various_quotes

    @def_various_quotes.setter
    def def_various_quotes(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'def_various_quotes' field must be a set or sequence and each value of type 'str'"
        self._def_various_quotes = value

    @property
    def def_various_commas(self):
        """Message field 'def_various_commas'."""
        return self._def_various_commas

    @def_various_commas.setter
    def def_various_commas(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'def_various_commas' field must be a set or sequence and each value of type 'str'"
        self._def_various_commas = value
