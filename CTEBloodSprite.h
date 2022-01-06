
#pragma pack(push,1)
	class CTEBloodSprite
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		vector3	m_vecDirection; // 0x1c
		int    	r; // 0x28
		int    	g; // 0x2c
		int    	b; // 0x30
		int    	a; // 0x34
		int    	m_nDropModel; // 0x38
		int    	m_nSprayModel; // 0x3c
		int    	m_nSize; // 0x40
	};
#pragma pack(pop)
