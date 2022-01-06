#include "CTEParticleSystem.h"

#pragma pack(push,1)
	class CTELargeFunnel : 
		 public CTEParticleSystem // 0x1c
	{
	public:
		int    	m_nModelIndex; // 0x1c
		int    	m_nReversed; // 0x20
	};
#pragma pack(pop)
