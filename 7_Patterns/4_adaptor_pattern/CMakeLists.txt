

# Add source to this project's executable.
add_executable (7_4_adaptor_pattern "main.cpp"
        "appleladegeraet.cpp" "iphone.cpp"
"usbladegeraet.cpp"
"usbtolightningAdapter.cpp"
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 7_4_adaptor_pattern PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
