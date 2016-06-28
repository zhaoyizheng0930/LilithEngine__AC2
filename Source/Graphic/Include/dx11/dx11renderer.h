#pragma once
#include "dx11/dx11baserenderer.h"
#include "dx11/dx11device.h"
#include "dx11/dx11context.h"
#include "Common/RenderBatch.h"

namespace Lilith
{
	class DX11Renderer :public DX11BaseRenderer
	{
	public:
		DX11Renderer();
		~DX11Renderer();

		void Initialize();

		void SetHelpers(DX11GraphicContext* pGraphicContext);

		//Pass depend one by one.In One pass many task can run in different thread.i'll do it next.
		//1.startupPass 2.visibility (3.CullingPass) 4.shadowPass 5.projectorPass 6.visibilityQueriesFetchPass 7.reflexion 8.mainOpaque 9.main
		void Render(RenderBatch* batch);

		DX11GraphicContext* GetGraphicContext();
	protected:

		void PrepareData();

		bool PrepareRendering();

		void SetupMainRenderSurface();
	private:
		//helpers
		DX11GraphicDevice*	m_GraphicDevice;

		DX11GraphicContext* m_GraphicContext;

		View* m_CurrentView;
	};
}