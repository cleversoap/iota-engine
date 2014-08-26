#ifndef __IOTA_WINDOW_H__
#define __IOTA_WINDOW_H__

#include "iota-platform.h"

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
            virtual void open(const WindowConfig &cfg);
            virtual bool update();
            virtual void close();
            virtual GLFWwindow* getWindow();
            virtual Context* getContext();
            virtual void setContext(Context* context);
    };
}

#endif
