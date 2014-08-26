#ifndef __IOTA_CONTEXT_H__
#define __IOTA_CONTEXT_H__

#include "iota-platform.h"

namespace iota
{
    class Context
    {
        protected:
            Window*          _window;
            ISceneManager*   _smgr;
            ContextConfig    _cfg;
            const GLVersion  _version;

        public:
            Context(Window* window, const ContextConfig &cfg);
            virtual ~Context();
            virtual bool init();
            virtual void draw();
            virtual GLVersion getVersion();
            virtual ISceneManager* getSceneManager();
            virtual void setSceneManager(ISceneManager* smgr);
    };
}

#endif

