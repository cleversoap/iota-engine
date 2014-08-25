#ifndef __IOTA_IMESHCOMPONENT__
#define __IOTA_IMESHCOMPONENT__

#include "iota-engine.h"

namespace iota
{
    class IMeshComponent
    {
        public:
            virtual i_indices* getIndicies() = 0;
            virtual i_vectors*  getVertices() = 0;
            virtual i_vectors*  getUVs() = 0;
            virtual i_vectors*  getNormals() = 0;
    };
}

#endif
