#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFunc_LOD : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_nDisappearMinDist; // 0x638
		int    	m_nDisappearMaxDist; // 0x63c
	};
#pragma pack(pop)
