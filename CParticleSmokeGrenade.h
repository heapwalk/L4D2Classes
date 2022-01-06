#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CParticleSmokeGrenade : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x724];
		int    	m_CurrentStage; // 0x724
		unsigned char _0x728[0xc];
		float  	m_flSpawnTime; // 0x734
		float  	m_FadeStartTime; // 0x738
		float  	m_FadeEndTime; // 0x73c
	};
#pragma pack(pop)
