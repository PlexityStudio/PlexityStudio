#include "./Sandbox.h"

Sandbox::Sandbox() : Application()
{
	application = Application("Sandbox", Plexity::WindowExtent{ 800, 600 });
	backend = Plexity::GraphicsBackend::Vulkan;

	Plexity::GraphicsLoader::chooseBackend(&backend);
}

void Sandbox::run()
{
	while (!application.getWindowStatus())
	{
		pollWindowEvents();
	}
}

void Start()
{
	Sandbox sandbox{};
	sandbox.run();
}

int main(int argc, char* argv[])
{
	Start();
}
