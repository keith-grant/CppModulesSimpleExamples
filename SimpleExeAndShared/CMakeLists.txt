cmake_minimum_required (VERSION 3.28)
project ("SimpleExe")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory ("exe")
add_subdirectory ("foobar")


