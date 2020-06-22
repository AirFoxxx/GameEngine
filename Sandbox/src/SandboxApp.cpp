#include <FEngine.h>

class Sandbox : public FEngine::Application {

public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

FEngine::Application* FEngine::CreateApplication()
{
	return new Sandbox();
}