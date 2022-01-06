#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFuncOccluder : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_nOccluderIndex; // 0x638
		int    	m_bActive; // 0x63c
	};
#pragma pack(pop)
