#include "Context.h"

iota::Context::Context(iota::Window* window, const iota::ContextConfig &cfg) :
    _window(window),
    _smgr(new SceneManager()),
    _cfg(cfg)
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

iota::ISceneManager* iota::Context::getSceneManager()
{
    return _smgr;
}
