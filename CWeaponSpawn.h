#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CWeaponSpawn : 
		 public CBaseAnimating // 0x930
	{
	public:
		unsigned char _0x930[0x28];
		int    	m_weaponID; // 0x958
		float  	m_flGlowRange; // 0x95c
	};
#pragma pack(pop)
