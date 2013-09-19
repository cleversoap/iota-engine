# Header Directory
find_path(GLFW3_DIR glfw3.h DOC "Path to GLFW3 include directory."
    HINTS
    $ENV{GLFW_ROOT}
    $ENV{GLFW3_ROOT}
    PATH_SUFFIX include
    PATHS
    /usr/include/GLFW
    /usr/local/include/GLFW
    /usr/include/GL
    /usr/local/include/GL
    ${GLFW_ROOT_DIR}/include/
    ${GLFW_ROOT_DIR}/include/GLFW
    )

message(STATUS "Found GLFW3 Headers: ${GLFW3_DIR}")

# Library Directory
find_path(GLFW3_LIB_DIR libglfw3.dylib libglfw3.a libglfw3.so glfw3.lib DOC "Path to GLFW3 libraries."
    HINTS
    PATH_SUFFIX lib
    PATHS
    ${GLFW_ROOT_DIR}/lib
    /usr/lib
    /usr/local/lib
)

message(STATUS "Found GLFW3 Libraries: ${GLFW3_LIB_DIR}")

# Library
find_library(GLFW3_LIB DOC "GLFW Library"
    NAMES glfw3
    HINTS
    ${GLFW3_LIB_DIR}
)

message(STATUS "Found GLFW3 Library: ${GLFW3_LIB}")
