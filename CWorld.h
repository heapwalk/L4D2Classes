#include "CBaseEntity.h"

#pragma pack(push,1)
	class CWorld : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flWaveHeight; // 0x638
		vector3	m_WorldMins; // 0x63c
		vector3	m_WorldMaxs; // 0x648
		int    	m_bStartDark; // 0x654
		float  	m_flMaxOccludeeArea; // 0x658
		float  	m_flMinOccluderArea; // 0x65c
		float  	m_flMinPropScreenSpaceWidth; // 0x660
		float  	m_flMaxPropScreenSpaceWidth; // 0x664
		int    	m_bColdWorld; // 0x668
		int    	m_iTimeOfDay; // 0x66c
		int    	m_iStartMusicType; // 0x670
		char*  	m_iszDetailSpriteMaterial; // 0x674
		unsigned char _0x678[0xfc];
		char*  	m_iszMusicPostFix; // 0x774
	};
#pragma pack(pop)
