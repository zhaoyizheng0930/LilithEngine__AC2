#include "PrecompiledHeaderEngine.h"
#include "../Include/LilithEngine.h"
#include "Common/Monitor/MonitorManager.h"
#include "../../Graphic/Include/Common/GraphicManager.h"

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

	void LilithEngine::CreateMonitor(HWND windowHandle)
	{
		//CreateMonitor
		int MonitorNum = GetSetting()->GetMonitorNum();
		for (int i = 0; i < MonitorNum;i++)
		{
			MonitorManager::GetSingletonPtr()->InitializeMonitor(i, windowHandle);
		}
	}

	void LilithEngine::Update()
	{
		GraphicManager::GetSingletonPtr()->Update();
	}

	void LilithEngine::ShutDown()
	{

	}

	LilithEngineSetting* LilithEngine::GetSetting()
	{
		return LilithEngineSetting::GetSingletonPtr();
	}
}