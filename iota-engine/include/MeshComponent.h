#ifndef __IOTA_MESHCOMPONENT_H__
#define __IOTA_MESHCOMPONENT_H__

#include "iota-platform.h"

namespace iota
{
    class MeshComponent : public IMeshComponent
    {
        protected:
            i_buffer_id _vertexBuffer;
            i_buffer_id _uvBuffer;
            i_buffer_id _normalBuffer;
            i_buffer_id _elementBuffer;

        public:
            MeshComponent();
            virtual ~MeshComponent();
            virtual component getType();
    };
}

#endif
