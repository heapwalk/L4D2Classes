#include "CBreakableProp.h"

#pragma pack(push,1)
	class CPhysicsProp : 
		 public CBreakableProp // 0x95d
	{
	public:
		unsigned char _0x95d[0x3];
		int    	m_bAwake; // 0x960
		int    	m_hasTankGlow; // 0x962
		int    	m_isCarryable; // 0x963
		unsigned char _0x967[0x1];
		int    	m_spawnflags; // 0x968
	};
#pragma pack(pop)
