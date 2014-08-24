#ifndef __IOTA_NODE_H__
#define __IOTA_NODE_H__

#include "iota-engine.h"

namespace iota
{
    class SceneNode
    {
        protected:
            i_node_list _children;
            std::string _name;
            SceneNode* _parent;

        public:
            SceneNode();
            virtual ~SceneNode();
            virtual bool isVisible();
    };
}

#endif
