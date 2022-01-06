#include "CBaseEntity.h"

#pragma pack(push,1)
	class CBeamSpotlight : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_nHaloIndex; // 0x638
		int    	m_nRotationAxis; // 0x63c
		float  	m_flRotationSpeed; // 0x640
		int    	m_bSpotlightOn; // 0x644
		int    	m_bHasDynamicLight; // 0x645
		int    	m_bNoFog; // 0x646
		float  	m_flSpotlightMaxLength; // 0x648
		float  	m_flSpotlightGoalWidth; // 0x64c
		float  	m_flHDRColorScale; // 0x650
	};
#pragma pack(pop)
