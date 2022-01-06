#include "CBaseEntity.h"

#pragma pack(push,1)
	class CColorCorrection : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_vecOrigin; // 0x638
		float  	m_minFalloff; // 0x644
		float  	m_maxFalloff; // 0x648
		float  	m_flFadeInDuration; // 0x64c
		float  	m_flFadeOutDuration; // 0x650
		float  	m_flMaxWeight; // 0x654
		float  	m_flCurWeight; // 0x658
		char*  	m_netLookupFilename; // 0x65c
		unsigned char _0x660[0x100];
		int    	m_bEnabled; // 0x760
		int    	m_bMaster; // 0x761
		int    	m_bClientSide; // 0x762
		int    	m_bExclusive; // 0x763
	};
#pragma pack(pop)
