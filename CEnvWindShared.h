
#pragma pack(push,1)
	class CEnvWindShared
	{
	public:
		unsigned char _0x0[0x4];
		float  	m_flStartTime; // 0x4
		int    	m_iWindSeed; // 0x8
		int    	m_iMinWind; // 0xc
		int    	m_iMaxWind; // 0x10
		int    	m_windRadius; // 0x14
		int    	m_iMinGust; // 0x18
		int    	m_iMaxGust; // 0x1c
		float  	m_flMinGustDelay; // 0x20
		float  	m_flMaxGustDelay; // 0x24
		float  	m_flGustDuration; // 0x28
		int    	m_iGustDirChange; // 0x2c
		vector3	m_location; // 0x30
		unsigned char _0x3c[0x30];
		int    	m_iInitialWindDir; // 0x6c
		float  	m_flInitialWindSpeed; // 0x70
	};
#pragma pack(pop)
