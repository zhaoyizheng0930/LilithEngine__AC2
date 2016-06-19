#include "PrecompiledHeaderGraphic.h"
#include "dx11device.h"


namespace Lilith
{
	//! manages a rendering swap chain associated with a window
	class DX11Swapchain
	{
	public:
		DX11Swapchain(DX11GraphicDevice* device, HWND windowHandle);
		~DX11Swapchain();

		void Init();

	protected:

	private:
		HWND							m_SwapChainWndHandle;
		IDXGISwapChain*                 m_SwapChain;
		DXGI_SWAP_CHAIN_DESC			m_SwapChainDesc;
	};
}