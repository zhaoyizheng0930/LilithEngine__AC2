#pragma once
#include "LilithEngineSetting.h"
#include "Singleton.h"


namespace Lilith
{
	class LilithEngine: public Singleton<LilithEngine>
	{
	public:
		LilithEngine();
		virtual ~LilithEngine();

		virtual void Initialize();

		//Todo:ALL Monitor Use the windowhandle.
		virtual void CreateMonitor(HWND windowHandle);

		virtual void Update();

		virtual void ShutDown();

		virtual LilithEngineSetting* GetSetting();
	protected:
	private:
	};
}
