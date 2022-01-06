#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvWeaponFire : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_iWeaponType; // 0x638
		int    	m_iShotsTaken; // 0x63c
		vector3	m_vecShotDest; // 0x640
	};
#pragma pack(pop)
