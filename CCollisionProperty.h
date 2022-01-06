
#pragma pack(push,1)
	class CCollisionProperty
	{
	public:
		unsigned char _0x0[0x8];
		vector3	m_vecMins; // 0x8
		vector3	m_vecMaxs; // 0x14
		int    	m_usSolidFlags; // 0x20
		int    	m_nSolidType; // 0x22
		int    	m_triggerBloat; // 0x23
		unsigned char _0x27[0x3];
		int    	m_nSurroundType; // 0x2a
		vector3	m_vecSpecifiedSurroundingMins; // 0x2c
		vector3	m_vecSpecifiedSurroundingMaxs; // 0x38
	};
#pragma pack(pop)
