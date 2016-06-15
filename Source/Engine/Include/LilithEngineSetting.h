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
		void GetEngineWindowsSize(float& width, float& height) {
			width = WindowsWidth; height = WindowsHeight;
		}

		int GetMonitorNum()
		{
			return MonitorNum;
		}
	protected:
	private:
		int MonitorNum;
		float WindowsWidth;
		float WindowsHeight;
		std::string iconName;
	};
}
