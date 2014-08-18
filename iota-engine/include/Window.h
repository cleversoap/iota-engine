#ifndef __IOTA_WINDOW_H__
#define __IOTA_WINDOW_H__

#include "iota-engine.h"

namespace iota
{
    class Window
    {
        protected:
            GLFWwindow* _window;
            Context* _context;

        public:
            Window();
            virtual ~Window();
            virtual void open();
            virtual bool update();
            virtual void close();
            virtual GLFWwindow* getWindow();
            virtual Context* getContext();
            virtual void setContext(Context* context);
    };
}

#endif
