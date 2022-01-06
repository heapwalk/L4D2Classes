
#pragma pack(push,1)
	class CBeam
	{
	public:
		unsigned char _0x0[0x64];
		int    	m_clrRender; // 0x64
		unsigned char _0x68[0xbc];
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x4];
		int    	moveparent; // 0x134
		unsigned char _0x138[0x8];
		int    	m_nModelIndex; // 0x140
		int    	m_nRenderFX; // 0x142
		int    	m_nRenderMode; // 0x143
		unsigned char _0x147[0x4f1];
		float  	m_flFrameRate; // 0x638
		float  	m_flHDRColorScale; // 0x63c
		unsigned char _0x640[0x8];
		int    	m_nNumBeamEnts; // 0x648
		unsigned char _0x64c[0x4];
		int    	m_nHaloIndex; // 0x650
		int    	m_nBeamType; // 0x654
		int    	m_nBeamFlags; // 0x658
		int    	m_hAttachEntity[10]; // 0x65c
		int    	m_nAttachIndex[10]; // 0x684
		float  	m_fWidth; // 0x6ac
		float  	m_fEndWidth; // 0x6b0
		float  	m_fFadeLength; // 0x6b4
		float  	m_fHaloScale; // 0x6b8
		float  	m_fAmplitude; // 0x6bc
		float  	m_fStartFrame; // 0x6c0
		float  	m_fSpeed; // 0x6c4
		float  	m_flFrame; // 0x6c8
		vector3	m_vecEndPos; // 0x6cc
	};
#pragma pack(pop)
