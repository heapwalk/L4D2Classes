#include "CBaseFlex.h"

#pragma pack(push,1)
	class CTransitioningPlayer : 
		 public CBaseFlex // 0xd88
	{
	public:
		int    	m_iHealth; // 0xec
		unsigned char _0xf0[0x1020];
		int    	m_userID; // 0x1110
		int    	m_score; // 0x1114
		int    	m_deaths; // 0x1118
		int    	m_healthBuffer; // 0x111c
		int    	m_loadingProgress; // 0x1120
		int    	m_isAlive; // 0x1124
		int    	m_isDying; // 0x1125
		int    	m_isIncapacitated; // 0x1126
		int    	m_isIT; // 0x1127
		char*  	m_playerName; // 0x1128
		unsigned char _0x112c[0x1c];
		int    	m_character; // 0x1148
		int    	m_hasMolotov; // 0x114c
		int    	m_hasGrenade; // 0x114d
		int    	m_hasFirstAidKit; // 0x114e
		int    	m_hasPainPills; // 0x114f
		int    	m_primaryWeaponID; // 0x1150
		int    	m_secondaryWeaponID; // 0x1154
	};
#pragma pack(pop)
