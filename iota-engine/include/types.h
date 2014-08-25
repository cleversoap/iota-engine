#ifndef __IOTA_TYPES_H__
#define __IOTA_TYPES_H__

#define IOTA_OK     true
#define IOTA_ERROR  -1

namespace iota
{
    // Internal GL Types
    typedef GLuint  i_buffer_id;
    typedef GLuint  i_uint; 
    typedef GLfloat i_float;
    typedef GLuint  i_texture_id;

    // iota convenience types
    // SceneNode containers
    typedef std::map<std::string,ISceneNode*> i_node_map;
    typedef std::vector<ISceneNode*> i_node_list;
    // Attribute containers
    typedef std::vector<unsigned short> i_indices;
    typedef std::vector<glm::vec3> i_vectors;

    // GL Versions
    typedef struct {
        const uint major; // byte?
        const uint minor; // byte?
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

    // Attributes
    typedef struct {
    } Position;

    typedef struct {
    } Rotation;
}

#endif
