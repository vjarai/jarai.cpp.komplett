# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("jarai.cpp.complete")

# Include sub-projects.
add_subdirectory ("01_hello_world")
add_subdirectory ("02_console_input")
add_subdirectory ("03_conditionals")
add_subdirectory ("04_for_loop")
add_subdirectory ("05_while_loop")
add_subdirectory ("06_do_while_loop")
add_subdirectory ("07_Zahlenraten")
add_subdirectory ("08_function_overloading")
add_subdirectory ("09_explicit_conversions")
add_subdirectory ("10_struct_enum_typedef")

