#include "CBaseMountedWeapon.h"

#pragma pack(push,1)
	class CPropMinigun : 
		 public CBaseMountedWeapon // 0x9a4
	{
	public:
		int    	m_overheated; // 0x991
		float  	m_heat; // 0x994
	};
#pragma pack(pop)
