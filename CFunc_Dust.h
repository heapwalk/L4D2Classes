#include "CCollisionProperty.h"

#pragma pack(push,1)
	class CFunc_Dust
	{
	public:
		unsigned char _0x0[0x140];
		int    	m_nModelIndex; // 0x140
		unsigned char _0x144[0xd8];
		CCollisionProperty	m_Collision; // 0x21c
		unsigned char _0x260[0x3d8];
		int    	m_Color; // 0x638
		int    	m_SpawnRate; // 0x63c
		float  	m_flSizeMin; // 0x640
		float  	m_flSizeMax; // 0x644
		int    	m_SpeedMax; // 0x648
		int    	m_LifetimeMin; // 0x64c
		int    	m_LifetimeMax; // 0x650
		int    	m_DistMax; // 0x654
		float  	m_FallSpeed; // 0x658
		int    	m_DustFlags; // 0x65c
	};
#pragma pack(pop)
