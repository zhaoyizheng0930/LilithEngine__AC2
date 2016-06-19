#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11viewsurface.h"

namespace Lilith
{
	DX11ViewSurface::DX11ViewSurface(HWND windowHandle, int width, int height)
	{
		m_WindowHandle = windowHandle;
		m_rect = new Rect(0, 0, width, height);
	}

	DX11ViewSurface::~DX11ViewSurface()
	{

	}
}