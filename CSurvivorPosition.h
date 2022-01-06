#include "CBaseEntity.h"

#pragma pack(push,1)
	class CSurvivorPosition : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_order; // 0x638
	};
#pragma pack(pop)
