#include "include/log_client.h"
#include <log.h>
#include <utility>

DLLDECL void log_suite_config(myString_t configFile)
{
    log_suite_config_file(configFile);
}

DLLDECL void log_suite_log_item(myItem_t item)
{
    log_suite_post_item(std::move(item));
}
