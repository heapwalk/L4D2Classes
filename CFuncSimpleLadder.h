#include "CBaseEntity.h"

#pragma pack(push,1)
	class CFuncSimpleLadder : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_climbableNormal; // 0x638
	};
#pragma pack(pop)
