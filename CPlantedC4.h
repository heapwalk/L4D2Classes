#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPlantedC4 : 
		 public CBaseAnimating // 0x930
	{
	public:
		unsigned char _0x930[0x28];
		int    	m_bBombTicking; // 0x958
		unsigned char _0x95c[0x8];
		float  	m_flC4Blow; // 0x964
		float  	m_flTimerLength; // 0x968
		float  	m_flDefuseLength; // 0x96c
		float  	m_flDefuseCountDown; // 0x970
	};
#pragma pack(pop)
