#ifndef __IOTA_SCENEGRAPH_H__ 
#define __IOTA_SCENEGRAPH_H__ 

#include "iota-engine.h"

namespace iota
{
    class SceneGraph
    {
        protected:
            uint _count;

        public:
            SceneGraph();
            virtual ~SceneGraph();
    };
}

#endif
