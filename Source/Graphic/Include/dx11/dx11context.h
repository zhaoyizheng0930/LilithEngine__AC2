#pragma once
#include "Common/View.h"
#include "dx11/dx11device.h"
#include "dx11/dx11renderer.h"
#include "dx11/dx11viewsurface.h"

namespace Lilith
{
	//ZYZ_TODO:Is this Device Wrap need to break down to graphicdevice and device?
	class DX11GraphicContext
	{
	public:
		DX11GraphicContext();
		~DX11GraphicContext();

		DX11GraphicDevice* GetGraphicDevice();

		View* GetView();

		void SetRender(DX11Renderer* render);
		void SetGraphicDevice(DX11GraphicDevice* device);
		void SetViewSurface(DX11ViewSurface* viewsurface);

	private:
		DX11GraphicDevice* m_GraphicDevice;

		View* m_CurrentView;

		DX11Renderer* m_Render;

		DX11ViewSurface* m_ViewSurface;
	};
}