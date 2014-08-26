#ifndef __IOTA_SCENENODE_H__
#define __IOTA_SCENENODE_H__

#include "iota-engine.h"

namespace iota
{
    class SceneNode : public ISceneNode
    {
        protected:
            //i_node_list _children;
            const std::string _id;
            ISceneNode* _parent;

        public:
            SceneNode(const std::string &id);
            virtual ~SceneNode();
            virtual std::string getId();
            virtual void getPosition();
            virtual void setPosition();
            virtual void getRotation();
            virtual void setRotation();
            virtual bool isVisible();
            virtual ISceneNode* getParent();
    };
}

#endif
