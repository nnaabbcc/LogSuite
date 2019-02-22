#pragma once

#include "log_types.h"
#include <string>
#include <list>

namespace LogSuite
{
namespace Common
{

using Severity_t = myLogSeverity_t;
using Volume_t = myLogVolume_t;

#ifdef UNICODE
using String_t = std::wstring;
#else
using String_t = std::string;
#endif

using Bool_t = myBool_t;
using Int8_t = myInt8_t;
using UInt8_t = myUInt8_t;
using Int16_t = myInt16_t;
using UInt16_t = myUInt16_t;
using Int32_t = myInt32_t;
using UInt32_t = myUInt32_t;
using Int64_t = myInt64_t;
using UInt64_t = myUInt64_t;
using Float16_t = myFloat16_t;
using Float32_t = myFloat32_t;
using Float64_t = myFloat64_t;

struct Value_t
{
    my_vtype_t vt;
    union
    {
        myBool_t    boolValue;
        myInt8_t    int8Value;
        myUInt8_t   uint8Value;
        myInt16_t   int16Value;
        myUInt16_t  uint16Value;
        myInt32_t   int32Value;
        myUInt32_t  uint32Value;
        myInt64_t   int64Value;
        myUInt64_t  uint64Value;
        myFloat16_t float16Value;
        myFloat32_t float32Value;
        myFloat64_t float64Value;
        String_t    stringValue;
    };

    Value_t(Bool_t val);
    Value_t(Int8_t val);
    Value_t(UInt8_t val);
    Value_t(Int16_t val);
    Value_t(UInt16_t val);
    Value_t(Int32_t val);
    Value_t(UInt32_t val);
    Value_t(Int64_t val);
    Value_t(UInt64_t val);
    Value_t(Float16_t val);
    Value_t(Float32_t val);
    Value_t(Float64_t val);
    Value_t(String_t val);
    Value_t(const Value_t& val);
    Value_t(const myValue_t& val);

    ~Value_t();

    Value_t& operator = (const myValue_t& val);
    Value_t& operator = (Bool_t val);
    Value_t& operator = (Int8_t val);
    Value_t& operator = (UInt8_t val);
    Value_t& operator = (Int16_t val);
    Value_t& operator = (UInt16_t val);
    Value_t& operator = (Int32_t val);
    Value_t& operator = (UInt32_t val);
    Value_t& operator = (Int64_t val);
    Value_t& operator = (UInt64_t val);
    Value_t& operator = (Float16_t val);
    Value_t& operator = (Float32_t val);
    Value_t& operator = (Float64_t val);
    Value_t& operator = (String_t val);
};

struct NamedValue_t
{
    String_t name;
    Value_t  value;

    NamedValue_t() = default;
    NamedValue_t(const NamedValue_t& val);
    NamedValue_t(const myNamedValue_t& val);

    NamedValue_t& operator = (const myNamedValue_t& val);
};

struct Item_t
{
    String_t time;
    String_t file;
    String_t func;
    UInt32_t line;
    Severity_t severity;
    std::list<NamedValue_t> values;

    Item_t& operator = (const myItem_t& item);
};

}
}
