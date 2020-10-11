#pragma once

namespace Plexity
{
	enum class GraphicsBackend
	{
		OpenGL,
		Vulkan,
		DirectX12,
	};
	
	class GraphicsLoader
	{
	public:
		static void chooseBackend(GraphicsBackend* backend);
		static GraphicsBackend** getBackend() { return &graphicsBackend; }
		
	private:
		static GraphicsBackend* graphicsBackend;
	};
}

