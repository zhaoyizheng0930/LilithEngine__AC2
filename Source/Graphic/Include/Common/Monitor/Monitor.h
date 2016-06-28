#pragma once
#include "dx11/dx11device.h"


namespace Lilith
{
	class Monitor
	{
	public:
		Monitor();
		~Monitor();
	public:
		void Initialize(HWND windowHandle, int width, int height);

		DX11GraphicDevice* GetGraphicDevice();
	private:
		DX11GraphicDevice* m_d3dDevice;
	};
}