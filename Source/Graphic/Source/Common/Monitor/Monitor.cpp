#include "PrecompiledHeaderGraphic.h"
#include "Common/Monitor/Monitor.h"

namespace Lilith
{
	Monitor::Monitor()
	{
	}

	Monitor::~Monitor()
	{
	}

	void Monitor::Initialize(HWND windowHandle, int width, int height)
	{
		//Create D3DDeviceWrap
		m_d3dDevice = new DX11GraphicDevice();
		//resolution need to adapt the DeviceOption
		m_d3dDevice->SetCurrentResolution(width , height);
		//init D3DDevice
		m_d3dDevice->Initialize(windowHandle);
	}
}