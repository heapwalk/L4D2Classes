#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEmbers : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_nDensity; // 0x638
		int    	m_nLifetime; // 0x63c
		int    	m_nSpeed; // 0x640
		int    	m_bEmit; // 0x644
	};
#pragma pack(pop)
