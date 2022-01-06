#include "CTerrorWeapon.h"

#pragma pack(push,1)
	class CTerrorGun : 
		 public CTerrorWeapon // 0xcc0
	{
	public:
		unsigned char _0xcc0[0x28];
		int    	m_partialReloadStage; // 0xce8
		int    	m_isDualWielding; // 0xcec
		int    	m_hasDualWeapons; // 0xced
		int    	m_inInitialPickup; // 0xcee
		int    	m_reloadFromEmpty; // 0xcef
		int    	m_upgradeBitVec; // 0xcf0
	};
#pragma pack(pop)
