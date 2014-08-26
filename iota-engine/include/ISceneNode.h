#ifndef __IOTA_ISCENENODE_H__
#define __IOTA_ISCENENODE_H__

#include "iota-platform.h"

namespace iota
{
    class ISceneNode
    {
        public:
            virtual ~ISceneNode() {};
            virtual std::string getId() = 0;
            virtual void getPosition() = 0;
            virtual void setPosition() = 0;
            virtual void getRotation() = 0;
            virtual void setRotation() = 0;
            virtual bool isVisible() = 0;
            virtual ISceneNode* getParent() = 0;
    };
}

#endif
