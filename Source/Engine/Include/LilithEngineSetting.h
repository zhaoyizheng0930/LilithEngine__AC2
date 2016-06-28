#pragma once
#include "Singleton.h"

namespace Lilith
{
	class LilithEngineSetting:public Singleton<LilithEngineSetting>
	{
	public:
		LilithEngineSetting();
		virtual ~LilithEngineSetting();

		void LoadEngineConfig();

		//get and set func
		std::string GetEngineIconName() {
			return iconName;
		}
		void GetEngineWindowsSize(int& width, int& height) {
			width = WindowsWidth; height = WindowsHeight;
		}

		int GetMonitorNum()
		{
			return MonitorNum;
		}

		int GetViewSurfaceNum()
		{
			return ViewSurfaceNum;
		}
	protected:
	private:
		int MonitorNum;	//if you need clip screen.set 2.FullScreen set 1.
		int ViewSurfaceNum;
		int WindowsWidth;
		int WindowsHeight;
		std::string iconName;
	};
}
