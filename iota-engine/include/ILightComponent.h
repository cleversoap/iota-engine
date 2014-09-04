#ifndef __IOTA_ILIGHTCOMPONENT_H__
#define __IOTA_ILIGHTCOMPONENT_H__

#include "iota-platform.h"

namespace iota
{
    class ILightComponent : protected IComponent
    {
        public:
            virtual iota::light getLightType() = 0;
    };
}

#endif
