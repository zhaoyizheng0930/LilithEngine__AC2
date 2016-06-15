#pragma once

namespace Lilith
{
	class DX11GraphicDevice
	{
	public:
		DX11GraphicDevice();
		~DX11GraphicDevice();
	public:
		void Initialize(HWND windowHandle);

	private:
		void CreateD3DDevice(HWND windowHandle);
		//Probably Use RenderDoc.I like it.
		void InitGraphicDebugTools();

		void CreateD3DDeviceContext(HWND windowHandle);
	private:
		HWND m_WindowHandle;

		ID3D11Device* m_pD3DDevice;

		ID3D11DeviceContext* m_pD3DDeviceContext;
	};
}