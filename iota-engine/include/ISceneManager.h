#ifndef __IOTA_ISCENEMANAGER_H__
#define __IOTA_ISCENEMANAGER_H__

class ISceneManager
{
    public:
        virtual void addChild();
        virtual void removeChild();
        virtual void get();

        // TODO: Iterator that goes over the list of nodes in the order they
        // were added? Selector engine as well?
};

#endif
