# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaVcuSofver.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaVcuSofver(type):
    """Metaclass of message 'VaVcuSofver'."""

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
                'pix_robobus_driver_msgs.msg.VaVcuSofver')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_vcu_sofver
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_vcu_sofver
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_vcu_sofver
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_vcu_sofver
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_vcu_sofver

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


class VaVcuSofver(metaclass=Metaclass_VaVcuSofver):
    """Message class 'VaVcuSofver'."""

    __slots__ = [
        '_header',
        '_version_year',
        '_version_month',
        '_version_day',
        '_version_main',
        '_version_sub',
        '_version_patch',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'version_year': 'int32',
        'version_month': 'int32',
        'version_day': 'int32',
        'version_main': 'int32',
        'version_sub': 'int32',
        'version_patch': 'int32',
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
        self.version_year = kwargs.get('version_year', int())
        self.version_month = kwargs.get('version_month', int())
        self.version_day = kwargs.get('version_day', int())
        self.version_main = kwargs.get('version_main', int())
        self.version_sub = kwargs.get('version_sub', int())
        self.version_patch = kwargs.get('version_patch', int())

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
        if self.version_year != other.version_year:
            return False
        if self.version_month != other.version_month:
            return False
        if self.version_day != other.version_day:
            return False
        if self.version_main != other.version_main:
            return False
        if self.version_sub != other.version_sub:
            return False
        if self.version_patch != other.version_patch:
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
    def version_year(self):
        """Message field 'version_year'."""
        return self._version_year

    @version_year.setter
    def version_year(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_year' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_year' field must be an integer in [-2147483648, 2147483647]"
        self._version_year = value

    @builtins.property
    def version_month(self):
        """Message field 'version_month'."""
        return self._version_month

    @version_month.setter
    def version_month(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_month' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_month' field must be an integer in [-2147483648, 2147483647]"
        self._version_month = value

    @builtins.property
    def version_day(self):
        """Message field 'version_day'."""
        return self._version_day

    @version_day.setter
    def version_day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_day' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_day' field must be an integer in [-2147483648, 2147483647]"
        self._version_day = value

    @builtins.property
    def version_main(self):
        """Message field 'version_main'."""
        return self._version_main

    @version_main.setter
    def version_main(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_main' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_main' field must be an integer in [-2147483648, 2147483647]"
        self._version_main = value

    @builtins.property
    def version_sub(self):
        """Message field 'version_sub'."""
        return self._version_sub

    @version_sub.setter
    def version_sub(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_sub' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_sub' field must be an integer in [-2147483648, 2147483647]"
        self._version_sub = value

    @builtins.property
    def version_patch(self):
        """Message field 'version_patch'."""
        return self._version_patch

    @version_patch.setter
    def version_patch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_patch' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'version_patch' field must be an integer in [-2147483648, 2147483647]"
        self._version_patch = value
