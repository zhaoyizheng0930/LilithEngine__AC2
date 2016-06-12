#pragma once

#include <windows.h>
//Windows platform

namespace Lilith
{
	class WinMain
	{
	public:
		WinMain();
		~WinMain();

		virtual HRESULT Initialize(HINSTANCE hInstance, int nCmdShow);

		virtual bool Update();

		virtual void ShutDown();

	public:
		static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

	private:
		void CreateMainWindow(HINSTANCE hInstance, int nCmdShow);

		HINSTANCE               m_hInst = NULL;
		HWND                    m_hWnd = NULL;
	};
}