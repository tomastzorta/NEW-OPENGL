#ifndef VBO_CLASS_H
#define VBO_CLASS_H

#include <vector>
#include <glm/glm.hpp>
#include <glad/glad.h> // Include glad to get all the required OpenGL headers


struct Vertex
{
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec3 Color;
	glm::vec2 TexCoords;
};

class VBO
{
public:
	GLuint ID;
	VBO(std::vector<Vertex>& vertices);

	void Bind();
	void Unbind();
	void Delete();
};

#endif // !VBO_CLASS_H