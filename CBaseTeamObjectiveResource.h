
#pragma pack(push,1)
	class CBaseTeamObjectiveResource
	{
	public:
		bool   	m_vCPPositions[1]; // 0x0
		unsigned char _0x0[0x638];
		int    	m_iTimerToShowInHUD; // 0x638
		int    	m_iStopWatchTimer; // 0x63c
		int    	m_iNumControlPoints; // 0x640
		unsigned char _0x644[0x4];
		int    	m_bPlayingMiniRounds; // 0x648
		int    	m_bControlPointsReset; // 0x649
		int    	m_iUpdateCapHudParity; // 0x64c
		unsigned char _0x650[0x4];
		vector3	m_vCPPositions_0; // 0x654
		unsigned char _0x660[0x54];
		bool   	m_bCPIsVisible[8]; // 0x6b4
		int    	m_flLazyCapPerc[8]; // 0x6bc
		unsigned char _0x6dc[0x20];
		int    	m_iTeamIcons[64]; // 0x6fc
		int    	m_iTeamOverlays[64]; // 0x7fc
		int    	m_iTeamReqCappers[64]; // 0x8fc
		int    	m_flTeamCapTime[64]; // 0x9fc
		int    	m_iPreviousPoints[192]; // 0xafc
		bool   	m_bTeamCanCap[64]; // 0xdfc
		int    	m_iTeamBaseIcons[32]; // 0xe3c
		int    	m_iBaseControlPoints[32]; // 0xebc
		bool   	m_bInMiniRound[8]; // 0xf3c
		int    	m_iWarnOnCap[8]; // 0xf44
		char*  	m_iszWarnSound_0; // 0xf64
		unsigned char _0xf68[0x7f4];
		int    	m_flPathDistance[8]; // 0x175c
		int    	m_iNumTeamMembers[64]; // 0x177c
		int    	m_iCappingTeam[8]; // 0x187c
		int    	m_iTeamInZone[8]; // 0x189c
		bool   	m_bBlocked[8]; // 0x18bc
		int    	m_iOwner[8]; // 0x18c4
		unsigned char _0x18e4[0x68];
		char*  	m_pszCapLayoutInHUD; // 0x194c
	};
#pragma pack(pop)
