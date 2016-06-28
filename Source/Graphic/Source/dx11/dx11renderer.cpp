#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11renderer.h"

namespace Lilith
{
	DX11Renderer::DX11Renderer():
		DX11BaseRenderer(),
		m_GraphicDevice(NULL)
	{

	}

	DX11Renderer::~DX11Renderer()
	{

	}

	void DX11Renderer::SetHelpers(DX11GraphicDevice* pGraphicDevice)
	{
		m_GraphicDevice = pGraphicDevice;
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