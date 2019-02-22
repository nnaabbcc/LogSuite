#ifndef __LOG_SUITE_COMMON_INCLUDE_LOG_H__
#define __LOG_SUITE_COMMON_INCLUDE_LOG_H__

#include "log_types.h"

void log_suite_post_item(myItem_t item);
bool log_suite_retrieve_item(myItem_t& item);

#endif // __LOG_SUITE_COMMON_INCLUDE_LOG_H__
