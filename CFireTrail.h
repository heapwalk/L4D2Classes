#include "CBaseParticleEntity.h"

#pragma pack(push,1)
	class CFireTrail : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x724];
		int    	m_nAttachment; // 0x724
		float  	m_flLifetime; // 0x728
	};
#pragma pack(pop)
