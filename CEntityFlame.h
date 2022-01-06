#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEntityFlame : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		int    	m_hEntAttached; // 0x638
		unsigned char _0x63c[0x10];
		int    	m_bCheapEffect; // 0x64c
	};
#pragma pack(pop)
