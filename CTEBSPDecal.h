#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEBSPDecal : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		int    	m_nEntity; // 0x1c
		int    	m_nIndex; // 0x20
	};
#pragma pack(pop)
