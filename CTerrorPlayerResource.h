
#pragma pack(push,1)
	class CTerrorPlayerResource
	{
	public:
		unsigned char _0x0[0xaa0];
		int    	m_maxHealth[33]; // 0xaa0
		int    	m_primaryWeapon[33]; // 0xb24
		int    	m_grenade[33]; // 0xba8
		int    	m_firstAidSlot[33]; // 0xc2c
		int    	m_pillsSlot[33]; // 0xcb0
		bool   	m_isGhost[33]; // 0xd34
		bool   	m_isIncapacitated[33]; // 0xd55
		bool   	m_wantsToPlay[33]; // 0xd76
		unsigned char _0xd97[0x1];
		int    	m_zombieClass[33]; // 0xd98
		int    	m_tankTickets[33]; // 0xe1c
		bool   	m_listenServerHost[33]; // 0xea0
		unsigned char _0xec1[0x3];
		int    	m_teamSwitchRule[33]; // 0xec4
		int    	m_flSurvivalRecordTime[33]; // 0xf48
		int    	m_nSurvivalTopMedal[33]; // 0xfcc
		int    	m_flBecomeGhostAt[33]; // 0x1050
		float  	m_tankLotteryEntryRatio; // 0x10d4
		float  	m_tankLotterySelectionRatio; // 0x10d8
		int    	m_pendingTankPlayerIndex; // 0x10dc
		int    	m_isFinale; // 0x10e0
		int    	m_isSurvivorTeamReadyTime; // 0x10e1
		int    	m_survivorTeamReadyTime; // 0x10e4
		int    	m_nRoundSetupTimeRemaining; // 0x10e8
		int    	m_tempoState; // 0x10ec
		int    	m_hasAnySurvivorLeftSafeArea; // 0x10f0
		int    	m_isTeamFrozen; // 0x10f1
		int    	m_missionDuration; // 0x10f4
		int    	m_missionWipes; // 0x10f8
		float  	m_starRating; // 0x10fc
		int    	m_sharedRandomSeed; // 0x1100
	};
#pragma pack(pop)
