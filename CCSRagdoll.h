
#pragma pack(push,1)
	class CCSRagdoll
	{
	public:
		unsigned char _0x0[0xe4];
		int    	m_iTeamNum; // 0xe4
		unsigned char _0xe8[0x3c];
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x10];
		int    	m_nModelIndex; // 0x140
		unsigned char _0x144[0x554];
		vector3	m_vecForce; // 0x698
		int    	m_nForceBone; // 0x6a4
		unsigned char _0x6a8[0x1d4];
		int    	m_bClientSideAnimation; // 0x87c
		unsigned char _0x880[0x320];
		int    	m_hPlayer; // 0xba0
		vector3	m_vecRagdollVelocity; // 0xba4
		vector3	m_vecRagdollOrigin; // 0xbb0
		int    	m_iDeathPose; // 0xbbc
		int    	m_iDeathFrame; // 0xbc0
		int    	m_bOnFire; // 0xbc4
		int    	m_bInterpOrigin; // 0xbc5
		int    	m_ragdollType; // 0xbc8
		int    	m_zombieClass; // 0xbcc
		int    	m_survivorCharacter; // 0xbd0
	};
#pragma pack(pop)
