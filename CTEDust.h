#include "CTEParticleSystem.h"

#pragma pack(push,1)
	class CTEDust : 
		 public CTEParticleSystem // 0x1c
	{
	public:
		float  	m_flSize; // 0x1c
		float  	m_flSpeed; // 0x20
		vector3	m_vecDirection; // 0x24
	};
#pragma pack(pop)
