#pragma once
#include "Singleton.h"

namespace Lilith
{
	class DX11StateManger :public Singleton<DX11StateManger>
	{
	public:
		DX11StateManger();
		~DX11StateManger();

		void SetViewport(D3D11_VIEWPORT& viewports);
	
	private:
		//zyz:it's just a viewport param
		D3D11_VIEWPORT					m_Viewports;
		D3D11_RECT						m_ScissorRects;
	};
}