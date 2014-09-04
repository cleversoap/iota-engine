#ifndef __IOTA_MESHCOMPONENT_H__
#define __IOTA_MESHCOMPONENT_H__

#include "iota-platform.h"

namespace iota
{
    class MeshComponent : public IMeshComponent
    {
        protected:
            GLuint _vertexBuffer;
            GLuint _uvBuffer;
            GLuint _normalBuffer;
            GLuint _elementBuffer;

        public:
            MeshComponent();
            virtual ~MeshComponent();
            virtual component getType();
    };
}

#endif
