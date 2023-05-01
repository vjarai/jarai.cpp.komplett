# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("jarai.cpp.grundlagen")

# Include sub-projects.
add_subdirectory ("1_Grundlagen")
add_subdirectory ("2_Pointer_und_Arrays")
add_subdirectory ("3_Objektorientierung")
add_subdirectory ("4_Templates")
add_subdirectory ("7_Patterns")

