#include "CBasePlayer.h"

#pragma pack(push,1)
	class CCSPlayer : 
		 public CBasePlayer // 0x1810
	{
	public:
		float  	m_vecViewOffset_0; // 0xf4
		float  	m_vecViewOffset_1; // 0xf8
		float  	m_vecViewOffset_2; // 0xfc
		unsigned char _0x100[0x24];
		vector2	m_vecOrigin; // 0x124
		float  	m_vecOrigin_2; // 0x12c
		unsigned char _0x130[0x1744];
		int    	m_iPlayerState; // 0x1874
		int    	m_bIsDefusing; // 0x1878
		int    	m_bInBombZone; // 0x1879
		int    	m_bInBuyZone; // 0x187a
		int    	m_iThrowGrenadeCounter; // 0x187c
		int    	m_iAddonBits; // 0x1880
		int    	m_AddonModelWeaponIDs[5]; // 0x1884
		float  	m_flProgressBarDuration; // 0x1898
		float  	m_flProgressBarStartTime; // 0x189c
		float  	m_flStamina; // 0x18a0
		int    	m_iDirection; // 0x18a4
		int    	m_iShotsFired; // 0x18a8
		int    	m_duckUntilOnGround; // 0x18ac
		int    	m_bNightVisionOn; // 0x18ad
		int    	m_bHasNightVision; // 0x18ae
		int    	m_iNightVisionScale; // 0x18b0
		float  	m_flVelocityModifier; // 0x18b4
		unsigned char _0x18b8[0x4];
		int    	m_hRagdoll; // 0x18bc
		unsigned char _0x18c0[0x14];
		float  	m_flFlashMaxAlpha; // 0x18d4
		float  	m_flFlashDuration; // 0x18d8
		unsigned char _0x18dc[0x40];
		vector3	m_lastLadderNormal; // 0x191c
		unsigned char _0x1928[0x34];
		int    	m_iAccount; // 0x195c
		int    	m_bHasHelmet; // 0x1960
		int    	m_iClass; // 0x1964
		int    	m_ArmorValue; // 0x1968
		float  	m_angEyeAngles_0; // 0x196c
		float  	m_angEyeAngles_1; // 0x1970
		unsigned char _0x1974[0x4];
		int    	m_bHasDefuser; // 0x1978
		int    	m_bInHostageRescueZone; // 0x1979
		unsigned char _0x197d[0x3];
		vector3	m_vecRagdollVelocity; // 0x1980
		unsigned char _0x198c[0xe0];
		int    	m_cycleLatch; // 0x1a6c
	};
#pragma pack(pop)
