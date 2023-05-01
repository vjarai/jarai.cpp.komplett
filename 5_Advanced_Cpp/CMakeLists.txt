# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("5_Advanced_Cpp")

# Include sub-projects.
add_subdirectory ("1_operator_overloading")
add_subdirectory ("2_exceptions")
add_subdirectory ("3_functor")
add_subdirectory ("4_multiple_inheritance")



