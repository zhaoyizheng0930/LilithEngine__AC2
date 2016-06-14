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

	void LilithEngine::CreateDevice()
	{
		float width, height;
		LilithEngineSetting::GetSingletonPtr()->GetEngineWindowsSize(width, height);
		UINT createDeviceFlags = 0;
#ifdef _DEBUG
		createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif
	}

	void LilithEngine::Update()
	{

	}

	void LilithEngine::ShutDown()
	{

	}
}