#ifndef __LOG_SUITE_LOG_TYPES_H__
#define __LOG_SUITE_LOG_TYPES_H__

enum LogSeverity
{
    Audit,
    Fatal,
    Error,
    Warn,
    Info,
    Debug,
};

using LogVolume = unsigned long;

#ifdef UNICODE
    using myChar = wchar_t;
#else
    using myChar = char;
#endif

#ifdef WIN32
    #ifdef DLL_EXPORT_ENABLED
        #define DLLDECL __declspec(dllexport)
    #else
        #define DLLDECL __declspec(dllimport)
    #endif
#else
    #define DLLDECL
#endif

#endif // __LOG_SUITE_LOG_TYPES_H__