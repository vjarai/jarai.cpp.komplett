# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("6_Standard_Template_Library")

# Include sub-projects.
add_subdirectory ("1_unique_ptr")
add_subdirectory ("2_shared_ptr")
add_subdirectory ("3_containers_and_iterators")
add_subdirectory ("4_algorithms")
add_subdirectory ("5_regular_expressions")
add_subdirectory ("6_tuple")
add_subdirectory ("7_thread_lambda_functor")
add_subdirectory ("8_fstream")

