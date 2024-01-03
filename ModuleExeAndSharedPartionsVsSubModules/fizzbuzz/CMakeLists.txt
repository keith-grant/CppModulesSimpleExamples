
add_library(
    fizzbuzz
    SHARED

)

target_sources(
    fizzbuzz
PRIVATE
    "Fizz.cpp"
    "Buzz.cpp"
)

target_sources(
    fizzbuzz
    PUBLIC
    FILE_SET "CXX_MODULES"
    FILES
    "Module.ixx" "Fizz.ixx"  "Buzz.ixx"
)

# Generate a header conatining an export MACRO called FIZZBUZZ_EXPORT
include(GenerateExportHeader)
GENERATE_EXPORT_HEADER(fizzbuzz EXPORT_FILE_NAME ${CMAKE_BINARY_DIR}/exports/fizzbuzz_export.h)


target_include_directories(
    fizzbuzz
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_BINARY_DIR}/exports
)