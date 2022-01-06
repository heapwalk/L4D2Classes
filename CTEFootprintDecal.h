#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEFootprintDecal : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecDirection; // 0x1c
		unsigned char _0x28[0xc];
		int    	m_nEntity; // 0x34
		int    	m_nIndex; // 0x38
		int    	m_chMaterialType; // 0x3c
	};
#pragma pack(pop)
