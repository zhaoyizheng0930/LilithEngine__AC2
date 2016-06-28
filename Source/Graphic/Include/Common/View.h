#pragma once
#include "RenderBatch.h"

namespace Lilith
{
	class View
	{
	public:
		View();
		~View();

		RenderBatch* GetRenderBatch();
	public:
	private:
		RenderBatch*					m_RenderBatch;
	};
}