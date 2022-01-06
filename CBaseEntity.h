#include "CCollisionProperty.h"
#include "CGlowProperty.h"

#pragma pack(push,1)
	class CBaseEntity
	{
	public:
		unsigned char _0x0[0x14];
		int    	m_hScriptUseTarget; // 0x14
		unsigned char _0x18[0x1c];
		int    	m_Gender; // 0x34
		unsigned char _0x38[0x2c];
		int    	m_clrRender; // 0x64
		int    	m_cellbits; // 0x68
		unsigned char _0x6c[0x4];
		int    	m_cellX; // 0x70
		int    	m_cellY; // 0x74
		int    	m_cellZ; // 0x78
		unsigned char _0x7c[0x64];
		int    	m_fEffects; // 0xe0
		int    	m_iTeamNum; // 0xe4
		unsigned char _0xe8[0x30];
		vector3	m_angRotation; // 0x118
		vector3	m_vecOrigin; // 0x124
		unsigned char _0x130[0x4];
		int    	moveparent; // 0x134
		int    	m_hOwnerEntity; // 0x138
		unsigned char _0x13c[0x4];
		int    	m_nModelIndex; // 0x140
		int    	m_nRenderFX; // 0x142
		int    	m_nRenderMode; // 0x143
		unsigned char _0x147[0x1];
		int    	m_flAnimTime; // 0x148
		unsigned char _0x14c[0x4];
		int    	m_flSimulationTime; // 0x150
		unsigned char _0x154[0x4];
		float  	m_flCreateTime; // 0x158
		unsigned char _0x15c[0x8c];
		float  	m_fadeMinDist; // 0x1e8
		float  	m_fadeMaxDist; // 0x1ec
		float  	m_flFadeScale; // 0x1f0
		unsigned char _0x1f4[0x4];
		int    	m_iParentAttachment; // 0x1f8
		unsigned char _0x1fc[0x20];
		CCollisionProperty	m_Collision; // 0x21c
		unsigned char _0x260[0x18];
		CGlowProperty	m_Glow; // 0x278
		unsigned char _0x290[0x3c];
		int    	m_bGlowBackfaceMult; // 0x2cc
		float  	m_flElasticity; // 0x2d0
		float  	m_flShadowCastDistance; // 0x2d4
		unsigned char _0x2d8[0xa8];
		int    	m_CollisionGroup; // 0x380
		unsigned char _0x384[0x261];
		int    	m_bSimulatedEveryTick; // 0x5e5
		int    	m_bAnimatedEveryTick; // 0x5e6
		int    	m_bAlternateSorting; // 0x5e7
		int    	m_nMinCPULevel; // 0x5e8
		int    	m_nMaxCPULevel; // 0x5e9
		int    	m_nMinGPULevel; // 0x5ea
		int    	m_nMaxGPULevel; // 0x5eb
		int    	m_iTextureFrameIndex; // 0x5ec
		unsigned char _0x5f0[0x8];
		int    	m_hEffectEntity; // 0x5f8
	};
#pragma pack(pop)
