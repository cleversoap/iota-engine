#include "SceneNode.h"

    iota::SceneNode::SceneNode(const std::string &id)
: _id(id)
{
}

iota::SceneNode::~SceneNode()
{
}

std::string iota::SceneNode::getId()
{
    return _id;
}

void iota::SceneNode::getPosition()
{
}

void iota::SceneNode::setPosition()
{
}

void iota::SceneNode::getRotation()
{
}

void iota::SceneNode::setRotation()
{
}

bool iota::SceneNode::isVisible()
{
    return true;
}

iota::ISceneNode* iota::SceneNode::getParent()
{
    return _parent;
}
