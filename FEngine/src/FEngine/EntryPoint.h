#pragma once
#include "../FEngine.h"

#ifdef HZ_PLATFORM_WINDOWS

extern FEngine::Application* FEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = FEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif
