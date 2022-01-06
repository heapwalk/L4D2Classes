#include "CBaseEntity.h"

#pragma pack(push,1)
	class CWaterLODControl : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flCheapWaterStartDistance; // 0x638
		float  	m_flCheapWaterEndDistance; // 0x63c
	};
#pragma pack(pop)
