#ifndef __IOTA_WINDOW_H__
#define __IOTA_WINDOW_H__

#include "iota-engine.h"

namespace iota
{
    class Window
    {
        protected:
            GLFWwindow* _window;

        public:
            Window();
            virtual ~Window();
            virtual void open();
            virtual void close();
            virtual GLFWwindow* getWindow();
    };
}

#endif
