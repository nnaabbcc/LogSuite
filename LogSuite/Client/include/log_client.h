#ifndef __LOG_SUITE_CLIENT_INCLUDE_LOG_CLIENT_H__
#define __LOG_SUITE_CLIENT_INCLUDE_LOG_CLIENT_H__

#include <log_types.h>
#include <log_dlldecl.h>

extern "C" {

DLLDECL void log_suite_log_item(myItem_t item);

}

#endif // __LOG_SUITE_CLIENT_INCLUDE_LOG_CLIENT_H__
