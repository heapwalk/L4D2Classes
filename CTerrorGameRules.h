
#pragma pack(push,1)
	class CTerrorGameRules
	{
	public:
		bool   	m_szScriptedHUDStringSet[1]; // 0x0
		unsigned char _0x0[0x20];
		int    	m_bFreezePeriod; // 0x20
		int    	m_iRoundTime; // 0x24
		float  	m_fLevelStartTime; // 0x28
		float  	m_flGameStartTime; // 0x2c
		unsigned char _0x30[0x28];
		int    	m_iSurvivorScore[2]; // 0x58
		int    	m_iCampaignScore[2]; // 0x60
		int    	m_iChapterScore[2]; // 0x68
		int    	m_iChapterDamage[2]; // 0x70
		int    	m_iScavengeTeamScore[10]; // 0x78
		int    	m_iScavengeMatchScore[2]; // 0xa0
		int    	m_flTeamRoundTime[2]; // 0xa8
		int    	m_iVersusDistancePerSurvivor[8]; // 0xb0
		int    	m_iVersusSurvivorDeathDistance[8]; // 0xd0
		unsigned char _0xf0[0x8];
		int    	m_iVersusSurvivalMultiplier[2]; // 0xf8
		int    	m_iVersusDefibsUsed[2]; // 0x100
		unsigned char _0x108[0x4];
		int    	m_bInIntro; // 0x10c
		float  	m_flRoundStartTime; // 0x110
		float  	m_flRoundEndTime; // 0x114
		float  	m_flAccumulatedTime; // 0x118
		int    	m_nRoundNumber; // 0x11c
		int    	m_nRoundLimit; // 0x120
		int    	m_iWinningTeamNumber[5]; // 0x124
		float  	m_flTeamBestRoundTime; // 0x138
		int    	m_flRoundDuration[2]; // 0x13c
		int    	m_nScavengeItemsRemaining; // 0x144
		int    	m_nScavengeItemsGoal; // 0x148
		int    	m_iServerRank; // 0x14c
		int    	m_iServerPlayerCount; // 0x150
		int    	m_bIsDedicatedServer; // 0x154
		int    	m_iServerSteamGroupID; // 0x158
		int    	m_bAreTeamsFlipped; // 0x15c
		int    	m_bInSecondHalfOfRound; // 0x15d
		int    	m_bIsTransitioningToNextMap; // 0x15e
		int    	m_bIsVersusVoteRestarting; // 0x15f
		int    	m_bChallengeModeActive; // 0x160
		int    	m_bWaterSlowdownEnabled; // 0x161
		int    	m_iSacrificeEscapees; // 0x164
		float  	m_flHoldoutCooldownEndTime; // 0x168
		int    	m_iScriptedHUDInts[15]; // 0x16c
		int    	m_fScriptedHUDFloats[15]; // 0x1a8
		int    	m_iScriptedHUDFlags[15]; // 0x1e4
		int    	m_fScriptedHUDPosX[15]; // 0x220
		int    	m_fScriptedHUDPosY[15]; // 0x25c
		int    	m_fScriptedHUDWidth[15]; // 0x298
		int    	m_fScriptedHUDHeight[15]; // 0x2d4
		int    	m_iScriptedHUDTimerMode[4]; // 0x310
		int    	m_fScriptedHUDTimerBase[4]; // 0x320
		int    	m_fScriptedHUDTimerAdd[4]; // 0x330
		char*  	m_szScriptedHUDStringSet_0; // 0x340
	};
#pragma pack(pop)
