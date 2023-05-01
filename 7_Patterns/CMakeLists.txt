# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("7_Patterns")

# Include sub-projects.
add_subdirectory ("1_state_pattern")
add_subdirectory ("2_singleton_antipattern")
add_subdirectory ("3_strategy_pattern")
add_subdirectory ("4_adaptor_pattern")

