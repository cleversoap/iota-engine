#ifndef __IOTA_ICOMPONENT_H__
#define __IOTA_ICOMPONENT_H__

#include "iota-engine.h"

namespace iota
{
    class IComponent
    {
        public:
            virtual void setPosition() = 0;
            virtual void setRotation() = 0;
    };
}

#endif
