#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define FENGINE_API __declspec(dllexport)
	#else
		#define FENGINE_API __declspec(dllimport)
	#endif
#else
	#error FEngine only supports windows
#endif


 