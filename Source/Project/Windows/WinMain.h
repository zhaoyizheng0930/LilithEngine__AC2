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

	private:

	};
}