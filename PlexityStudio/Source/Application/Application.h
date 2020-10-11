#pragma once
#include <GLFW/glfw3.h>

#include "Window/Window.h"

namespace Plexity
{
	class Application
	{
	public:
		Application();
		Application(const char* title, WindowExtent windowExtent);

	public:
		int getWindowStatus() const { return glfwWindowShouldClose(window); }
		static void pollWindowEvents() { glfwPollEvents(); }
		
	protected:
		GLFWwindow* window = nullptr;
	};
}
