# Include directory
include_directories("include")

# All Source Files
aux_source_directory("src" IOTA_SOURCES)

# Make the library
add_library(iota ${IOTA_SOURCES})

# Link the library
target_link_libraries(iota ${GLFW_LIB})
