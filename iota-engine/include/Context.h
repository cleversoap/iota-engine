#ifndef __IOTA_CONTEXT_H__
#define __IOTA_CONTEXT_H__

#include "iota-engine.h"

namespace iota
{
    class Context
    {
        protected:
            Window* _window;
            ISceneManager* _smgr;
            ContextConfig _cfg;

        public:
            Context(Window* window, const ContextConfig &cfg);
            virtual ~Context();
            virtual bool init();
            virtual void draw();
            virtual ISceneManager* getSceneManager();
    };
}

#endif

