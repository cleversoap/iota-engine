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
    typedef std::map<std::string,Node*> i_node_map;
    typedef std::vector<Node*> i_node_list; // TODO: tbb::concurrent_vector

    // GL Versions
    typedef struct {
        uint major;
        uint minor;
        bool core;
        bool forward;
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
