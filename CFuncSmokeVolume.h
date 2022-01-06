#include "CBaseParticleEntity.h"
#include "CCollisionProperty.h"

#pragma pack(push,1)
	class CFuncSmokeVolume : 
		 public CBaseParticleEntity // 0x0
	{
	public:
		unsigned char _0x0[0x21c];
		CCollisionProperty	m_Collision; // 0x21c
		unsigned char _0x260[0x4c4];
		int    	m_Color1; // 0x724
		int    	m_Color2; // 0x728
		char*  	m_MaterialName; // 0x72c
		unsigned char _0x730[0xfc];
		float  	m_ParticleDrawWidth; // 0x82c
		float  	m_ParticleSpacingDistance; // 0x830
		float  	m_DensityRampSpeed; // 0x834
		float  	m_RotationSpeed; // 0x838
		float  	m_MovementSpeed; // 0x83c
		float  	m_Density; // 0x840
		float  	m_maxDrawDistance; // 0x844
		int    	m_spawnflags; // 0x848
	};
#pragma pack(pop)
