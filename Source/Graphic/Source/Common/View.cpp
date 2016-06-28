#include "PrecompiledHeaderGraphic.h"
#include "Common/View.h"

namespace Lilith
{
	View::View()
	{
	}

	View::~View()
	{
	}

	RenderBatch* View::GetRenderBatch()
	{
		return m_RenderBatch;
	}
}