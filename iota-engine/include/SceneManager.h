#ifndef __IOTA_SCENEMANAGER_H__
#define __IOTA_SCENEMANAGER_H__

#include "iota-engine.h"

#include "SceneGraph.h"

namespace iota
{
    class SceneManager : public ISceneManager
    {
        protected:
            SceneGraph* _graph;

        public:
            SceneManager();
            virtual ~SceneManager();
            virtual bool addChild();
            virtual bool removeChild();
            virtual void get();
            virtual void begin();
            virtual ISceneNode* next();
            virtual void end();
    };
}

#endif
