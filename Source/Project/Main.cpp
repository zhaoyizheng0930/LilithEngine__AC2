//Everything has begun
//this project just design as a launcher and maybe for MutiPlatform
//Just dont design more for mutiPlatform.its not the main point

#if (defined WIN32) || (defined WIN64)
#include "Windows\WinMain.h"
Lilith::WinMain PlatformMain;
#elif (defined DURANGO)//for xb1
#include "Durango\"
#elif (defined ORBIS)//for ps3
#include "Orbis\"
#endif


#if (defined WIN32) || (defined WIN64)
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	if (FAILED(PlatformMain.Initialize(hInstance, nCmdShow)))
		return 0;

	// Main message loop
	MSG msg = { 0 };
	while (WM_QUIT != msg.message)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else
		{
			PlatformMain.Update();
		}
	}

	PlatformMain.ShutDown();

	return (int)msg.wParam;
}
#endif // WIN32