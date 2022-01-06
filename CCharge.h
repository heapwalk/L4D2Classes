#include "CAbilityBase.h"

#pragma pack(push,1)
	class CCharge : 
		 public CAbilityBase // 0x658
	{
	public:
		float  	m_chargeStartTime; // 0x658
		int    	m_isCharging; // 0x65c
		int    	m_hPotentialTarget; // 0x660
	};
#pragma pack(pop)
