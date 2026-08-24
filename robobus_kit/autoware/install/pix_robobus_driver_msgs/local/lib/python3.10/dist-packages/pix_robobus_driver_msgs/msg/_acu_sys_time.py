# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/AcuSysTime.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AcuSysTime(type):
    """Metaclass of message 'AcuSysTime'."""

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
            module = import_type_support('pix_robobus_driver_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'pix_robobus_driver_msgs.msg.AcuSysTime')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__acu_sys_time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__acu_sys_time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__acu_sys_time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__acu_sys_time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__acu_sys_time

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AcuSysTime(metaclass=Metaclass_AcuSysTime):
    """Message class 'AcuSysTime'."""

    __slots__ = [
        '_header',
        '_sys_time_year',
        '_sys_time_month',
        '_sys_time_day',
        '_sys_time_hour',
        '_sys_time_minute',
        '_sys_time_second',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sys_time_year': 'int32',
        'sys_time_month': 'int32',
        'sys_time_day': 'int32',
        'sys_time_hour': 'int32',
        'sys_time_minute': 'int32',
        'sys_time_second': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sys_time_year = kwargs.get('sys_time_year', int())
        self.sys_time_month = kwargs.get('sys_time_month', int())
        self.sys_time_day = kwargs.get('sys_time_day', int())
        self.sys_time_hour = kwargs.get('sys_time_hour', int())
        self.sys_time_minute = kwargs.get('sys_time_minute', int())
        self.sys_time_second = kwargs.get('sys_time_second', int())

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
        if self.header != other.header:
            return False
        if self.sys_time_year != other.sys_time_year:
            return False
        if self.sys_time_month != other.sys_time_month:
            return False
        if self.sys_time_day != other.sys_time_day:
            return False
        if self.sys_time_hour != other.sys_time_hour:
            return False
        if self.sys_time_minute != other.sys_time_minute:
            return False
        if self.sys_time_second != other.sys_time_second:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sys_time_year(self):
        """Message field 'sys_time_year'."""
        return self._sys_time_year

    @sys_time_year.setter
    def sys_time_year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_year' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_year' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_year = value

    @builtins.property
    def sys_time_month(self):
        """Message field 'sys_time_month'."""
        return self._sys_time_month

    @sys_time_month.setter
    def sys_time_month(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_month' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_month' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_month = value

    @builtins.property
    def sys_time_day(self):
        """Message field 'sys_time_day'."""
        return self._sys_time_day

    @sys_time_day.setter
    def sys_time_day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_day' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_day' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_day = value

    @builtins.property
    def sys_time_hour(self):
        """Message field 'sys_time_hour'."""
        return self._sys_time_hour

    @sys_time_hour.setter
    def sys_time_hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_hour' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_hour' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_hour = value

    @builtins.property
    def sys_time_minute(self):
        """Message field 'sys_time_minute'."""
        return self._sys_time_minute

    @sys_time_minute.setter
    def sys_time_minute(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_minute' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_minute' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_minute = value

    @builtins.property
    def sys_time_second(self):
        """Message field 'sys_time_second'."""
        return self._sys_time_second

    @sys_time_second.setter
    def sys_time_second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sys_time_second' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sys_time_second' field must be an integer in [-2147483648, 2147483647]"
        self._sys_time_second = value
