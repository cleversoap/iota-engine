#ifndef __IOTA_ICOMPONENT_H__
#define __IOTA_ICOMPONENT_H__

#include "iota-platform.h"

namespace iota
{
    class IComponent
    {
        public:
            virtual ~IComponent() {};
            virtual component getType() = 0;
            virtual void setPosition() = 0;
            // Get position will return a matrix to apply to the context
            virtual void setRotation() = 0;
            // Set position will return a matrix to apply to the context
            // isDirty will not apply any updates
    };
}

#endif
