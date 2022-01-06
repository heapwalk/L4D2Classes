#include "CCountdownTimer.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CAbilityVomit
	{
	public:
		unsigned char _0x0[0x658];
		int    	m_isSpraying; // 0x658
		CCountdownTimer	m_attackDuration; // 0x65c
		CCountdownTimer	m_nextSpray; // 0x668
	};
#pragma pack(pop)
