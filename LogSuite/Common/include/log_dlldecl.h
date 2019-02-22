#ifndef __LOG_SUITE_COMMON_INCLUDE_LOG_DLLDECL_H__
#define __LOG_SUITE_COMMON_INCLUDE_LOG_DLLDECL_H__

#ifdef WIN32
    #ifdef DLL_EXPORT_ENABLED
        #define DLLDECL __declspec(dllexport)
    #else
        #define DLLDECL __declspec(dllimport)
    #endif
#else
    #define DLLDECL
#endif

#endif // __LOG_SUITE_COMMON_INCLUDE_LOG_DLLDECL_H__
