#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEPhysicsProp : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		float  	m_angRotation_0; // 0x1c
		float  	m_angRotation_1; // 0x20
		float  	m_angRotation_2; // 0x24
		vector3	m_vecVelocity; // 0x28
		int    	m_nModelIndex; // 0x34
		int    	m_nSkin; // 0x38
		int    	m_nFlags; // 0x3c
		int    	m_nEffects; // 0x40
		int    	r; // 0x44
		int    	g; // 0x48
		int    	b; // 0x4c
	};
#pragma pack(pop)
