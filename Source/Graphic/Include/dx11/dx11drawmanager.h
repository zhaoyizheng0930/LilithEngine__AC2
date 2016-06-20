#pragma once
#include "Singleton.h"
#include "dx11/dx11renderer.h"
#include "dx11/dx11viewsurface.h"

namespace Lilith
{
	class DX11DrawManager:public Singleton<DX11DrawManager>
	{
	public:
		DX11DrawManager();
		~DX11DrawManager();

		void Render(DX11ViewSurface* viewsurface);
	protected:
	private:
		DX11Renderer* m_CurrentRender;
		//DX11Renderer* m_LastRenderer;
		//DX11Renderer* m_DirectRenderer;	//UseBy Directly log\menu\and so on...
	};
}