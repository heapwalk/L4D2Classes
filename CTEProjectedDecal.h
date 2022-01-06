#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEProjectedDecal : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_angRotation; // 0x1c
		float  	m_flDistance; // 0x28
		int    	m_nIndex; // 0x2c
	};
#pragma pack(pop)
