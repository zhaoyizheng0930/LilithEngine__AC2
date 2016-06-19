#include "PrecompiledHeaderGraphic.h"
#include "dx11device.h"
#include "Rect.h"


namespace Lilith
{
	//! manages a rendering swap chain associated with a window
	class DX11Swapchain
	{
	public:
		DX11Swapchain(DX11GraphicDevice* device, HWND windowHandle , int width , int height);
		~DX11Swapchain();

		void Init();

		void UpdateSwapChainBuffers();

	protected:

	private:
		Rect*							m_SwapChainRec;
		HWND							m_SwapChainWndHandle;
		IDXGISwapChain*                 m_SwapChain;
		DXGI_SWAP_CHAIN_DESC			m_SwapChainDesc;
	};
}