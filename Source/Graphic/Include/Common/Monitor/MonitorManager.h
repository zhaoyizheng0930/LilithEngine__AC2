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
		void InitializeMonitor(int index, HWND windowHandle);

		Monitor* GetMonitor(int index = 0);
	private:
		Monitor* m_monitors[MAX_MONITOR_NUM];
	};
}