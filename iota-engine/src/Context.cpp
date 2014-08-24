#include "Context.h"

iota::Context::Context(iota::Window* window, const iota::ContextConfig &cfg) :
    _window(window),
    _cfg(cfg),
    _version({.major = 3, .minor = 3, .core = true, .forward = true})
{
    _window->setContext(this);
}

iota::Context::~Context()
{
}

bool iota::Context::init()
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, _version.major);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, _version.minor);

    if (_version.forward) {
        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    }

    if (_version.core) {
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    }

    return true;
}

void iota::Context::draw()
{
    // Clear
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );

    // Tell the scene manager we are starting a frame
    _smgr->begin();

    // The current node being rendered
    ISceneNode* node;

    // Loop through nodes as the scene manager presents them and draw them
    // accordingly for the context.
    while ((node = _smgr->next())) {

        // Tell gl to use any shaders etc...
        // Tell gl to use buffers etc...
        // Tell gl to do its thing etc...

    }

    // Cleanup the node if it exists
    if (node) {
        delete node;
    }

    // Done drawing, show the buffer in the window
    glfwSwapBuffers(_window->getWindow());

    // Tell the scene manager we are done with the frame
    _smgr->end();

    // Poll for events from GLFW - this is necessary to run the window it seems
    // but may be moved into an input type module eventually
    glfwPollEvents();

}

iota::GLVersion iota::Context::getVersion()
{
    return _version;
}

void iota::Context::setSceneManager(iota::ISceneManager* smgr)
{
    _smgr = smgr;
}

iota::ISceneManager* iota::Context::getSceneManager()
{
    return _smgr;
}
