#include "PrecompiledHeaderGraphic.h"
#include "dx11device.h"
#include "Rect.h"

namespace Lilith
{
	//A View Meed to be Draw
	class DX11ViewSurface
	{
	public:
		DX11ViewSurface(HWND windowHandle, int width, int height);
		~DX11ViewSurface();

	protected:
	private:
		HWND m_WindowHandle;

		Rect* m_rect;
		
		//PostEffects*		m_PostEffects;
		DX11GraphicDevice*  m_GraphicDevice;
	};
}