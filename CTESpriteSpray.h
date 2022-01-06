#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTESpriteSpray : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecDirection; // 0x1c
		int    	m_nModelIndex; // 0x28
		int    	m_nSpeed; // 0x2c
		float  	m_fNoise; // 0x30
		int    	m_nCount; // 0x34
	};
#pragma pack(pop)
