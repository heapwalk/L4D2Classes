
#pragma pack(push,1)
	class CTeam
	{
	public:
		int    	player_array_element; // 0x0
		unsigned char _0x4[0x648];
		char*  	m_szTeamname; // 0x64c
		unsigned char _0x650[0x1c];
		int    	m_iScore; // 0x66c
		int    	m_iRoundsWon; // 0x670
		unsigned char _0x674[0xc];
		int    	m_iTeamNum; // 0x680
	};
#pragma pack(pop)
