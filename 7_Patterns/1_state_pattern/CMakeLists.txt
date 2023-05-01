# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (7_1_state_pattern "main.cpp" 
"Telefon.h" "Telefon.cpp"
"Telefonzustand.h" "Telefonzustand.cpp" 
"Abgehoben.h" "Abgehoben.cpp"
"Verbunden.h" "Verbunden.cpp"
"Aufgelegt.h" "Aufgelegt.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 7_1_state_pattern PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
