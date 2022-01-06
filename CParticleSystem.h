
#pragma pack(push,1)
	class CParticleSystem
	{
	public:
		unsigned char _0x0[0x118];
		vector3	m_angRotation; // 0x118
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x4];
		int    	moveparent; // 0x134
		int    	m_hOwnerEntity; // 0x138
		unsigned char _0x13c[0xbc];
		int    	m_iParentAttachment; // 0x1f8
		unsigned char _0x1fc[0x43c];
		int    	m_iEffectIndex; // 0x638
		int    	m_bActive; // 0x63c
		float  	m_flStartTime; // 0x640
		bool   	m_vServerControlPoints[4]; // 0x644
		bool   	m_iServerControlPointAssignments[4]; // 0x674
		unsigned char _0x678[0xc];
		int    	m_hControlPointEnts[63]; // 0x684
		bool   	m_iControlPointParents[63]; // 0x780
	};
#pragma pack(pop)
