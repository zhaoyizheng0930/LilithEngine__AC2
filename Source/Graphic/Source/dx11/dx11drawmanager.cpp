#pragma once
#include "dx11/dx11drawmanager.h"

namespace Lilith
{
	DX11DrawManager::DX11DrawManager():
		m_CurrentRender(NULL)
	{
		m_CurrentRender = new DX11Renderer();
		m_CurrentRender->Initialize();
	}

	DX11DrawManager::~DX11DrawManager()
	{

	}

	void DX11DrawManager::Render(DX11ViewSurface* viewsurface)
	{
		PreRender(viewsurface);

		if (m_CurrentRender)
		{
			std::vector<View*>& views = viewsurface->GetViews();
			for (std::vector<View*>::iterator iter = views.begin(); iter != views.end();iter++)
			{
				RenderBatch* renderbatch = (*iter)->GetRenderBatch();
				m_CurrentRender->Render(renderbatch);
			}
		}

		PostRender(viewsurface);
	}

	void DX11DrawManager::PreRender(DX11ViewSurface* viewsurface)
	{
		//StartUp Device And Context
		m_CurrentRender->SetHelpers(viewsurface);
	}

	void DX11DrawManager::PostRender(DX11ViewSurface* viewsurface)
	{

	}
}