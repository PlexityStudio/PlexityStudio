#include "pxpch.h"
#include "Application.h"

Plexity::Application::Application(const char* title, WindowExtent& windowExtent)
{
	glfwCreateWindow(windowExtent.width, windowExtent.height, title, nullptr, window);
}