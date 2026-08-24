# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_sensing_msgs:msg/ConcatenatedPointCloudInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'matching_strategy_config'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConcatenatedPointCloudInfo(type):
    """Metaclass of message 'ConcatenatedPointCloudInfo'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STRATEGY_NAIVE': 0,
        'STRATEGY_ADVANCED': 1,
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
                'autoware_sensing_msgs.msg.ConcatenatedPointCloudInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__concatenated_point_cloud_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__concatenated_point_cloud_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__concatenated_point_cloud_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__concatenated_point_cloud_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__concatenated_point_cloud_info

            from autoware_sensing_msgs.msg import SourcePointCloudInfo
            if SourcePointCloudInfo.__class__._TYPE_SUPPORT is None:
                SourcePointCloudInfo.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STRATEGY_NAIVE': cls.__constants['STRATEGY_NAIVE'],
            'STRATEGY_ADVANCED': cls.__constants['STRATEGY_ADVANCED'],
        }

    @property
    def STRATEGY_NAIVE(self):
        """Message constant 'STRATEGY_NAIVE'."""
        return Metaclass_ConcatenatedPointCloudInfo.__constants['STRATEGY_NAIVE']

    @property
    def STRATEGY_ADVANCED(self):
        """Message constant 'STRATEGY_ADVANCED'."""
        return Metaclass_ConcatenatedPointCloudInfo.__constants['STRATEGY_ADVANCED']


class ConcatenatedPointCloudInfo(metaclass=Metaclass_ConcatenatedPointCloudInfo):
    """
    Message class 'ConcatenatedPointCloudInfo'.

    Constants:
      STRATEGY_NAIVE
      STRATEGY_ADVANCED
    """

    __slots__ = [
        '_header',
        '_concatenation_success',
        '_matching_strategy',
        '_matching_strategy_config',
        '_source_info',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'concatenation_success': 'boolean',
        'matching_strategy': 'uint8',
        'matching_strategy_config': 'sequence<uint8>',
        'source_info': 'sequence<autoware_sensing_msgs/SourcePointCloudInfo>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_sensing_msgs', 'msg'], 'SourcePointCloudInfo')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.concatenation_success = kwargs.get('concatenation_success', bool())
        self.matching_strategy = kwargs.get('matching_strategy', int())
        self.matching_strategy_config = array.array('B', kwargs.get('matching_strategy_config', []))
        self.source_info = kwargs.get('source_info', [])

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
        if self.concatenation_success != other.concatenation_success:
            return False
        if self.matching_strategy != other.matching_strategy:
            return False
        if self.matching_strategy_config != other.matching_strategy_config:
            return False
        if self.source_info != other.source_info:
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
    def concatenation_success(self):
        """Message field 'concatenation_success'."""
        return self._concatenation_success

    @concatenation_success.setter
    def concatenation_success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'concatenation_success' field must be of type 'bool'"
        self._concatenation_success = value

    @builtins.property
    def matching_strategy(self):
        """Message field 'matching_strategy'."""
        return self._matching_strategy

    @matching_strategy.setter
    def matching_strategy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'matching_strategy' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'matching_strategy' field must be an unsigned integer in [0, 255]"
        self._matching_strategy = value

    @builtins.property
    def matching_strategy_config(self):
        """Message field 'matching_strategy_config'."""
        return self._matching_strategy_config

    @matching_strategy_config.setter
    def matching_strategy_config(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'matching_strategy_config' array.array() must have the type code of 'B'"
            self._matching_strategy_config = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'matching_strategy_config' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._matching_strategy_config = array.array('B', value)

    @builtins.property
    def source_info(self):
        """Message field 'source_info'."""
        return self._source_info

    @source_info.setter
    def source_info(self, value):
        if __debug__:
            from autoware_sensing_msgs.msg import SourcePointCloudInfo
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
                 all(isinstance(v, SourcePointCloudInfo) for v in value) and
                 True), \
                "The 'source_info' field must be a set or sequence and each value of type 'SourcePointCloudInfo'"
        self._source_info = value
