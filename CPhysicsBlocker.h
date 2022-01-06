#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPhysicsBlocker : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		vector3	m_vMins; // 0x638
		vector3	m_vMaxs; // 0x644
		int    	m_bBlocked; // 0x650
		int    	m_nBlockType; // 0x654
	};
#pragma pack(pop)
