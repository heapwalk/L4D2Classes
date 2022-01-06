#include "CTerrorWeapon.h"

#pragma pack(push,1)
	class CBaseBackpackItem : 
		 public CTerrorWeapon // 0xcc0
	{
	public:
		unsigned char _0xcc0[0x28];
		int    	m_bPerformingAction; // 0xce8
	};
#pragma pack(pop)
