#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11renderer.h"

namespace Lilith
{
	DX11Renderer::DX11Renderer():
		DX11BaseRenderer()
	{

	}

	DX11Renderer::~DX11Renderer()
	{

	}

	void DX11Renderer::Render(/*RenderBatch& renderBatch, GfxBaseRendererRenderSets& baseRenderSets, GfxRenderSet& swapChainRenderSet*/)
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

	}

	void DX11Renderer::PrepareData()
	{

	}
}