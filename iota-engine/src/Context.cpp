#include "Context.h"

iota::Context::Context(Window* window) :
    _window(window)
{
}

iota::Context::~Context()
{
}

void iota::Context::update()
{
    glClear( GL_COLOR_BUFFER_BIT );
    glfwSwapBuffers(_window->getWindow());
    glfwPollEvents();
}
