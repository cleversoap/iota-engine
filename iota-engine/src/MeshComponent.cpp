#include "MeshComponent.h"

iota::MeshComponent::MeshComponent()
{
    glGenBuffers(1, &_vertexBuffer);
    glGenBuffers(1, &_uvBuffer);
    glGenBuffers(1, &_normalBuffer);
    glGenBuffers(1, &_elementBuffer);
}

iota::MeshComponent::~MeshComponent()
{
    glDeleteBuffers(1, &_vertexBuffer);
    glDeleteBuffers(1, &_uvBuffer);
    glDeleteBuffers(1, &_normalBuffer);
    glDeleteBuffers(1, &_elementBuffer);

}

iota::component iota::MeshComponent::getType()
{
    return iota::MESH;
}
