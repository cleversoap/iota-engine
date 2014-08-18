#ifndef __IOTA_CONTEXT_H__
#define __IOTA_CONTEXT_H__

#include "iota-engine.h"

namespace iota
{
    class Context
    {
        protected:
            Window* _window;

        public:
            Context(Window* window);
            virtual ~Context();
            virtual bool init();
            virtual void draw();
    };
}

#endif

