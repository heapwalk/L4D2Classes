
#pragma pack(push,1)
	class CCSLocalPlayerExclusive
	{
	public:
		unsigned char _0x0[0xf4];
		float  	m_vecViewOffset_0; // 0xf4
		float  	m_vecViewOffset_1; // 0xf8
		float  	m_vecViewOffset_2; // 0xfc
		unsigned char _0x100[0x24];
		vector2	m_vecOrigin; // 0x124
		float  	m_vecOrigin_2; // 0x12c
		unsigned char _0x130[0x1770];
		float  	m_flStamina; // 0x18a0
		int    	m_iDirection; // 0x18a4
		int    	m_iShotsFired; // 0x18a8
		int    	m_duckUntilOnGround; // 0x18ac
		unsigned char _0x18b0[0x4];
		float  	m_flVelocityModifier; // 0x18b4
	};
#pragma pack(pop)
