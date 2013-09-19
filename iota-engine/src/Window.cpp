#include "Window.h"

iota::Window::Window()
{
    // Initialise GLFW
    if (!glfwInit())
    {
        std::cerr << "Failed to initialise GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }

    // Create a window
    _window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (!_window)
    {
        std::cerr << "Failed to create GLFW Window" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Setup Glew
    glewExperimental = true;
    if (!glewInit())
    {
        std::cerr << "Failed to initialise GLEW" << std::endl;
        exit(EXIT_FAILURE);
    }
}

iota::Window::~Window()
{
    if (_window)
    {
        glfwDestroyWindow(_window);
    }
}

void iota::Window::open()
{
    while(!glfwWindowShouldClose(_window))
    {
        // TODO: Render
    }
}

void iota::Window::close()
{
    glfwSetWindowShouldClose(_window, GL_TRUE);
}


