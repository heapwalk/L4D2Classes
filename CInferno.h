#include "CBaseEntity.h"

#pragma pack(push,1)
	class CInferno : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x48];
		int    	m_fireXDelta[100]; // 0x644
		int    	m_fireYDelta[100]; // 0x7d4
		int    	m_fireZDelta[100]; // 0x964
		unsigned char _0xaf4[0x640];
		int    	m_fireCount; // 0x1134
	};
#pragma pack(pop)
