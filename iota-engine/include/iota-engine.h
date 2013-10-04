#ifndef __IOTAENGINE_H__
#define __IOTAENGINE_H__

// std includes
#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

// glew must be included before anything GL
#include <glew.h>

// glfw3
#include <glfw3.h>

// glm
#include <glm.hpp>

// Types
#include "types.h"

// Class pre-declarations
namespace iota
{
    class Context;
    class Window;
    class SceneGraph;
    class Node;
}

// Headers
#include "Context.h"
#include "Window.h"
#include "SceneGraph.h"
#include "Node.h"

#endif
