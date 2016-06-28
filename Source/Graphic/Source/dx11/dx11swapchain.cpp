#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11swapchain.h"

namespace Lilith
{
	DX11Swapchain::DX11Swapchain(DX11GraphicDevice* device, HWND windowHandle, int width, int height)
	{
		m_SwapChainRec = new Rect(0,0, width , height);
		m_SwapChainWndHandle = windowHandle;
		m_GraphicDevice = device;
	}
	DX11Swapchain::~DX11Swapchain()
	{
		
	}

	void DX11Swapchain::Init()
	{
		m_SwapChainDesc.BufferCount = 1;
		m_SwapChainDesc.BufferDesc.Width = m_SwapChainRec->GetWidth();
		m_SwapChainDesc.BufferDesc.Height = m_SwapChainRec->GetHeight();
		m_SwapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
		m_SwapChainDesc.BufferDesc.RefreshRate.Numerator = 60;
		m_SwapChainDesc.BufferDesc.RefreshRate.Denominator = 1;
		m_SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
		m_SwapChainDesc.OutputWindow = m_SwapChainWndHandle;
		m_SwapChainDesc.SampleDesc.Count = 1;
		m_SwapChainDesc.SampleDesc.Quality = 0;
		m_SwapChainDesc.Windowed = TRUE;

		m_SwapChain = m_GraphicDevice->CreateSwapChain(&m_SwapChainDesc);

		UpdateSwapChainBuffers();
	}

	void DX11Swapchain::UpdateSwapChainBuffers()
	{
		//dont konw why need to do it.
		ID3D11Texture2D* tex;
		m_SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&tex);
		//Temp Draw background
		tex->
	}

	void DX11Swapchain::Flip()
	{
		m_SwapChain->Present(0, 0);
	}

	Rect* DX11Swapchain::GetSwapchainRect()
	{
		return m_SwapChainRec;
	}
}