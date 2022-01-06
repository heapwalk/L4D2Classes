#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFuncRotating : 
		 public CBaseEntity // 0x5fc
	{
	public:
		float  	m_angRotation_0; // 0x118
		float  	m_angRotation_1; // 0x11c
		float  	m_angRotation_2; // 0x120
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x20];
		int    	m_flSimulationTime; // 0x150
	};
#pragma pack(pop)
