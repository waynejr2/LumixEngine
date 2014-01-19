#pragma once
#include "core/lux.h"

namespace Lux
{
	namespace MT
	{
		typedef void* SemaphoreHandle;

		class LUX_CORE_API Semaphore
		{
		public:
			Semaphore(int init_count, int max_count);
			~Semaphore();

			void signal();

			void wait();
			bool poll();

		private:
			SemaphoreHandle m_id;
		};
	}; // ~namespac MT
}; //~namespace Lux