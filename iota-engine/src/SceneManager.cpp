#include "SceneManager.h"

iota::SceneManager::SceneManager()
    : _graph(new iota::SceneGraph())
{
}

iota::SceneManager::~SceneManager()
{
}

bool iota::SceneManager::addChild()
{
    return true;
}

bool iota::SceneManager::removeChild()
{
    return true;
}

void iota::SceneManager::get()
{
}

void iota::SceneManager::begin()
{
    // Lock the scene graph and move the iterator to the start
}

iota::ISceneNode* iota::SceneManager::next()
{
    return NULL;
}

void iota::SceneManager::end()
{
    // Unlock the scene graph
}

