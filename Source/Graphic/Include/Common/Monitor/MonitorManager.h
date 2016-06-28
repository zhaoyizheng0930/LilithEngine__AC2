#pragma once
#include "Monitor.h"
#include "Singleton.h"

#define MAX_MONITOR_NUM 2

namespace Lilith
{
	class MonitorManager:public Singleton<MonitorManager>
	{
	public:
		MonitorManager();
		~MonitorManager();
	public:
		void CreateMonitor();

		Monitor* GetMonitor(int index = 0);
	private:
		std::vector<Monitor*> m_Monitors;
	};
}