#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CBreakableProp : 
		 public CBaseAnimating // 0x930
	{
	public:
		unsigned char _0x930[0x28];
		int    	m_noGhostCollision; // 0x958
		int    	m_bClientPhysics; // 0x959
	};
#pragma pack(pop)
