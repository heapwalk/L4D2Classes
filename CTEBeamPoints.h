#include "CBaseBeam.h"

#pragma pack(push,1)
	class CTEBeamPoints : 
		 public CBaseBeam // 0x4c
	{
	public:
		vector3	m_vecStartPoint; // 0x4c
		vector3	m_vecEndPoint; // 0x58
	};
#pragma pack(pop)
