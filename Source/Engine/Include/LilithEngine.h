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

		virtual void CreateDevice();

		virtual void Update();

		virtual void ShutDown();
	protected:
	private:
	};
}
