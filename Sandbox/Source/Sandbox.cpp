#include "Plexity.h"

class Sandbox final : Plexity::Layout
{
public:
	~Sandbox() override;
	void OnAwake() override;
	void OnShutdown() override;
};

Sandbox::~Sandbox()
{
}

void Sandbox::OnAwake()
{
}

void Sandbox::OnShutdown()
{
}

int main()
{
	//Sandbox sandbox{};
	//sandbox.createApplication();
}