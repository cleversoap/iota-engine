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

            // Map of node names to nodes.
            i_node_map  _nodeMap;

        public:
            SceneGraph();
            virtual ~SceneGraph();
    };
}

#endif
