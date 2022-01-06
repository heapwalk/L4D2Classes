#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CSporeExplosion : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x724];
		float  	m_flSpawnRate; // 0x724
		float  	m_flParticleLifetime; // 0x728
		float  	m_flStartSize; // 0x72c
		float  	m_flEndSize; // 0x730
		float  	m_flSpawnRadius; // 0x734
		unsigned char _0x738[0x4];
		int    	m_bEmit; // 0x73c
		int    	m_bDontRemove; // 0x73d
	};
#pragma pack(pop)
