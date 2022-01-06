#include "CBaseEntity.h"

#pragma pack(push,1)
	class CDynamicLight : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_Flags; // 0x638
		int    	m_LightStyle; // 0x639
		float  	m_Radius; // 0x63c
		int    	m_Exponent; // 0x640
		float  	m_InnerAngle; // 0x644
		float  	m_OuterAngle; // 0x648
		float  	m_SpotRadius; // 0x64c
	};
#pragma pack(pop)
