#pragma once
#include "Window/Window.h"

#include <string>

#include "GLFW/glfw3.h"

namespace Plexity
{
	class Application
	{
	public:
		Application(const char* title, WindowExtent& windowExtent);

	protected:
		GLFWwindow* window = {};
	};
}
