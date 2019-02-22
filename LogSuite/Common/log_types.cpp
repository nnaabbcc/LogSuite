#include "include/log_types.hpp"

namespace LogSuite
{
namespace Common
{

Value_t::Value_t(Bool_t val)
    : vt(vt_bool)
    , boolValue(val)
{}

Value_t::Value_t(Int8_t val)
    : vt(vt_int8)
    , int8Value(val)
{}

Value_t::Value_t(UInt8_t val)
    : vt(vt_uint8)
    , uint8Value(val)
{}

Value_t::Value_t(Int16_t val)
    : vt(vt_int16)
    , int16Value(val)
{}

Value_t::Value_t(UInt16_t val)
    : vt(vt_uint16)
    , uint16Value(val)
{}

Value_t::Value_t(Int32_t val)
    : vt(vt_int32)
    , int32Value(val)
{}

Value_t::Value_t(UInt32_t val)
    : vt(vt_uint32)
    , uint32Value(val)
{}

Value_t::Value_t(Int64_t val)
    : vt(vt_int64)
    , int64Value(val)
{}

Value_t::Value_t(UInt64_t val)
    : vt(vt_uint64)
    , uint64Value(val)
{}

Value_t::Value_t(Float16_t val)
    : vt(vt_float16)
    , float16Value(val)
{}

Value_t::Value_t(Float32_t val)
    : vt(vt_float32)
    , float32Value(val)
{}

Value_t::Value_t(Float64_t val)
    : vt(vt_float64)
    , float64Value(val)
{}

Value_t::Value_t(String_t val)
#ifdef UNICODE
    : vt(vt_wstring)
#else
    : vt(vt_string)
#endif
    , stringValue(val)
{}

Value_t::Value_t(const Value_t& val)
{
    vt = val.vt;
    switch (vt)
    {
    case vt_bool:
        boolValue = val.boolValue;
        break;
    case vt_int8:
        int8Value = val.int8Value;
        break;
    case vt_uint8:
        uint8Value = val.uint8Value;
        break;
    case vt_int16:
        int16Value = val.int16Value;
        break;
    case vt_uint16:
        uint16Value = val.uint16Value;
        break;
    case vt_int32:
        int32Value = val.int32Value;
        break;
    case vt_uint32:
        uint32Value = val.uint32Value;
        break;
    case vt_int64:
        int64Value = val.int64Value;
        break;
    case vt_uint64:
        uint64Value = val.uint64Value;
        break;
    case vt_float16:
        float16Value = val.float16Value;
        break;
    case vt_float32:
        float32Value = val.float32Value;
        break;
    case vt_float64:
        float64Value = val.float64Value;
        break;
    case vt_string:
    case vt_wstring:
        stringValue = val.stringValue;
        break;
    }
}

Value_t::Value_t(const myValue_t& val)
{
    *this = val;
}

Value_t::~Value_t()
{}

Value_t& Value_t::operator = (const myValue_t& val)
{
    vt = val.vt;
    switch (vt)
    {
    case vt_bool:
        boolValue = val.boolValue;
        break;
    case vt_int8:
        int8Value = val.int8Value;
        break;
    case vt_uint8:
        uint8Value = val.uint8Value;
        break;
    case vt_int16:
        int16Value = val.int16Value;
        break;
    case vt_uint16:
        uint16Value = val.uint16Value;
        break;
    case vt_int32:
        int32Value = val.int32Value;
        break;
    case vt_uint32:
        uint32Value = val.uint32Value;
        break;
    case vt_int64:
        int64Value = val.int64Value;
        break;
    case vt_uint64:
        uint64Value = val.uint64Value;
        break;
    case vt_float16:
        float16Value = val.float16Value;
        break;
    case vt_float32:
        float32Value = val.float32Value;
        break;
    case vt_float64:
        float64Value = val.float64Value;
        break;
    case vt_string:
    case vt_wstring:
        stringValue = val.stringValue.str;
        break;
    }
    return *this;
}

Value_t& Value_t::operator = (Bool_t val)
{
    vt = vt_bool;
    boolValue = val;
    return *this;
}

Value_t& Value_t::operator = (Int8_t val)
{
    vt = vt_int8;
    int8Value = val;
    return *this;
}

Value_t& Value_t::operator = (UInt8_t val)
{
    vt = vt_uint8;
    uint8Value = val;
    return *this;
}

Value_t& Value_t::operator = (Int16_t val)
{
    vt = vt_int16;
    int16Value = val;
    return *this;
}

Value_t& Value_t::operator = (UInt16_t val)
{
    vt = vt_uint16;
    uint16Value = val;
    return *this;
}

Value_t& Value_t::operator = (Int32_t val)
{
    vt = vt_int32;
    int32Value = val;
    return *this;
}

Value_t& Value_t::operator = (UInt32_t val)
{
    vt = vt_uint32;
    uint32Value = val;
    return *this;
}

Value_t& Value_t::operator = (Int64_t val)
{
    vt = vt_int64;
    int64Value = val;
    return *this;
}

Value_t& Value_t::operator = (UInt64_t val)
{
     vt = vt_uint64;
     uint64Value = val;
     return *this;
}

Value_t& Value_t::operator = (Float16_t val)
{
    vt = vt_float16;
    float16Value = val;
    return *this;
}

Value_t& Value_t::operator = (Float32_t val)
{
    vt = vt_float32;
    float32Value = val;
    return *this;
}

Value_t& Value_t::operator = (Float64_t val)
{
    vt = vt_float64;
    float64Value = val;
    return *this;
}

Value_t& Value_t::operator = (String_t val)
{
#ifdef UNICODE
    vt = vt_wstring;
#else
    vt = vt_string;
#endif
    stringValue = val;
    return *this;
}

NamedValue_t::NamedValue_t(const NamedValue_t& val)
    : name(val.name)
    , value(val.value)
{}

NamedValue_t::NamedValue_t(const myNamedValue_t& val)
    : name(val.name.str)
    , value(val.value)
{}

NamedValue_t& NamedValue_t::operator = (const myNamedValue_t& val)
{
    name = val.name.str;
    value = val.value;
    return *this;
}

Item_t& Item_t::operator = (const myItem_t& item)
{
    this->time = item.time.str;
    this->file = item.file.str;
    this->func = item.func.str;
    this->line = item.line;
    this->severity = item.severity;
    for (decltype(item.valueCount) i = 0; i < item.valueCount; i++)
    {
        NamedValue_t value = item.values[i];
        this->values.push_back(std::move(value));
    }
    return *this;
}

}
}
