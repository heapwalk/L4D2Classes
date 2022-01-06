
#pragma pack(push,1)
	class CSun
	{
	public:
		float  	HDRColorScale; // 0x0
		unsigned char _0x4[0x60];
		int    	m_clrRender; // 0x64
		unsigned char _0x68[0x720];
		int    	m_clrOverlay; // 0x788
		int    	m_nSize; // 0x78c
		int    	m_nOverlaySize; // 0x790
		vector3	m_vDirection; // 0x794
		int    	m_bOn; // 0x7a0
		int    	m_nMaterial; // 0x7a4
		int    	m_nOverlayMaterial; // 0x7a8
	};
#pragma pack(pop)
