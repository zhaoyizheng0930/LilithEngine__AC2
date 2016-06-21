#pragma once
#include "dx11/dx11baserenderer.h"
#include "dx11/dx11device.h"

namespace Lilith
{
	class DX11Renderer :public DX11BaseRenderer
	{
	public:
		DX11Renderer();
		~DX11Renderer();

		void SetHelpers(DX11GraphicDevice* pGraphicDevice);

		void Render(/*RenderBatch& renderBatch, GfxBaseRendererRenderSets& baseRenderSets, GfxRenderSet& swapChainRenderSet*/);
	protected:

		void PrepareData();

		bool PrepareRendering();

		void SetupMainRenderSurface();
	private:
		//helpers
		DX11GraphicDevice* m_GraphicDevice;
	};
}