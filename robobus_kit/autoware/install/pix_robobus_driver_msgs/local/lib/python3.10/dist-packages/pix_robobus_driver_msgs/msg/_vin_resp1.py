# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VinResp1.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VinResp1(type):
    """Metaclass of message 'VinResp1'."""

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
                'pix_robobus_driver_msgs.msg.VinResp1')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vin_resp1
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vin_resp1
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vin_resp1
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vin_resp1
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vin_resp1

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


class VinResp1(metaclass=Metaclass_VinResp1):
    """Message class 'VinResp1'."""

    __slots__ = [
        '_header',
        '_vin00',
        '_vin01',
        '_vin02',
        '_vin03',
        '_vin04',
        '_vin05',
        '_vin06',
        '_vin07',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vin00': 'int32',
        'vin01': 'int32',
        'vin02': 'int32',
        'vin03': 'int32',
        'vin04': 'int32',
        'vin05': 'int32',
        'vin06': 'int32',
        'vin07': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.vin00 = kwargs.get('vin00', int())
        self.vin01 = kwargs.get('vin01', int())
        self.vin02 = kwargs.get('vin02', int())
        self.vin03 = kwargs.get('vin03', int())
        self.vin04 = kwargs.get('vin04', int())
        self.vin05 = kwargs.get('vin05', int())
        self.vin06 = kwargs.get('vin06', int())
        self.vin07 = kwargs.get('vin07', int())

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
        if self.vin00 != other.vin00:
            return False
        if self.vin01 != other.vin01:
            return False
        if self.vin02 != other.vin02:
            return False
        if self.vin03 != other.vin03:
            return False
        if self.vin04 != other.vin04:
            return False
        if self.vin05 != other.vin05:
            return False
        if self.vin06 != other.vin06:
            return False
        if self.vin07 != other.vin07:
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
    def vin00(self):
        """Message field 'vin00'."""
        return self._vin00

    @vin00.setter
    def vin00(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin00' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin00' field must be an integer in [-2147483648, 2147483647]"
        self._vin00 = value

    @builtins.property
    def vin01(self):
        """Message field 'vin01'."""
        return self._vin01

    @vin01.setter
    def vin01(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin01' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin01' field must be an integer in [-2147483648, 2147483647]"
        self._vin01 = value

    @builtins.property
    def vin02(self):
        """Message field 'vin02'."""
        return self._vin02

    @vin02.setter
    def vin02(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin02' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin02' field must be an integer in [-2147483648, 2147483647]"
        self._vin02 = value

    @builtins.property
    def vin03(self):
        """Message field 'vin03'."""
        return self._vin03

    @vin03.setter
    def vin03(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin03' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin03' field must be an integer in [-2147483648, 2147483647]"
        self._vin03 = value

    @builtins.property
    def vin04(self):
        """Message field 'vin04'."""
        return self._vin04

    @vin04.setter
    def vin04(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin04' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin04' field must be an integer in [-2147483648, 2147483647]"
        self._vin04 = value

    @builtins.property
    def vin05(self):
        """Message field 'vin05'."""
        return self._vin05

    @vin05.setter
    def vin05(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin05' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin05' field must be an integer in [-2147483648, 2147483647]"
        self._vin05 = value

    @builtins.property
    def vin06(self):
        """Message field 'vin06'."""
        return self._vin06

    @vin06.setter
    def vin06(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin06' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin06' field must be an integer in [-2147483648, 2147483647]"
        self._vin06 = value

    @builtins.property
    def vin07(self):
        """Message field 'vin07'."""
        return self._vin07

    @vin07.setter
    def vin07(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin07' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin07' field must be an integer in [-2147483648, 2147483647]"
        self._vin07 = value
