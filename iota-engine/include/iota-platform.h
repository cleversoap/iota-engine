#ifndef __IOTAPLATFORM_H__
#define __IOTAPLATFORM_H__

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
// Eventually this will just be the interface types so as to allow for
// extensions.
namespace iota
{
    class Context;
    class Window;

    class ISceneManager;
    class ISceneNode;
    class IComponent;
    class IMeshComponent;
    class ILightComponent;
}

// Types
#include "iota-types.h"

// Container and Context
#include "Context.h"
#include "Window.h"

// Scene Manager
#include "ISceneManager.h"

// Scene Nodes
#include "ISceneNode.h"

// Components
#include "IComponent.h"
#include "IMeshComponent.h"
#include "ILightComponent.h"

#endif
