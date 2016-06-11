#pragma once


namespace Lilith
{
	template<class T>
	class Singleton
	{
	public:
		Singleton()
		{

		}
		virtual ~Singleton()
		{

		}

		static T& GetSingleton()
		{
			return &m_singleton;
		}

		static T* GetSingletonPtr()
		{
			return &m_singleton;
		}

	protected:
	private:
		static T m_singleton;
	};
}
