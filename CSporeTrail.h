#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CSporeTrail : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x720];
		vector3	m_vecEndColor; // 0x720
		float  	m_flSpawnRate; // 0x72c
		float  	m_flParticleLifetime; // 0x730
		float  	m_flStartSize; // 0x734
		float  	m_flEndSize; // 0x738
		float  	m_flSpawnRadius; // 0x73c
		unsigned char _0x740[0xc];
		int    	m_bEmit; // 0x74c
	};
#pragma pack(pop)
