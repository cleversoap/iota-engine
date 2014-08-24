#ifndef __IOTA_SCENEGRAPH_H__ 
#define __IOTA_SCENEGRAPH_H__ 

#include "iota-engine.h"

namespace iota
{
    class SceneGraph
    {
        protected:
            // Running count of scene nodes that have been added.
            // Used primarily for assigning a numerical suffix to
            // nodes added without a specific name.
            i_uint      _count;

            // Global map of node names to nodes.
            i_node_map  _nodeMap;

            // Root node of the entire scene
            ISceneNode*       _root;

        public:
            SceneGraph();
            virtual ~SceneGraph();
            virtual ISceneNode* getNode(const std::string name);
    };
}

#endif
