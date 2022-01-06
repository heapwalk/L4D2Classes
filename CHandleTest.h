#include "CBaseEntity.h"

#pragma pack(push,1)
	class CHandleTest : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_Handle; // 0x638
		int    	m_bSendHandle; // 0x63c
	};
#pragma pack(pop)
