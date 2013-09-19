#iota-engine
A (relatively) minimal opengl based 3D graphics engine.

#Requirements
- c++11 compatible compiler (clang or gcc)
- glfw3
- glm
- assimp
- opengl 3.3+

#Notes
Right now the window is being created with glfw completely where as that
will actually be a class in iota::utils that is can be glfw, sdl, etc...
