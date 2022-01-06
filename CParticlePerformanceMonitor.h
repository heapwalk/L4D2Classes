#include "CBaseEntity.h"

#pragma pack(push,1)
	class CParticlePerformanceMonitor : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_bDisplayPerf; // 0x638
		int    	m_bMeasurePerf; // 0x639
	};
#pragma pack(pop)
