# iota-engine
# clever@cleversoap.com
cmake_minimum_required(VERSION 2.8)
project(IOTA)

# Force C++ 11
add_definitions("-std=c++11 -stdlib=libc++")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++")

# Set the Module Path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# GLFW
find_package(GLFW3)
include_directories(${GLFW3_DIR})
link_directories(${GLFW3_LIB_DIR})

# Move into the iota-engine library directory
add_subdirectory("iota-engine")
