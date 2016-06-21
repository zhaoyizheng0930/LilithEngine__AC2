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

	void GraphicManager::Update()
	{
		//Graphic Loop
		//ManageSurfaces
		//TraverseViewsPreWait

		//WaitSpu(if you Used PS3.you can profile with spu.use less)

		//TraverseViewsPostWait
		//DisplayAllSurfacesPreWait
		DisplayAllSurfaces();
		//WaitGpu

		//DisplayAllSurfacesPostWait
	}

	DX11ViewSurface* GraphicManager::CreateViewSurface(HWND windowHandle, int width, int height)
	{
		DX11ViewSurface* pViewSurface = new DX11ViewSurface(windowHandle , width , height);
		m_Surfaces.push_back(pViewSurface);
	}

	void GraphicManager::DisplayAllSurfaces()
	{
		for (std::vector<DX11ViewSurface*>::iterator iter = m_Surfaces.begin(); iter != m_Surfaces.end();iter++)
		{
			(*iter)->Display();
		}
	}

}