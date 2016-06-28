#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11context.h"


namespace Lilith
{
	DX11GraphicContext::DX11GraphicContext()
	{

	}

	DX11GraphicContext::~DX11GraphicContext()
	{

	}

	DX11GraphicDevice* DX11GraphicContext::GetGraphicDevice()
	{
		return m_GraphicDevice;
	}

	View* DX11GraphicContext::GetView()
	{
		return m_CurrentView;
	}

	void DX11GraphicContext::SetRender(DX11Renderer* render)
	{
		m_Render = render;
	}

	void DX11GraphicContext::SetGraphicDevice(DX11GraphicDevice* device)
	{
		m_GraphicDevice = device;
	}

	void DX11GraphicContext::SetViewSurface(DX11ViewSurface* viewsurface)
	{
		m_ViewSurface = viewsurface;
	}
}