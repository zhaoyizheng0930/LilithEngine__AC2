#pragma once


namespace Lilith
{
	class Rect
	{
	public:
		Rect();
		Rect(float x, float y, float width, float height);
		~Rect();

		inline int GetX() const { return m_X; }
		inline void SetX(float value) { m_X = value; }
		inline int GetY() const { return m_Y; }
		inline void SetY(float value) { m_Y = value; }
		inline float GetWidth() const { return m_Width; }
		inline void SetWidth(float value) { m_Width = value; }
		inline float GetHeight() const { return m_Height; }
		inline void SetHeight(float value) { m_Height = value; }

	protected:
		float m_X;
		float m_Y;
		float m_Width;
		float m_Height;
	private:
	};
}
