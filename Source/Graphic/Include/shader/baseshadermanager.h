#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11device.h"

namespace Lilith
{
	class BaseShaderManager
	{
	public:
		BaseShaderManager();
		~BaseShaderManager();

		virtual void Initialize(DX11GraphicDevice* device){}
	protected:
	private:
	};
}