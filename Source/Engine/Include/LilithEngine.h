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

		virtual void Initialize(HWND hwnd);

		virtual void LoadConfiguration();

		//Todo:ALL Monitor Use the windowhandle.default 
		virtual void CreateMonitor();//(hardware wrap)

		virtual void CreateViewSurface();//(Logic wrap)

		virtual void Update();

		virtual void ShutDown();

		virtual LilithEngineSetting* GetSetting();
	protected:
	private:
	};
}
