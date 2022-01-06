#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEShatterSurface : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecAngles; // 0x1c
		vector3	m_vecForce; // 0x28
		vector3	m_vecForcePos; // 0x34
		float  	m_flWidth; // 0x40
		float  	m_flHeight; // 0x44
		float  	m_flShardSize; // 0x48
		unsigned char _0x4c[0x4];
		int    	m_nSurfaceType; // 0x50
		int    	m_uchFrontColor_0; // 0x54
		int    	m_uchFrontColor_1; // 0x55
		int    	m_uchFrontColor_2; // 0x56
		int    	m_uchBackColor_0; // 0x57
		int    	m_uchBackColor_1; // 0x58
		int    	m_uchBackColor_2; // 0x59
	};
#pragma pack(pop)
