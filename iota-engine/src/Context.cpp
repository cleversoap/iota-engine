#include "Context.h"

iota::Context::Context(Window* window) :
    _window(window)
{
    _window->setContext(this);
}

iota::Context::~Context()
{
}

bool iota::Context::init()
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    return true;
}

void iota::Context::draw()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
    glfwSwapBuffers(_window->getWindow());
    glfwPollEvents();
}
