#include "CBaseToggle.h"

#pragma pack(push,1)
	class CBaseTrigger : 
		 public CBaseToggle // 0x0
	{
	public:
		unsigned char _0x0[0x1cc];
		int    	m_spawnflags; // 0x1cc
		unsigned char _0x1d0[0x468];
		int    	m_bClientSidePredicted; // 0x638
	};
#pragma pack(pop)
