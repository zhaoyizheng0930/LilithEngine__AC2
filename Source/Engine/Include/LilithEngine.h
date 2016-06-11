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
	protected:
	private:
	};
}
