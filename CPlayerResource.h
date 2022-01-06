
#pragma pack(push,1)
	class CPlayerResource
	{
	public:
		unsigned char _0x0[0x6c0];
		int    	m_iPing[33]; // 0x6c0
		int    	m_iScore[33]; // 0x744
		int    	m_iTankTickets[33]; // 0x7c8
		int    	m_iDeaths[33]; // 0x84c
		bool   	m_bConnected[33]; // 0x8d0
		unsigned char _0x8f1[0x3];
		int    	m_iTeam[33]; // 0x8f4
		bool   	m_bAlive[33]; // 0x978
		unsigned char _0x999[0x3];
		int    	m_iHealth[33]; // 0x99c
	};
#pragma pack(pop)
