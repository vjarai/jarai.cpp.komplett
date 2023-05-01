# CMakeList.txt : CMake project for 1_shared_ptr, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (6_6_tuple "main.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 6_6_tuple PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
