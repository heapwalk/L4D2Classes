#include "CBaseFlex.h"
#include "CBCCLocalPlayerExclusive.h"

#pragma pack(push,1)
	class CBaseCombatCharacter : 
		 public CBaseFlex // 0xd88
	{
	public:
		CBCCLocalPlayerExclusive	bcc_localdata; // 0x0
		unsigned char _0xf24[0x80];
		int    	m_hMyWeapons[56]; // 0xfa4
		int    	m_hActiveWeapon; // 0x1084
	};
#pragma pack(pop)
