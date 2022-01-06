#include "CTerrorWeapon.h"

#pragma pack(push,1)
	class CWeaponChainsaw : 
		 public CTerrorWeapon // 0xcc0
	{
	public:
		unsigned char _0xcc0[0x68];
		int    	m_iState; // 0xd28
		int    	m_bHitting; // 0xd2c
		unsigned char _0xd30[0x40];
		int    	m_PoseParameterTargets[2]; // 0xd70
	};
#pragma pack(pop)
