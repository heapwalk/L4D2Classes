
#pragma pack(push,1)
	class CFogController
	{
	public:
		unsigned char _0x0[0x63c];
		vector3	m_fog_dirPrimary; // 0x63c
		int    	m_fog_colorPrimary; // 0x648
		int    	m_fog_colorSecondary; // 0x64c
		int    	m_fog_colorPrimaryLerpTo; // 0x650
		int    	m_fog_colorSecondaryLerpTo; // 0x654
		float  	m_fog_start; // 0x658
		float  	m_fog_end; // 0x65c
		float  	m_fog_farz; // 0x660
		float  	m_fog_maxdensity; // 0x664
		float  	m_fog_skyboxFogFactor; // 0x668
		float  	m_fog_skyboxFogFactorLerpTo; // 0x66c
		float  	m_fog_startLerpTo; // 0x670
		float  	m_fog_endLerpTo; // 0x674
		float  	m_fog_maxdensityLerpTo; // 0x678
		float  	m_fog_lerptime; // 0x67c
		float  	m_fog_duration; // 0x680
		int    	m_fog_enable; // 0x684
		int    	m_fog_blend; // 0x685
		float  	m_fog_HDRColorScale; // 0x688
	};
#pragma pack(pop)
