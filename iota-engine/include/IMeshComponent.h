#ifndef __IOTA_IMESHCOMPONENT__
#define __IOTA_IMESHCOMPONENT__

#include "iota-engine.h"

namespace iota
{
    class IMeshComponent : protected IComponent
    {
        public:
            //virtual ~IMeshComponent {};
            virtual i_indices* getIndicies() = 0;
            virtual i_vectors*  getVertices() = 0;
            virtual i_vectors*  getUVs() = 0;
            virtual i_vectors*  getNormals() = 0;
            virtual i_buffer_id* getVertexBuffer() = 0;
            virtual i_buffer_id* getUVBuffer() = 0;
            virtual i_buffer_id* getNormalBuffer() = 0;
            virtual i_buffer_id* getElementBuffer() = 0;
    };
}

#endif
