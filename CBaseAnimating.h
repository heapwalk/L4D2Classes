#include "CBaseEntity.h"

#pragma pack(push,1)
	class CBaseAnimating : 
		 public CBaseEntity // 0x5fc
	{
	public:
		int    	m_bClientSideRagdoll; // 0x165
		unsigned char _0x169[0x4d7];
		int    	m_nHitboxSet; // 0x640
		unsigned char _0x644[0x18];
		float  	m_flCycle; // 0x65c
		float  	m_flPlaybackRate; // 0x660
		int    	m_nSkin; // 0x664
		int    	m_nBody; // 0x668
		int    	m_nNewSequenceParity; // 0x66c
		int    	m_nResetEventsParity; // 0x670
		int    	m_flEncodedController[4]; // 0x674
		int    	m_nMuzzleFlashParity; // 0x684
		unsigned char _0x688[0x10];
		vector3	m_vecForce; // 0x698
		int    	m_nForceBone; // 0x6a4
		unsigned char _0x6a8[0x30];
		int    	m_bClientSideFrameReset; // 0x6d8
		float  	m_flFrozen; // 0x6dc
		unsigned char _0x6e0[0x48];
		float  	m_flModelScale; // 0x728
		int    	m_flPoseParameter[24]; // 0x72c
		unsigned char _0x78c[0xf0];
		int    	m_bClientSideAnimation; // 0x87c
		unsigned char _0x880[0x24];
		int    	m_nSequence; // 0x8a4
		unsigned char _0x8a8[0x84];
		int    	m_hLightingOrigin; // 0x92c
	};
#pragma pack(pop)
