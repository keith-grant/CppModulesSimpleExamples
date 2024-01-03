cmake_minimum_required (VERSION 3.28)
project ("ModuleExe")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set_property(GLOBAL PROPERTY CXX_SCAN_FOR_MODULES ON)

add_subdirectory ("exe")
add_subdirectory ("foobar")
add_subdirectory ("fizzbuzz")


