
add_library(LogSuiteCommon
    log_types.cpp
    log.cpp
    log_comm/log_comm_factory.cpp
)

target_include_directories(LogSuiteCommon INTERFACE include)
