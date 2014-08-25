#include "SceneGraph.h"

iota::SceneGraph::SceneGraph() :
    _count(0)
{
    _root = new iota::RootSceneNode();
}

iota::SceneGraph::~SceneGraph()
{
}

iota::ISceneNode* iota::SceneGraph::getNode(const std::string name)
{
    return _nodeMap.find(name)->second;
}
