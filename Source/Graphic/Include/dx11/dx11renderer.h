#pragma once
#include "dx11/dx11baserenderer.h"

namespace Lilith
{
	class DX11Renderer :public DX11BaseRenderer
	{
	public:
		DX11Renderer();
		~DX11Renderer();

		void Render(/*RenderBatch& renderBatch, GfxBaseRendererRenderSets& baseRenderSets, GfxRenderSet& swapChainRenderSet*/);
	protected:

		void PrepareData();

		bool PrepareRendering();

		void SetupMainRenderSurface();
	private:
	};
}