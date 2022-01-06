
#pragma pack(push,1)
	class CLocalActiveShotgunData
	{
	public:
		unsigned char _0x0[0xd40];
		int    	m_reloadState; // 0xd40
		int    	m_reloadNumShells; // 0xd44
		float  	m_reloadStartTime; // 0xd48
		float  	m_reloadStartDuration; // 0xd4c
		float  	m_reloadInsertDuration; // 0xd50
		float  	m_reloadEndDuration; // 0xd54
		int    	m_reloadAnimState; // 0xd58
		int    	m_shellsInserted; // 0xd5c
	};
#pragma pack(pop)
