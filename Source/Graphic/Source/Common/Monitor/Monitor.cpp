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

	void Monitor::Initialize(HWND windowHandle)
	{
		//Create D3DDeviceWrap
		m_d3dDevice = new DX11GraphicDevice();
		//Init D3DDeviceWrap
		m_d3dDevice->Initialize(windowHandle);
		//Create ViewSurface

	}
}