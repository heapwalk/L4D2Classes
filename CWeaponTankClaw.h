#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CWeaponTankClaw
	{
	public:
		unsigned char _0x0[0xcfc];
		int    	m_isLowAttack; // 0xcfc
		CCountdownTimer	m_lowAttackDurationTimer; // 0xd00
	};
#pragma pack(pop)
