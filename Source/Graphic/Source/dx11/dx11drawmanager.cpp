#pragma once
#include "dx11/dx11drawmanager.h"

namespace Lilith
{
	DX11DrawManager::DX11DrawManager()
	{
		m_CurrentRender = new DX11Renderer();
	}

	DX11DrawManager::~DX11DrawManager()
	{

	}

	void DX11DrawManager::Render(DX11ViewSurface* viewsurface)
	{
		if (m_CurrentRender)
		{
			m_CurrentRender->Render();
		}
	}
}