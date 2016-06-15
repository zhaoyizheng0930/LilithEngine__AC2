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
		//Create Device
		CreateD3DDevice(windowHandle);
		//InitGraphicDebug
		InitGraphicDebugTools();
		//

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
	}

	void DX11GraphicDevice::InitGraphicDebugTools()
	{

	}

	void DX11GraphicDevice::CreateD3DDeviceContext(HWND windowHandle)
	{

	}
}