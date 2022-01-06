#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CSmokeTrail : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x724];
		float  	m_SpawnRate; // 0x724
		vector3	m_StartColor; // 0x728
		vector3	m_EndColor; // 0x734
		float  	m_Opacity; // 0x740
		float  	m_ParticleLifetime; // 0x744
		float  	m_StopEmitTime; // 0x748
		float  	m_MinSpeed; // 0x74c
		float  	m_MaxSpeed; // 0x750
		float  	m_MinDirectedSpeed; // 0x754
		float  	m_MaxDirectedSpeed; // 0x758
		float  	m_StartSize; // 0x75c
		float  	m_EndSize; // 0x760
		float  	m_SpawnRadius; // 0x764
		unsigned char _0x768[0xc];
		int    	m_bEmit; // 0x774
		int    	m_nAttachment; // 0x778
	};
#pragma pack(pop)
