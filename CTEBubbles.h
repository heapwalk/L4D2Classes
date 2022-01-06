#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEBubbles : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecMins; // 0x10
		vector3	m_vecMaxs; // 0x1c
		float  	m_fHeight; // 0x28
		int    	m_nModelIndex; // 0x2c
		int    	m_nCount; // 0x30
		float  	m_fSpeed; // 0x34
	};
#pragma pack(pop)
