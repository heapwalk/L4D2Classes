#include "CBaseGrenade.h"

#pragma pack(push,1)
	class CBaseCSGrenadeProjectile : 
		 public CBaseGrenade // 0x112c
	{
	public:
		unsigned char _0x112c[0x4];
		vector3	m_vInitialVelocity; // 0x1130
	};
#pragma pack(pop)
