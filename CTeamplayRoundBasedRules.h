
#pragma pack(push,1)
	class CTeamplayRoundBasedRules
	{
	public:
		unsigned char _0x0[0x28];
		int    	m_iRoundState; // 0x28
		int    	m_bInOvertime; // 0x2c
		int    	m_bInSetup; // 0x2d
		int    	m_bSwitchedTeamsThisRound; // 0x2e
		int    	m_iWinningTeam; // 0x30
		unsigned char _0x34[0x4];
		int    	m_bInWaitingForPlayers; // 0x38
		int    	m_bAwaitingReadyRestart; // 0x39
		float  	m_flRestartRoundTime; // 0x3c
		float  	m_flMapResetTime; // 0x40
		int    	m_flNextRespawnWave[32]; // 0x44
		bool   	m_bTeamReady[32]; // 0xc4
		int    	m_bStopWatch; // 0xe4
		int    	m_TeamRespawnWaveTimes[32]; // 0xe8
	};
#pragma pack(pop)
