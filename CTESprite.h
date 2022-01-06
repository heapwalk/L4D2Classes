#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTESprite : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		int    	m_nModelIndex; // 0x1c
		float  	m_fScale; // 0x20
		int    	m_nBrightness; // 0x24
	};
#pragma pack(pop)
