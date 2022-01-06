#include "CBaseEntity.h"

#pragma pack(push,1)
	class CShadowControl : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_shadowDirection; // 0x638
		int    	m_shadowColor; // 0x644
		float  	m_flShadowMaxDist; // 0x648
		int    	m_bDisableShadows; // 0x64c
		int    	m_bEnableLocalLightShadows; // 0x64d
	};
#pragma pack(pop)
