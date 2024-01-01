cmake_minimum_required (VERSION 3.28)
project ("SimpleExe")


add_executable (SimpleExe "main.cpp"  "Foo.h" "Foo.cpp" "Bar.h" "Bar.cpp")
set_property(TARGET SimpleExe PROPERTY CXX_STANDARD 20)

