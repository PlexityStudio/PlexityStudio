#include "pxpch.h"
#include "Layout.h"

void Plexity::Layout::createApplication(const char* name, WindowExtent &windowExtent)
{
	application = Application(name, windowExtent);
}
