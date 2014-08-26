#ifndef __IOTA_MESHCOMPONENT_H__
#define __IOTA_MESHCOMPONENT_H__

#include "iota-platform.h"

namespace iota
{
    class MeshComponent : public IMeshComponent
    {
        public:
            MeshComponent();
            virtual ~MeshComponent();
            virtual component getType();
    };
}

#endif
