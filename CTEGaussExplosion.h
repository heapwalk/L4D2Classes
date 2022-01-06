#include "CTEParticleSystem.h"

#pragma pack(push,1)
	class CTEGaussExplosion : 
		 public CTEParticleSystem // 0x1c
	{
	public:
		int    	m_nType; // 0x1c
		vector3	m_vecDirection; // 0x20
	};
#pragma pack(pop)
