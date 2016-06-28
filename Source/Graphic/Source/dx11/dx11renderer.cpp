#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11renderer.h"

namespace Lilith
{
	DX11Renderer::DX11Renderer():
		DX11BaseRenderer(),
		m_GraphicDevice(NULL)
	{
		m_GraphicContext = new DX11GraphicContext();
		m_GraphicContext->SetRender(this);
	}

	DX11Renderer::~DX11Renderer()
	{

	}

	void DX11Renderer::Initialize()
	{
	}

	void DX11Renderer::SetHelpers(DX11ViewSurface* viewsurface)
	{
		m_GraphicDevice = viewsurface->GetGraphicDevice();
		m_CurrentView = m_GraphicContext->GetView();

		m_GraphicContext->SetGraphicDevice(viewsurface->GetGraphicDevice());
		m_GraphicContext->SetViewSurface(viewsurface);
	}

	DX11GraphicContext* DX11Renderer::GetGraphicContext()
	{
		return m_GraphicContext;
	}

	void DX11Renderer::Render(RenderBatch* batch)
	{
		if (!PrepareRendering())
		{
			return;
		}

		PrepareData();

		//RenderVisibilityPass

		//RenderShadowMaps

		//RenderProjectors

		//AfterProjectors

		//RenderDepthPass

		//PostEffect

		SetupMainRenderSurface();

		//Device Reset State

		//MSAA

		//i dont know what these will do
		//DrawOpaque
		//DrawClutter

		//DrawSkyDome
		
		//DrawLODBlends

		//DrawLayers

		//SSAO

		//DrawSkyDome// draw pre-transparent skydome elements (cloud layer)

		//DrawTransparent

		//DrawTransparent	//why these draw twice

		//DrawSkyDome	//draw transparent skydome elements (flares, etc)

		//Finalize	posteffects + final transfer to swap chain surface

		//PostRender//  Maybe do nothing
	}

	bool DX11Renderer::PrepareRendering()
	{

	}

	void DX11Renderer::SetupMainRenderSurface()
	{
		//m_GraphicDevice->
	}

	void DX11Renderer::PrepareData()
	{

	}
}