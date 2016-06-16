#include "PrecompiledHeaderGraphic.h"
#include "dx11/dx11StateManager.h"

namespace Lilith
{
	DX11StateManger::DX11StateManger()
	{

	}

	DX11StateManger::~DX11StateManger()
	{

	}

	void DX11StateManger::SetViewport(D3D11_VIEWPORT& viewports)
	{
		m_Viewports = viewports;
	}
}