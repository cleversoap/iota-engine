#ifndef __IOTA_ISCENEMANAGER_H__
#define __IOTA_ISCENEMANAGER_H__

#include "iota-platform.h"

namespace iota
{
    class ISceneManager
    {
        public:
            /**
             */
            virtual bool addChild()    = 0;

            /**
             */
            virtual bool removeChild() = 0;

            /**
             */
            virtual void begin()       = 0;

            /**
             */
            virtual ISceneNode* next() = 0;

            /**
             */
            virtual void end()         = 0;
    };
}

#endif
