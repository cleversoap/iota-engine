#ifndef __IOTA_NODE_H__
#define __IOTA_NODE_H__

namespace iota
{
    class Node
    {
        public:
            Node();
            virtual ~Node();
            virtual bool isVisible();
    };
}

#endif
