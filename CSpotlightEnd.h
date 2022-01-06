#include "CBaseEntity.h"

#pragma pack(push,1)
	class CSpotlightEnd : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flLightScale; // 0x638
		float  	m_Radius; // 0x63c
	};
#pragma pack(pop)
