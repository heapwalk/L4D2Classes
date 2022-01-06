
#pragma pack(push,1)
	class CSteamJet
	{
	public:
		unsigned char _0x0[0x724];
		float  	m_SpreadSpeed; // 0x724
		float  	m_Speed; // 0x728
		float  	m_StartSize; // 0x72c
		float  	m_EndSize; // 0x730
		float  	m_Rate; // 0x734
		float  	m_JetLength; // 0x738
		int    	m_bEmit; // 0x73c
		int    	m_nType; // 0x740
		int    	m_bFaceLeft; // 0x744
		int    	m_spawnflags; // 0x748
		float  	m_flRollSpeed; // 0x74c
		char*  	m_NoiseStart; // 0x750
	};
#pragma pack(pop)
