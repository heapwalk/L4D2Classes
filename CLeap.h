#include "CAbilityBase.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CLeap : 
		 public CAbilityBase // 0x658
	{
	public:
		CCountdownTimer	m_leapAgainTimer; // 0x658
		float  	m_leapStartTime; // 0x664
		vector3	m_queuedLeap; // 0x668
		int    	m_isLeaping; // 0x674
	};
#pragma pack(pop)
