# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VaVehicleFltSta.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VaVehicleFltSta(type):
    """Metaclass of message 'VaVehicleFltSta'."""

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
                'pix_robobus_driver_msgs.msg.VaVehicleFltSta')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__va_vehicle_flt_sta
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__va_vehicle_flt_sta
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__va_vehicle_flt_sta
            cls._TYPE_SUPPORT = module.type_support_msg__msg__va_vehicle_flt_sta
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__va_vehicle_flt_sta

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


class VaVehicleFltSta(metaclass=Metaclass_VaVehicleFltSta):
    """Message class 'VaVehicleFltSta'."""

    __slots__ = [
        '_header',
        '_vcu_sys_motor_over_temp_sta',
        '_vcu_sys_bms_over_temp_sta',
        '_vcu_sys_brake_over_temp_sta',
        '_vcu_sys_steer_over_temp_sta',
        '_vcu_sys_under_volt',
        '_vcu_sys_flt',
        '_vcu_sys_brake_flt',
        '_vcu_sys_parking_flt',
        '_vcu_sys_steer_front_flt',
        '_vcu_sys_steer_back_flt',
        '_vcu_sys_motor_lf_flt',
        '_vcu_sys_motor_rf_flt',
        '_vcu_sys_motor_lr_flt',
        '_vcu_sys_motor_rr_flt',
        '_vcu_sys_bms_flt',
        '_vcu_sys_dc_flt',
        '_vcu_sys_door_flt',
        '_vcu_sys_dpm_flt',
        '_vcu_sys_bcm_flt',
        '_vcu_vehicle_flt_level',
        '_vcu_sys_flt_reserve1',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'vcu_sys_motor_over_temp_sta': 'boolean',
        'vcu_sys_bms_over_temp_sta': 'boolean',
        'vcu_sys_brake_over_temp_sta': 'boolean',
        'vcu_sys_steer_over_temp_sta': 'boolean',
        'vcu_sys_under_volt': 'boolean',
        'vcu_sys_flt': 'int32',
        'vcu_sys_brake_flt': 'int32',
        'vcu_sys_parking_flt': 'int32',
        'vcu_sys_steer_front_flt': 'int32',
        'vcu_sys_steer_back_flt': 'int32',
        'vcu_sys_motor_lf_flt': 'int32',
        'vcu_sys_motor_rf_flt': 'int32',
        'vcu_sys_motor_lr_flt': 'int32',
        'vcu_sys_motor_rr_flt': 'int32',
        'vcu_sys_bms_flt': 'int32',
        'vcu_sys_dc_flt': 'int32',
        'vcu_sys_door_flt': 'int32',
        'vcu_sys_dpm_flt': 'int32',
        'vcu_sys_bcm_flt': 'int32',
        'vcu_vehicle_flt_level': 'int32',
        'vcu_sys_flt_reserve1': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.vcu_sys_motor_over_temp_sta = kwargs.get('vcu_sys_motor_over_temp_sta', bool())
        self.vcu_sys_bms_over_temp_sta = kwargs.get('vcu_sys_bms_over_temp_sta', bool())
        self.vcu_sys_brake_over_temp_sta = kwargs.get('vcu_sys_brake_over_temp_sta', bool())
        self.vcu_sys_steer_over_temp_sta = kwargs.get('vcu_sys_steer_over_temp_sta', bool())
        self.vcu_sys_under_volt = kwargs.get('vcu_sys_under_volt', bool())
        self.vcu_sys_flt = kwargs.get('vcu_sys_flt', int())
        self.vcu_sys_brake_flt = kwargs.get('vcu_sys_brake_flt', int())
        self.vcu_sys_parking_flt = kwargs.get('vcu_sys_parking_flt', int())
        self.vcu_sys_steer_front_flt = kwargs.get('vcu_sys_steer_front_flt', int())
        self.vcu_sys_steer_back_flt = kwargs.get('vcu_sys_steer_back_flt', int())
        self.vcu_sys_motor_lf_flt = kwargs.get('vcu_sys_motor_lf_flt', int())
        self.vcu_sys_motor_rf_flt = kwargs.get('vcu_sys_motor_rf_flt', int())
        self.vcu_sys_motor_lr_flt = kwargs.get('vcu_sys_motor_lr_flt', int())
        self.vcu_sys_motor_rr_flt = kwargs.get('vcu_sys_motor_rr_flt', int())
        self.vcu_sys_bms_flt = kwargs.get('vcu_sys_bms_flt', int())
        self.vcu_sys_dc_flt = kwargs.get('vcu_sys_dc_flt', int())
        self.vcu_sys_door_flt = kwargs.get('vcu_sys_door_flt', int())
        self.vcu_sys_dpm_flt = kwargs.get('vcu_sys_dpm_flt', int())
        self.vcu_sys_bcm_flt = kwargs.get('vcu_sys_bcm_flt', int())
        self.vcu_vehicle_flt_level = kwargs.get('vcu_vehicle_flt_level', int())
        self.vcu_sys_flt_reserve1 = kwargs.get('vcu_sys_flt_reserve1', int())

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
        if self.vcu_sys_motor_over_temp_sta != other.vcu_sys_motor_over_temp_sta:
            return False
        if self.vcu_sys_bms_over_temp_sta != other.vcu_sys_bms_over_temp_sta:
            return False
        if self.vcu_sys_brake_over_temp_sta != other.vcu_sys_brake_over_temp_sta:
            return False
        if self.vcu_sys_steer_over_temp_sta != other.vcu_sys_steer_over_temp_sta:
            return False
        if self.vcu_sys_under_volt != other.vcu_sys_under_volt:
            return False
        if self.vcu_sys_flt != other.vcu_sys_flt:
            return False
        if self.vcu_sys_brake_flt != other.vcu_sys_brake_flt:
            return False
        if self.vcu_sys_parking_flt != other.vcu_sys_parking_flt:
            return False
        if self.vcu_sys_steer_front_flt != other.vcu_sys_steer_front_flt:
            return False
        if self.vcu_sys_steer_back_flt != other.vcu_sys_steer_back_flt:
            return False
        if self.vcu_sys_motor_lf_flt != other.vcu_sys_motor_lf_flt:
            return False
        if self.vcu_sys_motor_rf_flt != other.vcu_sys_motor_rf_flt:
            return False
        if self.vcu_sys_motor_lr_flt != other.vcu_sys_motor_lr_flt:
            return False
        if self.vcu_sys_motor_rr_flt != other.vcu_sys_motor_rr_flt:
            return False
        if self.vcu_sys_bms_flt != other.vcu_sys_bms_flt:
            return False
        if self.vcu_sys_dc_flt != other.vcu_sys_dc_flt:
            return False
        if self.vcu_sys_door_flt != other.vcu_sys_door_flt:
            return False
        if self.vcu_sys_dpm_flt != other.vcu_sys_dpm_flt:
            return False
        if self.vcu_sys_bcm_flt != other.vcu_sys_bcm_flt:
            return False
        if self.vcu_vehicle_flt_level != other.vcu_vehicle_flt_level:
            return False
        if self.vcu_sys_flt_reserve1 != other.vcu_sys_flt_reserve1:
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
    def vcu_sys_motor_over_temp_sta(self):
        """Message field 'vcu_sys_motor_over_temp_sta'."""
        return self._vcu_sys_motor_over_temp_sta

    @vcu_sys_motor_over_temp_sta.setter
    def vcu_sys_motor_over_temp_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_sys_motor_over_temp_sta' field must be of type 'bool'"
        self._vcu_sys_motor_over_temp_sta = value

    @builtins.property
    def vcu_sys_bms_over_temp_sta(self):
        """Message field 'vcu_sys_bms_over_temp_sta'."""
        return self._vcu_sys_bms_over_temp_sta

    @vcu_sys_bms_over_temp_sta.setter
    def vcu_sys_bms_over_temp_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_sys_bms_over_temp_sta' field must be of type 'bool'"
        self._vcu_sys_bms_over_temp_sta = value

    @builtins.property
    def vcu_sys_brake_over_temp_sta(self):
        """Message field 'vcu_sys_brake_over_temp_sta'."""
        return self._vcu_sys_brake_over_temp_sta

    @vcu_sys_brake_over_temp_sta.setter
    def vcu_sys_brake_over_temp_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_sys_brake_over_temp_sta' field must be of type 'bool'"
        self._vcu_sys_brake_over_temp_sta = value

    @builtins.property
    def vcu_sys_steer_over_temp_sta(self):
        """Message field 'vcu_sys_steer_over_temp_sta'."""
        return self._vcu_sys_steer_over_temp_sta

    @vcu_sys_steer_over_temp_sta.setter
    def vcu_sys_steer_over_temp_sta(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_sys_steer_over_temp_sta' field must be of type 'bool'"
        self._vcu_sys_steer_over_temp_sta = value

    @builtins.property
    def vcu_sys_under_volt(self):
        """Message field 'vcu_sys_under_volt'."""
        return self._vcu_sys_under_volt

    @vcu_sys_under_volt.setter
    def vcu_sys_under_volt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vcu_sys_under_volt' field must be of type 'bool'"
        self._vcu_sys_under_volt = value

    @builtins.property
    def vcu_sys_flt(self):
        """Message field 'vcu_sys_flt'."""
        return self._vcu_sys_flt

    @vcu_sys_flt.setter
    def vcu_sys_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_flt = value

    @builtins.property
    def vcu_sys_brake_flt(self):
        """Message field 'vcu_sys_brake_flt'."""
        return self._vcu_sys_brake_flt

    @vcu_sys_brake_flt.setter
    def vcu_sys_brake_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_brake_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_brake_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_brake_flt = value

    @builtins.property
    def vcu_sys_parking_flt(self):
        """Message field 'vcu_sys_parking_flt'."""
        return self._vcu_sys_parking_flt

    @vcu_sys_parking_flt.setter
    def vcu_sys_parking_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_parking_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_parking_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_parking_flt = value

    @builtins.property
    def vcu_sys_steer_front_flt(self):
        """Message field 'vcu_sys_steer_front_flt'."""
        return self._vcu_sys_steer_front_flt

    @vcu_sys_steer_front_flt.setter
    def vcu_sys_steer_front_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_steer_front_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_steer_front_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_steer_front_flt = value

    @builtins.property
    def vcu_sys_steer_back_flt(self):
        """Message field 'vcu_sys_steer_back_flt'."""
        return self._vcu_sys_steer_back_flt

    @vcu_sys_steer_back_flt.setter
    def vcu_sys_steer_back_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_steer_back_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_steer_back_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_steer_back_flt = value

    @builtins.property
    def vcu_sys_motor_lf_flt(self):
        """Message field 'vcu_sys_motor_lf_flt'."""
        return self._vcu_sys_motor_lf_flt

    @vcu_sys_motor_lf_flt.setter
    def vcu_sys_motor_lf_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_motor_lf_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_motor_lf_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_motor_lf_flt = value

    @builtins.property
    def vcu_sys_motor_rf_flt(self):
        """Message field 'vcu_sys_motor_rf_flt'."""
        return self._vcu_sys_motor_rf_flt

    @vcu_sys_motor_rf_flt.setter
    def vcu_sys_motor_rf_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_motor_rf_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_motor_rf_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_motor_rf_flt = value

    @builtins.property
    def vcu_sys_motor_lr_flt(self):
        """Message field 'vcu_sys_motor_lr_flt'."""
        return self._vcu_sys_motor_lr_flt

    @vcu_sys_motor_lr_flt.setter
    def vcu_sys_motor_lr_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_motor_lr_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_motor_lr_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_motor_lr_flt = value

    @builtins.property
    def vcu_sys_motor_rr_flt(self):
        """Message field 'vcu_sys_motor_rr_flt'."""
        return self._vcu_sys_motor_rr_flt

    @vcu_sys_motor_rr_flt.setter
    def vcu_sys_motor_rr_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_motor_rr_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_motor_rr_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_motor_rr_flt = value

    @builtins.property
    def vcu_sys_bms_flt(self):
        """Message field 'vcu_sys_bms_flt'."""
        return self._vcu_sys_bms_flt

    @vcu_sys_bms_flt.setter
    def vcu_sys_bms_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_bms_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_bms_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_bms_flt = value

    @builtins.property
    def vcu_sys_dc_flt(self):
        """Message field 'vcu_sys_dc_flt'."""
        return self._vcu_sys_dc_flt

    @vcu_sys_dc_flt.setter
    def vcu_sys_dc_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_dc_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_dc_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_dc_flt = value

    @builtins.property
    def vcu_sys_door_flt(self):
        """Message field 'vcu_sys_door_flt'."""
        return self._vcu_sys_door_flt

    @vcu_sys_door_flt.setter
    def vcu_sys_door_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_door_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_door_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_door_flt = value

    @builtins.property
    def vcu_sys_dpm_flt(self):
        """Message field 'vcu_sys_dpm_flt'."""
        return self._vcu_sys_dpm_flt

    @vcu_sys_dpm_flt.setter
    def vcu_sys_dpm_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_dpm_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_dpm_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_dpm_flt = value

    @builtins.property
    def vcu_sys_bcm_flt(self):
        """Message field 'vcu_sys_bcm_flt'."""
        return self._vcu_sys_bcm_flt

    @vcu_sys_bcm_flt.setter
    def vcu_sys_bcm_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_bcm_flt' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_bcm_flt' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_bcm_flt = value

    @builtins.property
    def vcu_vehicle_flt_level(self):
        """Message field 'vcu_vehicle_flt_level'."""
        return self._vcu_vehicle_flt_level

    @vcu_vehicle_flt_level.setter
    def vcu_vehicle_flt_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_vehicle_flt_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_vehicle_flt_level' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_vehicle_flt_level = value

    @builtins.property
    def vcu_sys_flt_reserve1(self):
        """Message field 'vcu_sys_flt_reserve1'."""
        return self._vcu_sys_flt_reserve1

    @vcu_sys_flt_reserve1.setter
    def vcu_sys_flt_reserve1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vcu_sys_flt_reserve1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vcu_sys_flt_reserve1' field must be an integer in [-2147483648, 2147483647]"
        self._vcu_sys_flt_reserve1 = value
