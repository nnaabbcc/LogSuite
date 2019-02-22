#ifndef __LOG_SUITE_COMMON_INCLUDE_LOG_TYPES_H__
#define __LOG_SUITE_COMMON_INCLUDE_LOG_TYPES_H__

extern "C"
{

using myAChar_t = char;
using myWChar_t = wchar_t;

enum my_vtype_t
{
    vt_bool,
    vt_int8,
    vt_uint8,
    vt_int16,
    vt_uint16,
    vt_int32,
    vt_uint32,
    vt_int64,
    vt_uint64,
    vt_float16,
    vt_float32,
    vt_float64,
    vt_string,
    vt_wstring
};

using myBool_t = bool;
using myInt8_t = char;
using myUInt8_t = unsigned char;
using myInt16_t = short;
using myUInt16_t = unsigned short;
using myInt32_t = long;
using myUInt32_t = unsigned long;
using myInt64_t = long long;
using myUInt64_t = unsigned long long;
using myFloat16_t = float;
using myFloat32_t = double;
using myFloat64_t = long double;

struct myAString_t
{
    myUInt32_t size;
    myAChar_t* str;
};

struct myWString_t
{
    myUInt32_t size;
    myWChar_t* str;
};

#ifdef UNICODE
    using myChar_t = myWChar_t;
    using myString_t = myWString_t;
    #define myText(x) L##x
#else
    using myChar_t = myAChar_t;
    using myString_t = myAString_t;
    #define myText(x) x
#endif

struct myValue_t
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
        myString_t  stringValue;
    };
};

struct myNamedValue_t
{
    myString_t name;
    myValue_t  value;
};

enum myLogSeverity_t
{
    Audit,
    Fatal,
    Error,
    Warn,
    Info,
    Debug,
};

using myLogVolume_t = myUInt32_t;

struct myItem_t
{
    myString_t time;
    myString_t file;
    myString_t func;
    myUInt32_t line;
    myLogSeverity_t severity;
    myUInt32_t valueCount;
    myNamedValue_t* values;
};

}

#endif // __LOG_SUITE_COMMON_INCLUDE_LOG_TYPES_H__
