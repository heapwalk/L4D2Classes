#include "CPropVehicleDriveable.h"

#pragma pack(push,1)
	class CPropJeep : 
		 public CPropVehicleDriveable // 0x9e9
	{
	public:
		unsigned char _0x9e9[0xbb];
		int    	m_bHeadlightIsOn; // 0xaa4
	};
#pragma pack(pop)
