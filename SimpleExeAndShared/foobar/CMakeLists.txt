
add_library(
    foobar
    SHARED
    "Foo.h"
    "Foo.cpp"
    "Bar.h"
    "Bar.cpp"
)

# Generate a header conatining an export MACRO called FOOBAR_EXPORT
include(GenerateExportHeader)
GENERATE_EXPORT_HEADER(foobar EXPORT_FILE_NAME ${CMAKE_BINARY_DIR}/exports/foobar_export.h)


target_include_directories(
    foobar
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_BINARY_DIR}/exports
)