#ifndef __IOTA_TYPES_H__
#define __IOTA_TYPES_H__

#define IOTA_OK     true
#define IOTA_ERROR  -1

namespace iota
{
    // Internal GL Types
    typedef GLuint  i_uint; 
    typedef GLfloat i_float;
    typedef GLuint  i_texture_id;

    // iota convenience types
    typedef std::map<std::string,ISceneNode*> i_node_map;
    typedef std::vector<ISceneNode*> i_node_list;

    // GL Versions
    typedef struct {
        const uint major;
        const uint minor;
        const bool core;
        const bool forward;
    } GLVersion;

    // Configurations
    typedef struct {
        i_uint      width;
        i_uint      height;
        bool        fullscreen;
        bool        resizable;
        std::string title;
    } WindowConfig;

    typedef struct {
        int   samples;
        bool  ssao;
        int   filtering;
    } ContextConfig;
}

#endif
