#include "CBaseEntity.h"

#pragma pack(push,1)
	class CQuadraticBeam : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_targetPosition; // 0x638
		vector3	m_controlPosition; // 0x644
		float  	m_scrollRate; // 0x650
		float  	m_flWidth; // 0x654
	};
#pragma pack(pop)
