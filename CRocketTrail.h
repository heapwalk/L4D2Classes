#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CRocketTrail : 
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
		float  	m_StartSize; // 0x754
		float  	m_EndSize; // 0x758
		float  	m_SpawnRadius; // 0x75c
		unsigned char _0x760[0xc];
		int    	m_bEmit; // 0x76c
		int    	m_bDamaged; // 0x76d
		int    	m_nAttachment; // 0x770
		unsigned char _0x774[0xc];
		float  	m_flFlareScale; // 0x780
	};
#pragma pack(pop)
