# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_sensing_msgs:msg/RadarInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'available_classes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarInfo(type):
    """Metaclass of message 'RadarInfo'."""

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
                'autoware_sensing_msgs.msg.RadarInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_info

            from autoware_sensing_msgs.msg import RadarFieldInfo
            if RadarFieldInfo.__class__._TYPE_SUPPORT is None:
                RadarFieldInfo.__class__.__import_type_support__()

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


class RadarInfo(metaclass=Metaclass_RadarInfo):
    """Message class 'RadarInfo'."""

    __slots__ = [
        '_header',
        '_object_fields_info',
        '_detection_fields_info',
        '_available_classes',
        '_absolute_dynamics',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'object_fields_info': 'sequence<autoware_sensing_msgs/RadarFieldInfo>',
        'detection_fields_info': 'sequence<autoware_sensing_msgs/RadarFieldInfo>',
        'available_classes': 'sequence<uint32>',
        'absolute_dynamics': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_sensing_msgs', 'msg'], 'RadarFieldInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_sensing_msgs', 'msg'], 'RadarFieldInfo')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.object_fields_info = kwargs.get('object_fields_info', [])
        self.detection_fields_info = kwargs.get('detection_fields_info', [])
        self.available_classes = array.array('I', kwargs.get('available_classes', []))
        self.absolute_dynamics = kwargs.get('absolute_dynamics', bool())

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
        if self.object_fields_info != other.object_fields_info:
            return False
        if self.detection_fields_info != other.detection_fields_info:
            return False
        if self.available_classes != other.available_classes:
            return False
        if self.absolute_dynamics != other.absolute_dynamics:
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
    def object_fields_info(self):
        """Message field 'object_fields_info'."""
        return self._object_fields_info

    @object_fields_info.setter
    def object_fields_info(self, value):
        if __debug__:
            from autoware_sensing_msgs.msg import RadarFieldInfo
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
                 all(isinstance(v, RadarFieldInfo) for v in value) and
                 True), \
                "The 'object_fields_info' field must be a set or sequence and each value of type 'RadarFieldInfo'"
        self._object_fields_info = value

    @builtins.property
    def detection_fields_info(self):
        """Message field 'detection_fields_info'."""
        return self._detection_fields_info

    @detection_fields_info.setter
    def detection_fields_info(self, value):
        if __debug__:
            from autoware_sensing_msgs.msg import RadarFieldInfo
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
                 all(isinstance(v, RadarFieldInfo) for v in value) and
                 True), \
                "The 'detection_fields_info' field must be a set or sequence and each value of type 'RadarFieldInfo'"
        self._detection_fields_info = value

    @builtins.property
    def available_classes(self):
        """Message field 'available_classes'."""
        return self._available_classes

    @available_classes.setter
    def available_classes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'available_classes' array.array() must have the type code of 'I'"
            self._available_classes = value
            return
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'available_classes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._available_classes = array.array('I', value)

    @builtins.property
    def absolute_dynamics(self):
        """Message field 'absolute_dynamics'."""
        return self._absolute_dynamics

    @absolute_dynamics.setter
    def absolute_dynamics(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'absolute_dynamics' field must be of type 'bool'"
        self._absolute_dynamics = value
