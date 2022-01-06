
#pragma pack(push,1)
	class CLightGlow
	{
	public:
		float  	HDRColorScale; // 0x0
		unsigned char _0x4[0x60];
		int    	m_clrRender; // 0x64
		unsigned char _0x68[0xb0];
		vector3	m_angRotation; // 0x118
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x4];
		int    	moveparent; // 0x134
		unsigned char _0x138[0x500];
		int    	m_nHorizontalSize; // 0x638
		int    	m_nVerticalSize; // 0x63c
		int    	m_nMinDist; // 0x640
		int    	m_nMaxDist; // 0x644
		int    	m_nOuterMaxDist; // 0x648
		int    	m_spawnflags; // 0x64c
		unsigned char _0x650[0xcc];
		float  	m_flGlowProxySize; // 0x71c
	};
#pragma pack(pop)
