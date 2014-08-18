#include "Window.h"

iota::Window::Window()
{
    // Initialise GLFW Window
    if (!glfwInit()) {
        std::cerr << "Failed to initialise GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }
}

iota::Window::~Window()
{
    if (_window) {
        glfwDestroyWindow(_window);
    }

    glfwTerminate();
}

/**
TODO: Look at masking for the certain window hint options
eg. glfwWindowHint(GLFW_RESIZABLE, GL_TRUE);
*/
void iota::Window::open()
{
    // Tell the context to initialise
    if (!_context->init()) {
        std::cerr << "Failed to initialise OpenGL Context" << std::endl;
        exit(EXIT_FAILURE);
    }

    // Create a window
    _window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (!_window) {
        std::cerr << "Failed to create GLFW Window" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(_window);

    // Setup Glew
    glewExperimental = GL_TRUE;
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialise GLEW" << std::endl;
        this->close();
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

bool iota::Window::update()
{
    if (!glfwWindowShouldClose(_window)) {
        _context->draw();
        return true;
    }

    return false;
}

void iota::Window::close()
{
    if (_window) {
        glfwSetWindowShouldClose(_window, true);
    }
}

GLFWwindow* iota::Window::getWindow()
{
    return _window;
}

iota::Context* iota::Window::getContext()
{
    return _context;
}

void iota::Window::setContext(Context* context)
{
    _context = context;
}


