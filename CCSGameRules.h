
#pragma pack(push,1)
	class CCSGameRules
	{
	public:
		unsigned char _0x0[0x20];
		int    	m_bFreezePeriod; // 0x20
		int    	m_iRoundTime; // 0x24
		float  	m_fLevelStartTime; // 0x28
		float  	m_flGameStartTime; // 0x2c
		int    	m_iHostagesRemaining; // 0x30
		int    	m_bMapHasBombTarget; // 0x34
		int    	m_bMapHasRescueZone; // 0x35
		int    	m_bLogoMap; // 0x36
		int    	m_bBlackMarket; // 0x37
	};
#pragma pack(pop)
