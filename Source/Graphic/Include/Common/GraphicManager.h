#include "PrecompiledHeaderGraphic.h"
#include "../dx11/dx11viewsurface.h"
#include "Singleton.h"

namespace Lilith
{
	//Need MTR!!!
	//manager many ViewSurface
	class GraphicManager:public Singleton<GraphicManager>
	{
	public:
		GraphicManager();
		~GraphicManager();

		void Update();

		virtual DX11ViewSurface* CreateViewSurface(HWND windowHandle, int width, int height);

		virtual DX11ViewSurface* GetViewSurface(int index = 0);
	protected:

	private:
		void DisplayAllSurfaces();
	private:
		std::vector<DX11ViewSurface*> m_Surfaces;
	};
}