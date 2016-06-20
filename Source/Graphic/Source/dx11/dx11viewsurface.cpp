#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11viewsurface.h"
#include "dx11/dx11drawmanager.h"

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

	void DX11ViewSurface::Initialize(DX11GraphicDevice* GraphicDevice, int width, int height)
	{
		m_GraphicDevice = GraphicDevice;

		m_SwapChain = new DX11Swapchain(m_GraphicDevice , m_WindowHandle , width , height);

	}

	void DX11ViewSurface::Render()
	{
		DX11DrawManager::GetSingletonPtr()->Render(this);
	}
}