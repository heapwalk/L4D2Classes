#include "CBaseToggle.h"

#pragma pack(push,1)
	class CBaseButton : 
		 public CBaseToggle // 0x0
	{
	public:
		unsigned char _0x0[0x638];
		int    	m_glowEntity; // 0x638
		int    	m_usable; // 0x63c
	};
#pragma pack(pop)
