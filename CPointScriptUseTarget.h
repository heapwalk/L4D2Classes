#include "CBaseEntity.h"

#pragma pack(push,1)
	class CPointScriptUseTarget : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		char*  	m_sUseString; // 0x638
		unsigned char _0x63c[0x3c];
		char*  	m_sUseSubString; // 0x678
		unsigned char _0x67c[0x3c];
		float  	m_flPreviousProgressPercent; // 0x6b8
		int    	m_bCanShowBuildPanel; // 0x6bc
	};
#pragma pack(pop)
