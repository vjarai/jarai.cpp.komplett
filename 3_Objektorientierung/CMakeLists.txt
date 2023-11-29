# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("3_Objektorientierung")

# Include sub-projects.
add_subdirectory ("1_Composition")
add_subdirectory ("2_Kapselung")
add_subdirectory ("3_Vererbung")
add_subdirectory ("4_copy_constructor")


