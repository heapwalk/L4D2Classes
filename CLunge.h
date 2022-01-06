#include "CAbilityBase.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CLunge : 
		 public CAbilityBase // 0x658
	{
	public:
		CCountdownTimer	m_lungeAgainTimer; // 0x658
		float  	m_lungeStartTime; // 0x664
		vector3	m_queuedLunge; // 0x668
		int    	m_isLunging; // 0x674
	};
#pragma pack(pop)
