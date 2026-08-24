# generated from rosidl_generator_py/resource/_idl.py.em
# with input from pix_robobus_driver_msgs:msg/VcuTransfer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VcuTransfer(type):
    """Metaclass of message 'VcuTransfer'."""

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
                'pix_robobus_driver_msgs.msg.VcuTransfer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vcu_transfer
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vcu_transfer
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vcu_transfer
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vcu_transfer
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vcu_transfer

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


class VcuTransfer(metaclass=Metaclass_VcuTransfer):
    """Message class 'VcuTransfer'."""

    __slots__ = [
        '_header',
        '_spare',
        '_ac_out_temp',
        '_ac_in_temp',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'spare': 'boolean',
        'ac_out_temp': 'int32',
        'ac_in_temp': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.spare = kwargs.get('spare', bool())
        self.ac_out_temp = kwargs.get('ac_out_temp', int())
        self.ac_in_temp = kwargs.get('ac_in_temp', int())

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
        if self.spare != other.spare:
            return False
        if self.ac_out_temp != other.ac_out_temp:
            return False
        if self.ac_in_temp != other.ac_in_temp:
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
    def spare(self):
        """Message field 'spare'."""
        return self._spare

    @spare.setter
    def spare(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'spare' field must be of type 'bool'"
        self._spare = value

    @builtins.property
    def ac_out_temp(self):
        """Message field 'ac_out_temp'."""
        return self._ac_out_temp

    @ac_out_temp.setter
    def ac_out_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ac_out_temp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ac_out_temp' field must be an integer in [-2147483648, 2147483647]"
        self._ac_out_temp = value

    @builtins.property
    def ac_in_temp(self):
        """Message field 'ac_in_temp'."""
        return self._ac_in_temp

    @ac_in_temp.setter
    def ac_in_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ac_in_temp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ac_in_temp' field must be an integer in [-2147483648, 2147483647]"
        self._ac_in_temp = value
