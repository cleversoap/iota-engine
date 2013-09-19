#include "Window.h"

iota::Window::Window()
{
    // Initialise GLFW
    if (!glfwInit())
    {
        std::cerr << "Failed to initialise GLFW" << std::endl;
        exit(EXIT_FAILURE);
    }
}

iota::Window::~Window()
{
    if (_window)
    {
        glfwDestroyWindow(_window);
    }

    glfwTerminate();
}

void iota::Window::open()
{
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
        this->close();
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(_window);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    /**
      while(!glfwWindowShouldClose(_window))
      {
    // TODO: Render
    }
    */
}

void iota::Window::close()
{
    if (_window)
    {
        glfwSetWindowShouldClose(_window, true);
    }
}

GLFWwindow* iota::Window::getWindow()
{
    return _window;
}


