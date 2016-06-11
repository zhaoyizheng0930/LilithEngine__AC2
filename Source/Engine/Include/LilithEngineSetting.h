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
	protected:
	private:
		std::string iconName;
	};
}
