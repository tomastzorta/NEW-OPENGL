#pragma once

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class WindowManager {
public:
	WindowManager(int width, int height);
	~WindowManager();

	GLFWwindow* window;

	void CreateWindow(GLFWwindow*& window);

private:
	int width;
	int height;
};
