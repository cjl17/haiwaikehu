# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_sensing_msgs:msg/RadarFieldInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarFieldInfo(type):
    """Metaclass of message 'RadarFieldInfo'."""

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
            module = import_type_support('autoware_sensing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'autoware_sensing_msgs.msg.RadarFieldInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_field_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_field_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_field_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_field_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_field_info

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarFieldInfo(metaclass=Metaclass_RadarFieldInfo):
    """Message class 'RadarFieldInfo'."""

    __slots__ = [
        '_field_name',
        '_min_value_available',
        '_max_value_available',
        '_resolution_available',
        '_min_value',
        '_max_value',
        '_resolution',
    ]

    _fields_and_field_types = {
        'field_name': 'std_msgs/String',
        'min_value_available': 'boolean',
        'max_value_available': 'boolean',
        'resolution_available': 'boolean',
        'min_value': 'float',
        'max_value': 'float',
        'resolution': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.field_name = kwargs.get('field_name', String())
        self.min_value_available = kwargs.get('min_value_available', bool())
        self.max_value_available = kwargs.get('max_value_available', bool())
        self.resolution_available = kwargs.get('resolution_available', bool())
        self.min_value = kwargs.get('min_value', float())
        self.max_value = kwargs.get('max_value', float())
        self.resolution = kwargs.get('resolution', float())

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
        if self.field_name != other.field_name:
            return False
        if self.min_value_available != other.min_value_available:
            return False
        if self.max_value_available != other.max_value_available:
            return False
        if self.resolution_available != other.resolution_available:
            return False
        if self.min_value != other.min_value:
            return False
        if self.max_value != other.max_value:
            return False
        if self.resolution != other.resolution:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def field_name(self):
        """Message field 'field_name'."""
        return self._field_name

    @field_name.setter
    def field_name(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'field_name' field must be a sub message of type 'String'"
        self._field_name = value

    @builtins.property
    def min_value_available(self):
        """Message field 'min_value_available'."""
        return self._min_value_available

    @min_value_available.setter
    def min_value_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'min_value_available' field must be of type 'bool'"
        self._min_value_available = value

    @builtins.property
    def max_value_available(self):
        """Message field 'max_value_available'."""
        return self._max_value_available

    @max_value_available.setter
    def max_value_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'max_value_available' field must be of type 'bool'"
        self._max_value_available = value

    @builtins.property
    def resolution_available(self):
        """Message field 'resolution_available'."""
        return self._resolution_available

    @resolution_available.setter
    def resolution_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'resolution_available' field must be of type 'bool'"
        self._resolution_available = value

    @builtins.property
    def min_value(self):
        """Message field 'min_value'."""
        return self._min_value

    @min_value.setter
    def min_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_value = value

    @builtins.property
    def max_value(self):
        """Message field 'max_value'."""
        return self._max_value

    @max_value.setter
    def max_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_value = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._resolution = value
