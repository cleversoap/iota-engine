#ifndef __IOTAENGINE_H__
#define __IOTAENGINE_H__

// std includes
#include <iostream>
#include <thread>
#include <chrono>
#include <map>
#include <vector>
#include <string>

// glew must be included before anything GL
#include <glew.h>

// glfw3
#include <glfw3.h>

// glm
#include <glm.hpp>

// Class pre-declarations
namespace iota
{
    class Context;
    class Window;
    class SceneGraph;
    class Node;
}

// Types
#include "types.h"

// Headers
#include "Context.h"
#include "Window.h"
#include "SceneGraph.h"
#include "Node.h"

#endif
