﻿# CMakeList.txt : CMake project for 1_unique_ptr, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (7_2_singleton_antipattern "main.cpp"  "Singleton.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 7_2_singleton_antipattern PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
