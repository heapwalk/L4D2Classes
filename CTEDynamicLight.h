#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEDynamicLight : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		float  	m_fRadius; // 0x1c
		int    	r; // 0x20
		int    	g; // 0x24
		int    	b; // 0x28
		int    	exponent; // 0x2c
		float  	m_fTime; // 0x30
		float  	m_fDecay; // 0x34
	};
#pragma pack(pop)
