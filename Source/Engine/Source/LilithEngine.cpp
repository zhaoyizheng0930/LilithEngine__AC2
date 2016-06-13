#include "PrecompiledHeaderEngine.h"
#include "../Include/LilithEngine.h"

namespace Lilith
{
	LilithEngine::LilithEngine()
	{

	}

	LilithEngine::~LilithEngine()
	{

	}

	void LilithEngine::Initialize()
	{
		LilithEngineSetting::GetSingletonPtr()->LoadEngineConfig();
	}
}