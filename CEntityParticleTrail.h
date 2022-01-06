#include "CBaseParticleEntity.h"
#include "CEntityParticleTrailInfo.h"

#pragma pack(push,1)
	class CEntityParticleTrail : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x720];
		int    	m_iMaterialName; // 0x720
		CEntityParticleTrailInfo	m_Info; // 0x724
		int    	m_hConstraintEntity; // 0x738
	};
#pragma pack(pop)
