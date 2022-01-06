#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEImpact : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecNormal; // 0x1c
		int    	m_iType; // 0x28
		int    	m_ucFlags; // 0x2c
	};
#pragma pack(pop)
