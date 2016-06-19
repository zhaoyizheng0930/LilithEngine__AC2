#include "PrecompiledHeaderGraphic.h"
#include "../../Include/Common/GraphicManager.h"

namespace Lilith
{

	GraphicManager::GraphicManager()
	{

	}
	GraphicManager::~GraphicManager()
	{

	}

	DX11ViewSurface* GraphicManager::CreateViewSurface(HWND windowHandle, int width, int height)
	{
		DX11ViewSurface* pViewSurface = new DX11ViewSurface(windowHandle , width , height);
		m_Surfaces.push_back(pViewSurface);
	}

}