#include "PrecompiledHeaderGraphic.h"
#include "../dx11/dx11viewsurface.h"
#include "Singleton.h"

namespace Lilith
{
	//manager many ViewSurface
	class GraphicManager:public Singleton<GraphicManager>
	{
	public:
		GraphicManager();
		~GraphicManager();

		void Update();

		virtual DX11ViewSurface* CreateViewSurface(HWND windowHandle, int width, int height);
	protected:

	private:
		void DisplayAllSurfaces();
	private:
		std::vector<DX11ViewSurface*> m_Surfaces;
	};
}