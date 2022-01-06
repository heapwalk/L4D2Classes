#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEMuzzleFlash : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecAngles; // 0x1c
		float  	m_flScale; // 0x28
		int    	m_nType; // 0x2c
	};
#pragma pack(pop)
