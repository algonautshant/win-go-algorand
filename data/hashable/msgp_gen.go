package hashable

// Code generated by github.com/algorand/msgp DO NOT EDIT.

import (
	"github.com/algorand/msgp/msgp"
)

// The following msgp objects are implemented in this file:
// Message
//    |-----> (*) MarshalMsg
//    |-----> (*) CanMarshalMsg
//    |-----> (*) UnmarshalMsg
//    |-----> (*) CanUnmarshalMsg
//    |-----> (*) Msgsize
//    |-----> (*) MsgIsZero
//

// MarshalMsg implements msgp.Marshaler
func (z *Message) MarshalMsg(b []byte) (o []byte, err error) {
	o = msgp.Require(b, z.Msgsize())
	// omitempty: check for empty values
	zb0001Len := uint32(1)
	var zb0001Mask uint8 /* 2 bits */
	if (*z).Message == "" {
		zb0001Len--
		zb0001Mask |= 0x2
	}
	// variable map header, size zb0001Len
	o = append(o, 0x80|uint8(zb0001Len))
	if zb0001Len != 0 {
		if (zb0001Mask & 0x2) == 0 { // if not empty
			// string "msg"
			o = append(o, 0xa3, 0x6d, 0x73, 0x67)
			o = msgp.AppendString(o, (*z).Message)
		}
	}
	return
}

func (_ *Message) CanMarshalMsg(z interface{}) bool {
	_, ok := (z).(*Message)
	return ok
}

// UnmarshalMsg implements msgp.Unmarshaler
func (z *Message) UnmarshalMsg(bts []byte) (o []byte, err error) {
	var field []byte
	_ = field
	var zb0001 int
	var zb0002 bool
	zb0001, zb0002, bts, err = msgp.ReadMapHeaderBytes(bts)
	if _, ok := err.(msgp.TypeError); ok {
		zb0001, zb0002, bts, err = msgp.ReadArrayHeaderBytes(bts)
		if err != nil {
			err = msgp.WrapError(err)
			return
		}
		if zb0001 > 0 {
			zb0001--
			(*z).Message, bts, err = msgp.ReadStringBytes(bts)
			if err != nil {
				err = msgp.WrapError(err, "struct-from-array", "Message")
				return
			}
		}
		if zb0001 > 0 {
			err = msgp.ErrTooManyArrayFields(zb0001)
			if err != nil {
				err = msgp.WrapError(err, "struct-from-array")
				return
			}
		}
	} else {
		if err != nil {
			err = msgp.WrapError(err)
			return
		}
		if zb0002 {
			(*z) = Message{}
		}
		for zb0001 > 0 {
			zb0001--
			field, bts, err = msgp.ReadMapKeyZC(bts)
			if err != nil {
				err = msgp.WrapError(err)
				return
			}
			switch string(field) {
			case "msg":
				(*z).Message, bts, err = msgp.ReadStringBytes(bts)
				if err != nil {
					err = msgp.WrapError(err, "Message")
					return
				}
			default:
				err = msgp.ErrNoField(string(field))
				if err != nil {
					err = msgp.WrapError(err)
					return
				}
			}
		}
	}
	o = bts
	return
}

func (_ *Message) CanUnmarshalMsg(z interface{}) bool {
	_, ok := (z).(*Message)
	return ok
}

// Msgsize returns an upper bound estimate of the number of bytes occupied by the serialized message
func (z *Message) Msgsize() (s int) {
	s = 1 + 4 + msgp.StringPrefixSize + len((*z).Message)
	return
}

// MsgIsZero returns whether this is a zero value
func (z *Message) MsgIsZero() bool {
	return ((*z).Message == "")
}
