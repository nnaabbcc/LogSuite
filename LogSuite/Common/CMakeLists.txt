
add_library(LogSuiteCommon
    log_comm_factory.cpp
    log_types.cpp
    log.cpp
)
target_include_directories(LogSuiteCommon INTERFACE include)
