
#pragma pack(push,1)
	class CBaseBeam
	{
	public:
		unsigned char _0x0[0x10];
		int    	m_nModelIndex; // 0x10
		int    	m_nHaloIndex; // 0x14
		int    	m_nStartFrame; // 0x18
		int    	m_nFrameRate; // 0x1c
		float  	m_fLife; // 0x20
		float  	m_fWidth; // 0x24
		float  	m_fEndWidth; // 0x28
		int    	m_nFadeLength; // 0x2c
		float  	m_fAmplitude; // 0x30
		int    	r; // 0x34
		int    	g; // 0x38
		int    	b; // 0x3c
		int    	a; // 0x40
		int    	m_nSpeed; // 0x44
		int    	m_nFlags; // 0x48
	};
#pragma pack(pop)
