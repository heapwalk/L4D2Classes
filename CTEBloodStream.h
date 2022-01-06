#include "CTEParticleSystem.h"

#pragma pack(push,1)
	class CTEBloodStream : 
		 public CTEParticleSystem // 0x1c
	{
	public:
		vector3	m_vecDirection; // 0x1c
		int    	r; // 0x28
		int    	g; // 0x2c
		int    	b; // 0x30
		int    	a; // 0x34
		int    	m_nAmount; // 0x38
	};
#pragma pack(pop)
