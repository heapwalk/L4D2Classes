#include "CBaseCombatCharacter.h"

#pragma pack(push,1)
	class CBaseGrenade : 
		 public CBaseCombatCharacter // 0x1088
	{
	public:
		int    	m_fFlags; // 0xf0
		unsigned char _0xf4[0xc];
		vector3	m_vecVelocity; // 0x100
		unsigned char _0x10c[0x1005];
		int    	m_bIsLive; // 0x1111
		float  	m_DmgRadius; // 0x1114
		unsigned char _0x1118[0x8];
		float  	m_flDamage; // 0x1120
		unsigned char _0x1124[0x4];
		int    	m_hThrower; // 0x1128
	};
#pragma pack(pop)
