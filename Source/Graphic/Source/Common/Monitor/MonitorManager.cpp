#include "PrecompiledHeaderGraphic.h"
#include "Common/Monitor/MonitorManager.h"

namespace Lilith
{
	MonitorManager::MonitorManager()
	{
		for (int i = 0; i < MAX_MONITOR_NUM;i++)
		{
			m_monitors[i] = nullptr;
		}
	}

	MonitorManager::~MonitorManager()
	{
	}

	void MonitorManager::InitializeMonitor(int index, HWND windowHandle)
	{
		Monitor* monitor = GetMonitor(index);
		if (monitor == nullptr)
		{
			monitor = new Monitor();
			monitor->Initialize(windowHandle);
		}
		else
		{
			//LOG:You had already init the monitor
		}

	}

	Monitor* MonitorManager::GetMonitor(int index)
	{
		if (index < MAX_MONITOR_NUM)
		{
			return m_monitors[index];
		}
	}
}