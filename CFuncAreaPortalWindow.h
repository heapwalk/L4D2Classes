#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFuncAreaPortalWindow : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flFadeStartDist; // 0x638
		float  	m_flFadeDist; // 0x63c
		float  	m_flTranslucencyLimit; // 0x640
		int    	m_iBackgroundModelIndex; // 0x644
	};
#pragma pack(pop)
