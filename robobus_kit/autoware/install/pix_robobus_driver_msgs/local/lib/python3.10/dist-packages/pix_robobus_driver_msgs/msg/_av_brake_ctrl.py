# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/AvBrakeCtrl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AvBrakeCtrl(type):
    """Metaclass of message 'AvBrakeCtrl'."""

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
                'pix_robobus_driver_msgs.msg.AvBrakeCtrl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__av_brake_ctrl
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__av_brake_ctrl
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__av_brake_ctrl
            cls._TYPE_SUPPORT = module.type_support_msg__msg__av_brake_ctrl
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__av_brake_ctrl

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


class AvBrakeCtrl(metaclass=Metaclass_AvBrakeCtrl):
    """Message class 'AvBrakeCtrl'."""

    __slots__ = [
        '_header',
        '_acu_chassis_brake_en',
        '_acu_chassis_brake_lamp_ctrl',
        '_acu_chassis_aeb_ctrl',
        '_acu_chassis_brake_pdl_target',
        '_acu_chassis_epb_ctrl',
        '_acu_brake_life_sig',
        '_acu_check_sum131',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'acu_chassis_brake_en': 'boolean',
        'acu_chassis_brake_lamp_ctrl': 'boolean',
        'acu_chassis_aeb_ctrl': 'boolean',
        'acu_chassis_brake_pdl_target': 'float',
        'acu_chassis_epb_ctrl': 'int32',
        'acu_brake_life_sig': 'int32',
        'acu_check_sum131': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.acu_chassis_brake_en = kwargs.get('acu_chassis_brake_en', bool())
        self.acu_chassis_brake_lamp_ctrl = kwargs.get('acu_chassis_brake_lamp_ctrl', bool())
        self.acu_chassis_aeb_ctrl = kwargs.get('acu_chassis_aeb_ctrl', bool())
        self.acu_chassis_brake_pdl_target = kwargs.get('acu_chassis_brake_pdl_target', float())
        self.acu_chassis_epb_ctrl = kwargs.get('acu_chassis_epb_ctrl', int())
        self.acu_brake_life_sig = kwargs.get('acu_brake_life_sig', int())
        self.acu_check_sum131 = kwargs.get('acu_check_sum131', int())

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
        if self.acu_chassis_brake_en != other.acu_chassis_brake_en:
            return False
        if self.acu_chassis_brake_lamp_ctrl != other.acu_chassis_brake_lamp_ctrl:
            return False
        if self.acu_chassis_aeb_ctrl != other.acu_chassis_aeb_ctrl:
            return False
        if self.acu_chassis_brake_pdl_target != other.acu_chassis_brake_pdl_target:
            return False
        if self.acu_chassis_epb_ctrl != other.acu_chassis_epb_ctrl:
            return False
        if self.acu_brake_life_sig != other.acu_brake_life_sig:
            return False
        if self.acu_check_sum131 != other.acu_check_sum131:
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
    def acu_chassis_brake_en(self):
        """Message field 'acu_chassis_brake_en'."""
        return self._acu_chassis_brake_en

    @acu_chassis_brake_en.setter
    def acu_chassis_brake_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_chassis_brake_en' field must be of type 'bool'"
        self._acu_chassis_brake_en = value

    @builtins.property
    def acu_chassis_brake_lamp_ctrl(self):
        """Message field 'acu_chassis_brake_lamp_ctrl'."""
        return self._acu_chassis_brake_lamp_ctrl

    @acu_chassis_brake_lamp_ctrl.setter
    def acu_chassis_brake_lamp_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_chassis_brake_lamp_ctrl' field must be of type 'bool'"
        self._acu_chassis_brake_lamp_ctrl = value

    @builtins.property
    def acu_chassis_aeb_ctrl(self):
        """Message field 'acu_chassis_aeb_ctrl'."""
        return self._acu_chassis_aeb_ctrl

    @acu_chassis_aeb_ctrl.setter
    def acu_chassis_aeb_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acu_chassis_aeb_ctrl' field must be of type 'bool'"
        self._acu_chassis_aeb_ctrl = value

    @builtins.property
    def acu_chassis_brake_pdl_target(self):
        """Message field 'acu_chassis_brake_pdl_target'."""
        return self._acu_chassis_brake_pdl_target

    @acu_chassis_brake_pdl_target.setter
    def acu_chassis_brake_pdl_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acu_chassis_brake_pdl_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acu_chassis_brake_pdl_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acu_chassis_brake_pdl_target = value

    @builtins.property
    def acu_chassis_epb_ctrl(self):
        """Message field 'acu_chassis_epb_ctrl'."""
        return self._acu_chassis_epb_ctrl

    @acu_chassis_epb_ctrl.setter
    def acu_chassis_epb_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_chassis_epb_ctrl' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_chassis_epb_ctrl' field must be an integer in [-2147483648, 2147483647]"
        self._acu_chassis_epb_ctrl = value

    @builtins.property
    def acu_brake_life_sig(self):
        """Message field 'acu_brake_life_sig'."""
        return self._acu_brake_life_sig

    @acu_brake_life_sig.setter
    def acu_brake_life_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_brake_life_sig' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_brake_life_sig' field must be an integer in [-2147483648, 2147483647]"
        self._acu_brake_life_sig = value

    @builtins.property
    def acu_check_sum131(self):
        """Message field 'acu_check_sum131'."""
        return self._acu_check_sum131

    @acu_check_sum131.setter
    def acu_check_sum131(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acu_check_sum131' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'acu_check_sum131' field must be an integer in [-2147483648, 2147483647]"
        self._acu_check_sum131 = value
