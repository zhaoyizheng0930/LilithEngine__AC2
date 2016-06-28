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

	void LilithEngine::Initialize(HWND hwnd)
	{
		//Default use Index 0
		int Width = 0;
		int Height = 0;
		GetSetting()->GetEngineWindowsSize(Width, Height);
		Monitor* monitor = MonitorManager::GetSingletonPtr()->GetMonitor();
		monitor->Initialize(hwnd, Width, Height);
		DX11ViewSurface* viewsurface = GraphicManager::GetSingletonPtr()->GetViewSurface();
		viewsurface->Initialize(monitor->GetGraphicDevice() , hwnd , Width , Height);
	}

	void LilithEngine::LoadConfiguration()
	{
		LilithEngineSetting::GetSingletonPtr()->LoadEngineConfig();
	}

	void LilithEngine::CreateMonitor()
	{
		//CreateMonitor
		int MonitorNum = GetSetting()->GetMonitorNum();
		for (int i = 0; i < MonitorNum;i++)
		{
			MonitorManager::GetSingletonPtr()->CreateMonitor();
		}
	}

	void LilithEngine::CreateViewSurface()
	{
		int ViewSurfaceNum = GetSetting()->GetViewSurfaceNum();
		for (int i = 0; i < ViewSurfaceNum; i++)
		{
			GraphicManager::GetSingletonPtr()->CreateViewSurface();
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