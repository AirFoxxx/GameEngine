#pragma once

#include "Core.h"

namespace FEngine {



	class FENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	//will be defined in a client
	Application* CreateApplication();
}
