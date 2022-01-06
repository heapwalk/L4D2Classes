#include "CCountdownTimer.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CAbilityBase
	{
	public:
		unsigned char _0x0[0x138];
		int    	m_hOwnerEntity; // 0x138
		unsigned char _0x13c[0x4fc];
		CCountdownTimer	m_activationSupressedTimer; // 0x638
		int    	m_owner; // 0x644
		CCountdownTimer	m_nextActivationTimer; // 0x648
		int    	m_hasBeenUsed; // 0x654
	};
#pragma pack(pop)
