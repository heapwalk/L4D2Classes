
#pragma pack(push,1)
	class CLocal
	{
	public:
		unsigned char _0x0[0x4];
		bool   	m_chAreaBits[32]; // 0x4
		bool   	m_chAreaPortalBits[24]; // 0x24
		unsigned char _0x3c[0x8];
		float  	m_flFOVRate; // 0x44
		int    	m_iHideHUD; // 0x48
		int    	m_nDuckTimeMsecs; // 0x4c
		int    	m_nDuckJumpTimeMsecs; // 0x50
		int    	m_nJumpTimeMsecs; // 0x54
		float  	m_flFallVelocity; // 0x58
		float  	m_flStepSize; // 0x5c
		vector3	m_vecPunchAngle; // 0x60
		vector3	m_vecPunchAngleVel; // 0x6c
		int    	m_bDucked; // 0x78
		int    	m_bDucking; // 0x79
		int    	m_bInDuckJump; // 0x7a
		int    	m_bDrawViewmodel; // 0x7b
		int    	m_bWearingSuit; // 0x7c
		int    	m_bPoisoned; // 0x7d
		int    	m_bAllowAutoMovement; // 0x7e
		unsigned char _0x82[0x66];
		int    	m_bAutoAimTarget; // 0xe8
		unsigned char _0xec[0x4];
		int    	m_skybox3d_scale; // 0xf0
		vector3	m_skybox3d_origin; // 0xf4
		int    	m_skybox3d_area; // 0x100
		int    	m_skybox3d_bClip3DSkyBoxNearToWorldFar; // 0x104
		float  	m_skybox3d_flClip3DSkyBoxNearToWorldFarOffset; // 0x108
		unsigned char _0x10c[0x4];
		vector3	m_skybox3d_fog_dirPrimary; // 0x110
		int    	m_skybox3d_fog_colorPrimary; // 0x11c
		int    	m_skybox3d_fog_colorSecondary; // 0x120
		unsigned char _0x124[0x8];
		float  	m_skybox3d_fog_start; // 0x12c
		float  	m_skybox3d_fog_end; // 0x130
		unsigned char _0x134[0x4];
		float  	m_skybox3d_fog_maxdensity; // 0x138
		unsigned char _0x13c[0x1c];
		int    	m_skybox3d_fog_enable; // 0x158
		int    	m_skybox3d_fog_blend; // 0x159
		float  	m_skybox3d_fog_HDRColorScale; // 0x15c
		unsigned char _0x160[0x4];
		vector3	m_audio_localSound_0; // 0x164
		vector3	m_audio_localSound_1; // 0x170
		vector3	m_audio_localSound_2; // 0x17c
		vector3	m_audio_localSound_3; // 0x188
		vector3	m_audio_localSound_4; // 0x194
		vector3	m_audio_localSound_5; // 0x1a0
		vector3	m_audio_localSound_6; // 0x1ac
		vector3	m_audio_localSound_7; // 0x1b8
		int    	m_audio_soundscapeIndex; // 0x1c4
		int    	m_audio_localBits; // 0x1c8
		int    	m_audio_entIndex; // 0x1cc
	};
#pragma pack(pop)
