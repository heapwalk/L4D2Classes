#include "CBaseBeam.h"

#pragma pack(push,1)
	class CTEBeamLaser : 
		 public CBaseBeam // 0x4c
	{
	public:
		int    	m_nStartEntity; // 0x4c
		int    	m_nEndEntity; // 0x50
	};
#pragma pack(pop)
