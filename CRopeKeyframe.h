
#pragma pack(push,1)
	class CRopeKeyframe
	{
	public:
		unsigned char _0x0[0x124];
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x4];
		int    	moveparent; // 0x134
		unsigned char _0x138[0xc0];
		int    	m_iParentAttachment; // 0x1f8
		unsigned char _0x1fc[0x3ec];
		int    	m_nMinCPULevel; // 0x5e8
		int    	m_nMaxCPULevel; // 0x5e9
		int    	m_nMinGPULevel; // 0x5ea
		int    	m_nMaxGPULevel; // 0x5eb
		unsigned char _0x5ef[0x7d];
		float  	m_flScrollSpeed; // 0x66c
		int    	m_RopeFlags; // 0x670
		int    	m_iRopeMaterialModelIndex; // 0x674
		unsigned char _0x678[0x288];
		int    	m_nSegments; // 0x900
		int    	m_hStartPoint; // 0x904
		int    	m_hEndPoint; // 0x908
		int    	m_iStartAttachment; // 0x90c
		int    	m_iEndAttachment; // 0x90e
		int    	m_Subdiv; // 0x910
		int    	m_RopeLength; // 0x914
		int    	m_Slack; // 0x918
		float  	m_TextureScale; // 0x91c
		int    	m_fLockedPoints; // 0x920
		int    	m_nChangeCount; // 0x924
		float  	m_Width; // 0x928
		unsigned char _0x92c[0x7c];
		int    	m_bConstrainBetweenEndpoints; // 0x9a8
	};
#pragma pack(pop)
