#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEClientProjectile : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecVelocity; // 0x1c
		int    	m_nModelIndex; // 0x28
		int    	m_nLifeTime; // 0x2c
		int    	m_hOwner; // 0x30
	};
#pragma pack(pop)
