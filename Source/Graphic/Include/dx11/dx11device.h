#pragma once
#include "dx11StateManager.h"

namespace Lilith
{
	class DX11GraphicDevice
	{
	public:
		DX11GraphicDevice();
		~DX11GraphicDevice();
	public:
		void Initialize(HWND windowHandle);

		virtual void SetViewport(int x, int y, int width, int height);

		void SetCurrentResolution(ubiU32 index, ubiBool vSync);
	private:
		void CreateD3DDevice(HWND windowHandle);
		//Probably Use RenderDoc.I like it.
		void InitGraphicDebugTools();
	private:
		HWND m_WindowHandle;

		ID3D11Device* m_pD3DDevice;

		ID3D11DeviceContext* m_pD3DDeviceContext;

		D3D11_VIEWPORT m_Viewport;

		DXGI_SWAP_CHAIN_DESC	m_DevicePresentParams;
	};
}