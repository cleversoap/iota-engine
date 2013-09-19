# Header Directory
find_path(GLEW_DIR glew.h DOC "Path to GLEW include directory"
    HINTS
    $ENV{PROGRAMFILES}/GLEW/include
    $ENV{PROGRAMFILES}/GLEW/include/GL
    PATH_SUFFIX include
    PATHS
    /usr/include/GL
    /usr/local/include/GL
    ${GLEW_ROOT}/include
    ${GLEW_ROOT}/include/GL
)

message(STATUS "Found GLEW Headers: ${GLEW_DIR}")

# Library Directory
find_path(GLEW_LIB_DIR libglew.dylib libglew.a libglew.so glew.lib DOC "Path to GLEW libraries."
    HINTS
    PATH_SUFFIX lib
    PATHS
    ${GLFW_ROOT_DIR}/lib
    /usr/lib
    /usr/local/lib
)

message(STATUS "Found GLEW Libraries: ${GLEW_LIB_DIR}")

# Library
find_library(GLEW_LIB DOC "GLEW Library"
    NAMES glew
    HINTS
    ${GLEW_LIB_DIR}
)

message(STATUS "Found GLEW Library: ${GLEW_LIB}")
