
add_library(
    shared
    SHARED
    "Foo.h"
    "Foo.cpp"
    "Bar.h"
    "Bar.cpp"
)

# Generate a header conatining an export MACRO called SHARED_EXPORT
include(GenerateExportHeader)
GENERATE_EXPORT_HEADER(shared EXPORT_FILE_NAME ${CMAKE_BINARY_DIR}/exports/shared_export.h)


target_include_directories(
    shared
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_BINARY_DIR}/exports
)