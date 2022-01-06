#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEDecal : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecStart; // 0x1c
		int    	m_nEntity; // 0x28
		int    	m_nHitbox; // 0x2c
		int    	m_nIndex; // 0x30
	};
#pragma pack(pop)
