#include "PrecompiledHeaderGraphic.h"
#include "dx11device.h"
#include "dx11swapchain.h"
#include "Rect.h"
#include "Common/View.h"

namespace Lilith
{
	//A View Meed to be Draw
	class DX11ViewSurface
	{
	public:
		DX11ViewSurface(HWND windowHandle, int width, int height);
		~DX11ViewSurface();

		void Initialize(DX11GraphicDevice* GraphicDevice, HWND windowHandle, int width, int height);

		void Display();

		std::vector<View*>& GetViews();

		DX11GraphicDevice* GetGraphicDevice();
	protected:
	private:
		void PreRender();
		void PostRender();
	private:
		HWND m_WindowHandle;

		Rect* m_rect;

		DX11Swapchain*           m_SwapChain;
		
		//PostEffects*		m_PostEffects;
		DX11GraphicDevice*  m_GraphicDevice;

		std::vector<View*>  m_Views;
	};
}