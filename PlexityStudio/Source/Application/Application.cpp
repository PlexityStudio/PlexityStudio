#include "pxpch.h"
#include "Application.h"

Plexity::Application::Application() = default;

Plexity::Application::Application(const char* title, const WindowExtent windowExtent)
{
	Log::init();
	
	INFO("Loading a new application, {}.", title);
	
	// Initialize glfw and create a window
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	window = glfwCreateWindow(windowExtent.width, windowExtent.height, title, nullptr, nullptr);
}
