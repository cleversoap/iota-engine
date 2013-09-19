# Headers Only
find_path(GLM_DIR glm.hpp DOC "Path to GLM include directory"
    HINTS
    $ENV{PROGRAMFILES}/glm/include
    PATH_SUFFIX include
    PATHS
    /usr/include/glm
    /usr/local/include/glm
    ${GLM_ROOT}/include
)

message(STATUS "Found GLM Headers: ${GLM_DIR}")
