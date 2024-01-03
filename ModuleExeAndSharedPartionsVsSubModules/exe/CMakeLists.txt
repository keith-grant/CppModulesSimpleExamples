add_executable (exe "main.cpp")

target_link_libraries(exe PRIVATE foobar)
target_link_libraries(exe PRIVATE fizzbuzz)