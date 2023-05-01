# CMakeList.txt : CMake project for 1_unique_ptr, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (6_1_unique_ptr "main.cpp"  "FooBar.h" "FooBar.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 6_1_unique_ptr PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
