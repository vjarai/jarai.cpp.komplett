# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("2_Pointer_und_Arrays")

# Include sub-projects.
add_subdirectory ("1_c_style_pointer")
add_subdirectory ("2_const_pointer")
add_subdirectory ("3_parameter_passing")
add_subdirectory ("4_arrays_and_pointers")
add_subdirectory ("5_new_and_delete")
add_subdirectory ("6_function_pointer")
add_subdirectory ("7_pointer_vs_reference")
