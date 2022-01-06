#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CSmokeStack : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x774];
		float  	m_SpreadSpeed; // 0x774
		float  	m_Speed; // 0x778
		float  	m_StartSize; // 0x77c
		float  	m_EndSize; // 0x780
		float  	m_Rate; // 0x784
		float  	m_JetLength; // 0x788
		int    	m_bEmit; // 0x78c
		float  	m_flBaseSpread; // 0x790
		vector3	m_AmbientLight_m_vPos; // 0x794
		vector3	m_AmbientLight_m_vColor; // 0x7a0
		float  	m_AmbientLight_m_flIntensity; // 0x7ac
		vector3	m_DirLight_m_vPos; // 0x7b0
		vector3	m_DirLight_m_vColor; // 0x7bc
		float  	m_DirLight_m_flIntensity; // 0x7c8
		unsigned char _0x7cc[0xc];
		vector3	m_vWind; // 0x7d8
		float  	m_flTwist; // 0x7e4
		int    	m_iMaterialModel; // 0x7e8
		unsigned char _0x7ec[0x34];
		float  	m_flRollSpeed; // 0x820
	};
#pragma pack(pop)
