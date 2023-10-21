#ifndef VAO_CLASS_H
#define VAO_CLASS_H

#include <glad/glad.h> // Include glad to get all the required OpenGL headers
#include "VBO.h"

class VAO
{
public:
	GLuint ID;
	VAO();

	void LinkAttributes(VBO& VBO, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset);
	void Bind();
	void Unbind();
	void Delete();
	
};

#endif // !VAO_CLASS_H