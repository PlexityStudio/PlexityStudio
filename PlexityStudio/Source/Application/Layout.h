#pragma once

namespace Plexity
{
	class Layout
	{
	public:
		Layout() = default;

		virtual ~Layout() = default;
		virtual void onAwake();
		virtual void onShutdown();
	};
}

