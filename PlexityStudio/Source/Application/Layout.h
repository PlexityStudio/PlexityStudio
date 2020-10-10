#pragma once
#include "pxpch.h"

#include <optional>

#include "Application.h"
#include "Window/Window.h"

namespace Plexity
{
	class Layout
	{
	public:
		virtual ~Layout() = default;
		virtual void OnAwake();
		virtual void OnShutdown();

	public:
		void createApplication(const char* name, WindowExtent& windowExtent);

	protected:
		Application application;
	};
}

