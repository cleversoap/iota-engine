# iota-engine
# clever@cleversoap.com
cmake_minimum_required(VERSION 2.8)
project(IOTA)

# Force C++ 11
add_definitions("-std=c++11")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++")

# Set the Module Path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

# GLFW
find_package(GLFW3 REQUIRED)
include_directories(${GLFW3_DIR})
link_directories(${GLFW3_LIB_DIR})

# GLEW
find_package(GLEW REQUIRED)
include_directories(${GLEW_DIR})
link_directories(${GLEW_LIB_DIR})

# GLM
find_package(GLM REQUIRED)
include_directories(${GLM_DIR})

# OSX Frameworks
if(APPLE)
    find_library(COCOA_LIBRARY Cocoa REQUIRED)
    find_library(OPENGL_LIBRARY OpenGL REQUIRED)
    find_library(IOKIT_LIBRARY IOKit REQUIRED)
    find_library(COREVIDEO_LIBRARY CoreVideo REQUIRED)
    set(APPLE_FRAMEWORKS ${COCOA_LIBRARY} ${OPENGL_LIBRARY} ${IOKIT_LIBRARY} ${COREVIDEO_LIBRARY})
endif(APPLE)

# Move into the iota-engine library directory
add_subdirectory("iota-engine")
