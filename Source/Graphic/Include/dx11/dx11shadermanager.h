#include "PrecompiledHeaderGraphic.h"
#include "shader/baseshadermanager.h"
#include "dx11/dx11device.h"

namespace Lilith
{
	class DX11ShaderManager:public BaseShaderManager
	{
	public:
		DX11ShaderManager();
		~DX11ShaderManager();

		virtual void Initialize(DX11GraphicDevice* device);
	protected:
	private:

	};
}