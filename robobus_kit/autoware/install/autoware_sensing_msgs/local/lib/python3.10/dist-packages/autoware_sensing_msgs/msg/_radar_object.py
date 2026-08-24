# generated from rosidl_generator_py/resource/_idl.py.em
# with input from autoware_sensing_msgs:msg/RadarObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
# Member 'velocity_covariance'
# Member 'acceleration_covariance'
# Member 'size_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarObject(type):
    """Metaclass of message 'RadarObject'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INVALID_COV_VALUE': -1.0,
        'MEASUREMENT_STATUS_INVALID': 0,
        'MEASUREMENT_STATUS_MEASURED': 1,
        'MEASUREMENT_STATUS_PREDICTED': 2,
        'MEASUREMENT_STATUS_NEW': 3,
        'MEASUREMENT_STATUS_UNKNOWN': 4,
        'MOVEMENT_STATUS_INVALID': 0,
        'MOVEMENT_STATUS_DYNAMIC': 1,
        'MOVEMENT_STATUS_STATIC': 2,
        'MOVEMENT_STATUS_UNKNOWN': 3,
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
                'autoware_sensing_msgs.msg.RadarObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_object

            from autoware_sensing_msgs.msg import RadarClassification
            if RadarClassification.__class__._TYPE_SUPPORT is None:
                RadarClassification.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INVALID_COV_VALUE': cls.__constants['INVALID_COV_VALUE'],
            'MEASUREMENT_STATUS_INVALID': cls.__constants['MEASUREMENT_STATUS_INVALID'],
            'MEASUREMENT_STATUS_MEASURED': cls.__constants['MEASUREMENT_STATUS_MEASURED'],
            'MEASUREMENT_STATUS_PREDICTED': cls.__constants['MEASUREMENT_STATUS_PREDICTED'],
            'MEASUREMENT_STATUS_NEW': cls.__constants['MEASUREMENT_STATUS_NEW'],
            'MEASUREMENT_STATUS_UNKNOWN': cls.__constants['MEASUREMENT_STATUS_UNKNOWN'],
            'MOVEMENT_STATUS_INVALID': cls.__constants['MOVEMENT_STATUS_INVALID'],
            'MOVEMENT_STATUS_DYNAMIC': cls.__constants['MOVEMENT_STATUS_DYNAMIC'],
            'MOVEMENT_STATUS_STATIC': cls.__constants['MOVEMENT_STATUS_STATIC'],
            'MOVEMENT_STATUS_UNKNOWN': cls.__constants['MOVEMENT_STATUS_UNKNOWN'],
        }

    @property
    def INVALID_COV_VALUE(self):
        """Message constant 'INVALID_COV_VALUE'."""
        return Metaclass_RadarObject.__constants['INVALID_COV_VALUE']

    @property
    def MEASUREMENT_STATUS_INVALID(self):
        """Message constant 'MEASUREMENT_STATUS_INVALID'."""
        return Metaclass_RadarObject.__constants['MEASUREMENT_STATUS_INVALID']

    @property
    def MEASUREMENT_STATUS_MEASURED(self):
        """Message constant 'MEASUREMENT_STATUS_MEASURED'."""
        return Metaclass_RadarObject.__constants['MEASUREMENT_STATUS_MEASURED']

    @property
    def MEASUREMENT_STATUS_PREDICTED(self):
        """Message constant 'MEASUREMENT_STATUS_PREDICTED'."""
        return Metaclass_RadarObject.__constants['MEASUREMENT_STATUS_PREDICTED']

    @property
    def MEASUREMENT_STATUS_NEW(self):
        """Message constant 'MEASUREMENT_STATUS_NEW'."""
        return Metaclass_RadarObject.__constants['MEASUREMENT_STATUS_NEW']

    @property
    def MEASUREMENT_STATUS_UNKNOWN(self):
        """Message constant 'MEASUREMENT_STATUS_UNKNOWN'."""
        return Metaclass_RadarObject.__constants['MEASUREMENT_STATUS_UNKNOWN']

    @property
    def MOVEMENT_STATUS_INVALID(self):
        """Message constant 'MOVEMENT_STATUS_INVALID'."""
        return Metaclass_RadarObject.__constants['MOVEMENT_STATUS_INVALID']

    @property
    def MOVEMENT_STATUS_DYNAMIC(self):
        """Message constant 'MOVEMENT_STATUS_DYNAMIC'."""
        return Metaclass_RadarObject.__constants['MOVEMENT_STATUS_DYNAMIC']

    @property
    def MOVEMENT_STATUS_STATIC(self):
        """Message constant 'MOVEMENT_STATUS_STATIC'."""
        return Metaclass_RadarObject.__constants['MOVEMENT_STATUS_STATIC']

    @property
    def MOVEMENT_STATUS_UNKNOWN(self):
        """Message constant 'MOVEMENT_STATUS_UNKNOWN'."""
        return Metaclass_RadarObject.__constants['MOVEMENT_STATUS_UNKNOWN']


class RadarObject(metaclass=Metaclass_RadarObject):
    """
    Message class 'RadarObject'.

    Constants:
      INVALID_COV_VALUE
      MEASUREMENT_STATUS_INVALID
      MEASUREMENT_STATUS_MEASURED
      MEASUREMENT_STATUS_PREDICTED
      MEASUREMENT_STATUS_NEW
      MEASUREMENT_STATUS_UNKNOWN
      MOVEMENT_STATUS_INVALID
      MOVEMENT_STATUS_DYNAMIC
      MOVEMENT_STATUS_STATIC
      MOVEMENT_STATUS_UNKNOWN
    """

    __slots__ = [
        '_object_id',
        '_age',
        '_measurement_status',
        '_movement_status',
        '_position',
        '_velocity',
        '_acceleration',
        '_size',
        '_position_covariance',
        '_velocity_covariance',
        '_acceleration_covariance',
        '_size_covariance',
        '_orientation',
        '_orientation_std',
        '_orientation_rate',
        '_orientation_rate_std',
        '_existence_probability',
        '_classifications',
    ]

    _fields_and_field_types = {
        'object_id': 'uint32',
        'age': 'uint16',
        'measurement_status': 'uint8',
        'movement_status': 'uint8',
        'position': 'geometry_msgs/Point',
        'velocity': 'geometry_msgs/Vector3',
        'acceleration': 'geometry_msgs/Vector3',
        'size': 'geometry_msgs/Vector3',
        'position_covariance': 'float[6]',
        'velocity_covariance': 'float[6]',
        'acceleration_covariance': 'float[6]',
        'size_covariance': 'float[6]',
        'orientation': 'float',
        'orientation_std': 'float',
        'orientation_rate': 'float',
        'orientation_rate_std': 'float',
        'existence_probability': 'float',
        'classifications': 'sequence<autoware_sensing_msgs/RadarClassification>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 6),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['autoware_sensing_msgs', 'msg'], 'RadarClassification')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.object_id = kwargs.get('object_id', int())
        self.age = kwargs.get('age', int())
        self.measurement_status = kwargs.get('measurement_status', int())
        self.movement_status = kwargs.get('movement_status', int())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.size = kwargs.get('size', Vector3())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.position_covariance = kwargs.get('position_covariance')
        if 'velocity_covariance' not in kwargs:
            self.velocity_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.velocity_covariance = kwargs.get('velocity_covariance')
        if 'acceleration_covariance' not in kwargs:
            self.acceleration_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.acceleration_covariance = kwargs.get('acceleration_covariance')
        if 'size_covariance' not in kwargs:
            self.size_covariance = numpy.zeros(6, dtype=numpy.float32)
        else:
            self.size_covariance = kwargs.get('size_covariance')
        self.orientation = kwargs.get('orientation', float())
        self.orientation_std = kwargs.get('orientation_std', float())
        self.orientation_rate = kwargs.get('orientation_rate', float())
        self.orientation_rate_std = kwargs.get('orientation_rate_std', float())
        self.existence_probability = kwargs.get('existence_probability', float())
        self.classifications = kwargs.get('classifications', [])

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
        if self.object_id != other.object_id:
            return False
        if self.age != other.age:
            return False
        if self.measurement_status != other.measurement_status:
            return False
        if self.movement_status != other.movement_status:
            return False
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.size != other.size:
            return False
        if any(self.position_covariance != other.position_covariance):
            return False
        if any(self.velocity_covariance != other.velocity_covariance):
            return False
        if any(self.acceleration_covariance != other.acceleration_covariance):
            return False
        if any(self.size_covariance != other.size_covariance):
            return False
        if self.orientation != other.orientation:
            return False
        if self.orientation_std != other.orientation_std:
            return False
        if self.orientation_rate != other.orientation_rate:
            return False
        if self.orientation_rate_std != other.orientation_rate_std:
            return False
        if self.existence_probability != other.existence_probability:
            return False
        if self.classifications != other.classifications:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'object_id' field must be an unsigned integer in [0, 4294967295]"
        self._object_id = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'age' field must be an unsigned integer in [0, 65535]"
        self._age = value

    @builtins.property
    def measurement_status(self):
        """Message field 'measurement_status'."""
        return self._measurement_status

    @measurement_status.setter
    def measurement_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'measurement_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'measurement_status' field must be an unsigned integer in [0, 255]"
        self._measurement_status = value

    @builtins.property
    def movement_status(self):
        """Message field 'movement_status'."""
        return self._movement_status

    @movement_status.setter
    def movement_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'movement_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'movement_status' field must be an unsigned integer in [0, 255]"
        self._movement_status = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def size(self):
        """Message field 'size'."""
        return self._size

    @size.setter
    def size(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'size' field must be a sub message of type 'Vector3'"
        self._size = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'position_covariance' numpy.ndarray() must have a size of 6"
            self._position_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocity_covariance(self):
        """Message field 'velocity_covariance'."""
        return self._velocity_covariance

    @velocity_covariance.setter
    def velocity_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'velocity_covariance' numpy.ndarray() must have a size of 6"
            self._velocity_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'velocity_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def acceleration_covariance(self):
        """Message field 'acceleration_covariance'."""
        return self._acceleration_covariance

    @acceleration_covariance.setter
    def acceleration_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'acceleration_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'acceleration_covariance' numpy.ndarray() must have a size of 6"
            self._acceleration_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'acceleration_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acceleration_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def size_covariance(self):
        """Message field 'size_covariance'."""
        return self._size_covariance

    @size_covariance.setter
    def size_covariance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'size_covariance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 6, \
                "The 'size_covariance' numpy.ndarray() must have a size of 6"
            self._size_covariance = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'size_covariance' field must be a set or sequence with length 6 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._size_covariance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation = value

    @builtins.property
    def orientation_std(self):
        """Message field 'orientation_std'."""
        return self._orientation_std

    @orientation_std.setter
    def orientation_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_std = value

    @builtins.property
    def orientation_rate(self):
        """Message field 'orientation_rate'."""
        return self._orientation_rate

    @orientation_rate.setter
    def orientation_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_rate = value

    @builtins.property
    def orientation_rate_std(self):
        """Message field 'orientation_rate_std'."""
        return self._orientation_rate_std

    @orientation_rate_std.setter
    def orientation_rate_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation_rate_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orientation_rate_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orientation_rate_std = value

    @builtins.property
    def existence_probability(self):
        """Message field 'existence_probability'."""
        return self._existence_probability

    @existence_probability.setter
    def existence_probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'existence_probability' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'existence_probability' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._existence_probability = value

    @builtins.property
    def classifications(self):
        """Message field 'classifications'."""
        return self._classifications

    @classifications.setter
    def classifications(self, value):
        if __debug__:
            from autoware_sensing_msgs.msg import RadarClassification
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
                 all(isinstance(v, RadarClassification) for v in value) and
                 True), \
                "The 'classifications' field must be a set or sequence and each value of type 'RadarClassification'"
        self._classifications = value
