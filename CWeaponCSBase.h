#include "CBaseCombatWeapon.h"

#pragma pack(push,1)
	class CWeaponCSBase : 
		 public CBaseCombatWeapon // 0x9c1
	{
	public:
		unsigned char _0x9c1[0x67];
		int    	m_iExtraPrimaryAmmo; // 0xa28
	};
#pragma pack(pop)
