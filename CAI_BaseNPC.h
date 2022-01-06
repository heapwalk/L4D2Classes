#include "CBaseCombatCharacter.h"

#pragma pack(push,1)
	class CAI_BaseNPC : 
		 public CBaseCombatCharacter // 0x1088
	{
	public:
		int    	m_lifeState; // 0x147
		unsigned char _0x14b[0xfc5];
		float  	m_flTimePingEffect; // 0x1110
		int    	m_iDeathPose; // 0x1114
		int    	m_iDeathFrame; // 0x1118
		int    	m_iSpeedModRadius; // 0x111c
		int    	m_iSpeedModSpeed; // 0x1120
		int    	m_bPerformAvoidance; // 0x1124
		int    	m_bIsMoving; // 0x1125
		int    	m_bFadeCorpse; // 0x1126
		int    	m_bSpeedModActive; // 0x1127
		int    	m_bImportanRagdoll; // 0x1128
	};
#pragma pack(pop)
