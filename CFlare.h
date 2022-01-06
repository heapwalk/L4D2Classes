#include "CBaseCombatCharacter.h"

#pragma pack(push,1)
	class CFlare : 
		 public CBaseCombatCharacter // 0x1088
	{
	public:
		unsigned char _0x1088[0x190];
		float  	m_flTimeBurnOut; // 0x1218
		float  	m_flScale; // 0x121c
		int    	m_bLight; // 0x1220
		int    	m_bSmoke; // 0x1221
		int    	m_bPropFlare; // 0x1222
	};
#pragma pack(pop)
