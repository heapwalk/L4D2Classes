#include "CBaseToggle.h"

#pragma pack(push,1)
	class CFuncMoveLinear : 
		 public CBaseToggle // 0x0
	{
	public:
		unsigned char _0x0[0xf0];
		int    	m_fFlags; // 0xf0
		unsigned char _0xf4[0xc];
		vector3	m_vecVelocity; // 0x100
	};
#pragma pack(pop)
