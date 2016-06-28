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

		m_SwapChain->Init();

	}

	void DX11ViewSurface::Display()
	{
		PreRender();
		DX11DrawManager::GetSingletonPtr()->Render(this);
		PostRender();
	}

	std::vector<View*>& DX11ViewSurface::GetViews()
	{
		return m_Views;
	}

	DX11GraphicDevice* DX11ViewSurface::GetGraphicDevice()
	{
		return m_GraphicDevice;
	}

	void DX11ViewSurface::PreRender()
	{

	}

	void DX11ViewSurface::PostRender()
	{
		//Flip swapchain
		if (m_SwapChain != NULL)
		{
			m_SwapChain->Flip();
		}
	}
}