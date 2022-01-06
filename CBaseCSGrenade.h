#include "CTerrorWeapon.h"

#pragma pack(push,1)
	class CBaseCSGrenade : 
		 public CTerrorWeapon // 0xcc0
	{
	public:
		unsigned char _0xcc0[0x28];
		int    	m_bRedraw; // 0xce8
		int    	m_bPinPulled; // 0xce9
		float  	m_fThrowTime; // 0xcec
		int    	m_isGoingToRoll; // 0xcf0
	};
#pragma pack(pop)
