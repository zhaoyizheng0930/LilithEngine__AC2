#include "PrecompiledHeaderProject.h"
#include "WinMain.h"
#include "LilithEngine.h"


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
		LilithEngine::GetSingletonPtr()->Initialize();
		//Create Window
		CreateMainWindow(hInstance , nCmdShow);
	}

	bool WinMain::Update()
	{

	}

	void WinMain::ShutDown()
	{

	}

	LRESULT CALLBACK WinMain::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
	{
		PAINTSTRUCT ps;
		HDC hdc;

		switch (message)
		{
		case WM_PAINT:
			hdc = BeginPaint(hWnd, &ps);
			EndPaint(hWnd, &ps);
			break;

		case WM_DESTROY:
			PostQuitMessage(0);
			break;

		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}

		return 0;
	}

	void WinMain::CreateMainWindow(HINSTANCE hInstance, int nCmdShow)
	{
		WNDCLASSEX wcex;
		wcex.cbSize = sizeof(WNDCLASSEX);
		wcex.style = CS_HREDRAW | CS_VREDRAW;
		wcex.lpfnWndProc = WinMain::WndProc;
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = 0;
		wcex.hInstance = hInstance;
		wcex.hIcon = LoadIcon(hInstance, (LPCTSTR)LilithEngineSetting::GetSingletonPtr()->GetEngineIconName());
		wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
		wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
		wcex.lpszMenuName = NULL;
		wcex.lpszClassName = L"TutorialWindowClass";
		wcex.hIconSm = LoadIcon(wcex.hInstance, (LPCTSTR)LilithEngineSetting::GetSingletonPtr()->GetEngineIconName());
		if (!RegisterClassEx(&wcex))
			return E_FAIL;

		// Create window
		m_hInst = hInstance;
		RECT rc = { 0, 0, 640, 480 };
		AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, FALSE);
		m_hWnd = CreateWindow(L"TutorialWindowClass", L"Direct3D 11 Tutorial 1: Direct3D 11 Basics", WS_OVERLAPPEDWINDOW,
			CW_USEDEFAULT, CW_USEDEFAULT, rc.right - rc.left, rc.bottom - rc.top, NULL, NULL, hInstance,
			NULL);
		if (!m_hWnd)
			return E_FAIL;

		ShowWindow(m_hWnd, nCmdShow);

		return S_OK;
	}
}