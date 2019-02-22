
add_library(LogSuiteClient SHARED
    log_client.cpp
)

if (WIN32)
    target_compile_definitions(LogSuiteClient PRIVATE
        WIN32
        DLL_EXPORT_ENABLED
    )
endif()

target_link_libraries(LogSuiteClient PRIVATE LogSuiteCommon)
