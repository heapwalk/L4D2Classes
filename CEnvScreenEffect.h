#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvScreenEffect : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		float  	m_flDuration; // 0x638
		int    	m_nType; // 0x63c
	};
#pragma pack(pop)
