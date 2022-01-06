#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPrecipitation : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x64];
		int    	m_nPrecipType; // 0x660
		unsigned char _0x664[0x8];
		float  	m_minSpeed; // 0x66c
		float  	m_maxSpeed; // 0x670
	};
#pragma pack(pop)
