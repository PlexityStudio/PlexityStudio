#pragma once
#include "Plexity.h"

class Sandbox : public Plexity::Application
{
public:
	Sandbox();

	void run();
	
protected:
	Application application;
	Plexity::GraphicsBackend backend;
};

int main(int argc, char* argv[]);
