#include "SceneGraph.h"

iota::SceneGraph::SceneGraph() :
    _count(0)
{
    _root = new iota::RootSceneNode();
}

iota::SceneGraph::~SceneGraph()
{
    // TODO: Destroy nodes by walking node map
}

void iota::SceneGraph::addNode(iota::ISceneNode* node, iota::ISceneNode* parent)
{
    // If no parent was supplied and the node does not already have a parent
    // then the parent will default to the root scene node.
    if (parent == NULL) {
        if (node->getParent() == NULL) {
            parent = this->getRoot();
        } else {
            parent = node->getParent();
        }
    }

    // Add to the graph
}

iota::ISceneNode* iota::SceneGraph::getNode(const std::string name)
{
    return _nodeMap.find(name)->second;
}

iota::RootSceneNode* iota::SceneGraph::getRoot()
{
    return _root;
}
