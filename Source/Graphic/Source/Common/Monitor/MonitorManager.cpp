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

	void MonitorManager::CreateMonitor()
	{
		Monitor* monitor = new Monitor();
		m_Monitors.push_back(monitor);
	}

	Monitor* MonitorManager::GetMonitor(int index)
	{
		if (index < m_Monitors.size())
		{
			return m_Monitors[index];
		}
	}
}