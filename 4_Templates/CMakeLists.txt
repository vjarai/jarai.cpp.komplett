# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.7...3.8)

project ("4_Templates")

# Include sub-projects.
add_subdirectory ("1_function_template")
add_subdirectory ("2_class_template")

