#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvDOFController : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_bDOFEnabled; // 0x638
		float  	m_flNearBlurDepth; // 0x63c
		float  	m_flNearFocusDepth; // 0x640
		float  	m_flFarFocusDepth; // 0x644
		float  	m_flFarBlurDepth; // 0x648
		float  	m_flNearBlurRadius; // 0x64c
		float  	m_flFarBlurRadius; // 0x650
	};
#pragma pack(pop)
