# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (3_4_copy_constructor "main.cpp" "Motor.cpp" "Motor.h" "Auto.cpp" "Auto.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 3_4_copy_constructor PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
