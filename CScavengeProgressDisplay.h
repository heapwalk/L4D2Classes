#include "CBaseEntity.h"

#pragma pack(push,1)
	class CScavengeProgressDisplay : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x40];
		int    	m_bActive; // 0x63c
	};
#pragma pack(pop)
