#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CRagdoll : 
		 public CBaseAnimating // 0x930
	{
	public:
		bool   	m_ragAngles[1]; // 0x0
		unsigned char _0x0[0x958];
		vector3	m_ragPos_0; // 0x958
		unsigned char _0x964[0x114];
		vector3	m_ragAngles_0; // 0xa78
		unsigned char _0xa84[0x1d0];
		int    	m_hUnragdoll; // 0xc54
		float  	m_flBlendWeight; // 0xc58
		unsigned char _0xc5c[0x4];
		int    	m_nOverlaySequence; // 0xc60
	};
#pragma pack(pop)
