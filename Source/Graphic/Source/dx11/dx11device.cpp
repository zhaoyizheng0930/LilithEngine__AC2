#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11device.h"

namespace Lilith
{
	DX11GraphicDevice::DX11GraphicDevice()
	{
		m_WindowHandle = 0;
		m_pD3DDevice = NULL;
		m_pD3DDeviceContext = NULL;
	}

	DX11GraphicDevice::~DX11GraphicDevice()
	{
	}

	void DX11GraphicDevice::Initialize(HWND windowHandle)
	{
		//Init Device Option
		m_DeviceOption.init();
		//Create Device
		CreateD3DDevice(windowHandle);
		//InitGraphicDebug
		InitGraphicDebugTools();
		//
	}

	void DX11GraphicDevice::SetViewport(int x, int y, int width, int height)
	{
		//SetViewport Size
		m_Viewport.TopLeftX = static_cast<FLOAT>(x);
		m_Viewport.TopLeftY = static_cast<FLOAT>(y);
		m_Viewport.Width = static_cast<FLOAT>(width);
		m_Viewport.Height = static_cast<FLOAT>(height);
		m_Viewport.MinDepth = 0.0f;
		m_Viewport.MaxDepth = 0.9999f;
		//give the viewport param to statemanager
		DX11StateManger::GetSingletonPtr()->SetViewport(m_Viewport);
	}

	void DX11GraphicDevice::CreateD3DDevice(HWND windowHandle)
	{
		m_WindowHandle = windowHandle;

		D3D_DRIVER_TYPE driverType = D3D_DRIVER_TYPE_HARDWARE;
		int creationFlags = 0;

#ifdef _DEBUG
		creationFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif
		D3D_FEATURE_LEVEL featureLevels[] =
		{
			D3D_FEATURE_LEVEL_11_0,
			D3D_FEATURE_LEVEL_10_1,
			D3D_FEATURE_LEVEL_10_0,
		};

		int numFeatureLevels = sizeof(featureLevels) / sizeof(featureLevels[0]);
		D3D_FEATURE_LEVEL availableFeatureLevel;

		D3D11CreateDevice(NULL,
			driverType,
			NULL,
			creationFlags,
			featureLevels,
			numFeatureLevels,
			D3D11_SDK_VERSION,
			&m_pD3DDevice,
			&availableFeatureLevel,
			NULL);
		//get the context
		m_pD3DDevice->GetImmediateContext(&m_pD3DDeviceContext);

		//not do msaa here!!
		SetViewport(0,0, m_DevicePresentParams.BufferDesc.Width , m_DevicePresentParams.BufferDesc.Height);

		m_VertexFormatManager.init(this);

		//m_DX11DirectDisplay.Init(this);

		m_ShaderManager.Initialize(this);

		//Maybe need to reset device state
	}

	void DX11GraphicDevice::InitGraphicDebugTools()
	{

	}
}