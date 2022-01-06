#include "CTEParticleSystem.h"

#pragma pack(push,1)
	class CTEExplosion : 
		 public CTEParticleSystem // 0x1c
	{
	public:
		int    	m_nModelIndex; // 0x1c
		float  	m_fScale; // 0x20
		int    	m_nFrameRate; // 0x24
		int    	m_nFlags; // 0x28
		vector3	m_vecNormal; // 0x2c
		int    	m_chMaterialType; // 0x38
		int    	m_nRadius; // 0x3c
		int    	m_nMagnitude; // 0x40
	};
#pragma pack(pop)
