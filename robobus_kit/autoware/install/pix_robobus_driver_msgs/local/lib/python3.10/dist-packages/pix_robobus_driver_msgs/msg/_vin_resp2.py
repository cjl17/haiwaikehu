# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VinResp2.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VinResp2(type):
    """Metaclass of message 'VinResp2'."""

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
                'pix_robobus_driver_msgs.msg.VinResp2')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vin_resp2
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vin_resp2
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vin_resp2
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vin_resp2
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vin_resp2

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


class VinResp2(metaclass=Metaclass_VinResp2):
    """Message class 'VinResp2'."""

    __slots__ = [
        '_header',
        '_vin08',
        '_vin09',
        '_vin10',
        '_vin11',
        '_vin12',
        '_vin13',
        '_vin14',
        '_vin15',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vin08': 'int32',
        'vin09': 'int32',
        'vin10': 'int32',
        'vin11': 'int32',
        'vin12': 'int32',
        'vin13': 'int32',
        'vin14': 'int32',
        'vin15': 'int32',
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
        self.vin08 = kwargs.get('vin08', int())
        self.vin09 = kwargs.get('vin09', int())
        self.vin10 = kwargs.get('vin10', int())
        self.vin11 = kwargs.get('vin11', int())
        self.vin12 = kwargs.get('vin12', int())
        self.vin13 = kwargs.get('vin13', int())
        self.vin14 = kwargs.get('vin14', int())
        self.vin15 = kwargs.get('vin15', int())

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
        if self.vin08 != other.vin08:
            return False
        if self.vin09 != other.vin09:
            return False
        if self.vin10 != other.vin10:
            return False
        if self.vin11 != other.vin11:
            return False
        if self.vin12 != other.vin12:
            return False
        if self.vin13 != other.vin13:
            return False
        if self.vin14 != other.vin14:
            return False
        if self.vin15 != other.vin15:
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
    def vin08(self):
        """Message field 'vin08'."""
        return self._vin08

    @vin08.setter
    def vin08(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin08' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin08' field must be an integer in [-2147483648, 2147483647]"
        self._vin08 = value

    @builtins.property
    def vin09(self):
        """Message field 'vin09'."""
        return self._vin09

    @vin09.setter
    def vin09(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin09' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin09' field must be an integer in [-2147483648, 2147483647]"
        self._vin09 = value

    @builtins.property
    def vin10(self):
        """Message field 'vin10'."""
        return self._vin10

    @vin10.setter
    def vin10(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin10' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin10' field must be an integer in [-2147483648, 2147483647]"
        self._vin10 = value

    @builtins.property
    def vin11(self):
        """Message field 'vin11'."""
        return self._vin11

    @vin11.setter
    def vin11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin11' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin11' field must be an integer in [-2147483648, 2147483647]"
        self._vin11 = value

    @builtins.property
    def vin12(self):
        """Message field 'vin12'."""
        return self._vin12

    @vin12.setter
    def vin12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin12' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin12' field must be an integer in [-2147483648, 2147483647]"
        self._vin12 = value

    @builtins.property
    def vin13(self):
        """Message field 'vin13'."""
        return self._vin13

    @vin13.setter
    def vin13(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin13' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin13' field must be an integer in [-2147483648, 2147483647]"
        self._vin13 = value

    @builtins.property
    def vin14(self):
        """Message field 'vin14'."""
        return self._vin14

    @vin14.setter
    def vin14(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin14' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin14' field must be an integer in [-2147483648, 2147483647]"
        self._vin14 = value

    @builtins.property
    def vin15(self):
        """Message field 'vin15'."""
        return self._vin15

    @vin15.setter
    def vin15(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vin15' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vin15' field must be an integer in [-2147483648, 2147483647]"
        self._vin15 = value
