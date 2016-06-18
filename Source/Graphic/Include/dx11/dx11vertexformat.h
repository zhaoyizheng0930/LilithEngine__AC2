#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11device.h"

namespace Lilith
{
	class DX11VertexFormatManager
	{
	public:
		DX11VertexFormatManager();
		~DX11VertexFormatManager();

		void init(DX11GraphicDevice* device);

	protected:
	private:
	};
}