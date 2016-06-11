#include "WinMain.h"


namespace Lilith
{
	WinMain::WinMain()
	{
	}

	WinMain::~WinMain()
	{
	}

	HRESULT WinMain::Initialize(HINSTANCE hInstance, int nCmdShow)
	{
		//LoadEngineConfig

		//Create Window
		CreateMainWindow(hInstance , nCmdShow);
	}

	bool WinMain::Update()
	{

	}

	void WinMain::ShutDown()
	{

	}

	void WinMain::CreateMainWindow(HINSTANCE hInstance, int nCmdShow)
	{

	}
}