# Include directory
include_directories("include")
set(dir my_search_dir)
file (GLOB IOTA_HEADERS "include/*.h")

# All Source Files
aux_source_directory("src" IOTA_SOURCES)

# Make the library
add_library(iota ${IOTA_SOURCES})

# Link the library
target_link_libraries(iota ${GLFW_LIB})
target_link_libraries(iota ${GLEW_LIB})

# Installs
install(TARGETS iota DESTINATION "lib")
install(FILES ${IOTA_HEADERS} DESTINATION "include/iota-engine")
