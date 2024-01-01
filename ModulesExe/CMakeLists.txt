cmake_minimum_required (VERSION 3.28)
project ("ModulesExe")


add_executable (ModulesExe)

target_sources(
    ModulesExe
PRIVATE
    "main.cpp"
    "Foo.cpp"
    "Bar.cpp"
)

target_sources(
    ModulesExe
    PRIVATE
    FILE_SET "CXX_MODULES"
    FILES
    "Foo.ixx"  "Bar.ixx" 
)
set_property(TARGET ModulesExe PROPERTY CXX_STANDARD 20)
