#ifndef __IOTA_NODE_H__
#define __IOTA_NODE_H__

#include "iota-engine.h"

namespace iota
{
    class Node
    {
        protected:
            i_node_list _children;
            std::string _name;
            Node* _parent;

        public:
            Node();
            virtual ~Node();
            virtual bool isVisible();
    };
}

#endif
