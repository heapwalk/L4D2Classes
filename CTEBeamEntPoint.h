#include "CBaseBeam.h"

#pragma pack(push,1)
	class CTEBeamEntPoint : 
		 public CBaseBeam // 0x4c
	{
	public:
		int    	m_nStartEntity; // 0x4c
		int    	m_nEndEntity; // 0x50
		vector3	m_vecStartPoint; // 0x54
		vector3	m_vecEndPoint; // 0x60
	};
#pragma pack(pop)
